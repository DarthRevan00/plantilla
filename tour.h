#pragma once

#include <vector>

using std::vector;

class Tour {
    public:
        Tour(int nCiudades);
        void visualizar();
        void shuffleTour();
    private:
        vector<int> m_seq_ciudades;
};