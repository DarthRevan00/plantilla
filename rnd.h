#pragma once
#include <random>
#include <memory>

using namespace std;
class GTRandom {
    public:
        GTRandom(int maxValue);
        GTRandom(int minValue,int maxValue);
        int getNextRandom();
    private:
         mt19937 m_engine;
         uniform_int_distribution<int> m_distribution;
};