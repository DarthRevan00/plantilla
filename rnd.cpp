#include "rnd.h"
#include <random>
#include <ctime>
#include <memory>

using namespace std;

auto init_seed() {
    random_device seeder;
    const auto seed { seeder.entropy() ? seeder() : time(nullptr)};    
    return seed;
}

GTRandom::GTRandom(int maxValue):
    m_distribution{uniform_int_distribution<int>{0,maxValue}}, 
    m_engine{mt19937{static_cast<mt19937::result_type>(init_seed())}} {}

GTRandom::GTRandom(int minValue,int maxValue):
    m_distribution{uniform_int_distribution<int>{minValue,maxValue}},
    m_engine{mt19937{static_cast<mt19937::result_type>(init_seed())}} {}

int GTRandom::getNextRandom(){
    return m_distribution(m_engine);
}