#pragma once

#include <vector>
#include "rnd.h"

using std::vector;

class Tour {
    public:
        Tour(int nCiudades);
        void visualizar();
        void shuffleTour(const int veces=1'000'000);
    private:
        vector<int> m_seq_ciudades;
        GTRandom m_rnd;
};