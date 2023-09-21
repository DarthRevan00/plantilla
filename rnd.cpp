#include "rnd.h"
#include <random>
#include <ctime>
#include <memory>

using namespace std;
GTRandom::GTRandom(int maxValue):m_distribution{uniform_int_distribution<int>{0,maxValue}} {
    random_device seeder;
    const auto seed { seeder.entropy() ? seeder() : time(nullptr)};    
    m_engine=mt19937 {static_cast<mt19937::result_type>(seed)};
}

int GTRandom::getNextRandom(){
    return m_distribution(m_engine);
}