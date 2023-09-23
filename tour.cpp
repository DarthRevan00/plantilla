#include <iostream>
#include <vector>
#include <algorithm>
#include "tour.h"

using std::generate;
using std::cout;
using std::endl;
using std::swap;

Tour::Tour(int nCiudades):m_seq_ciudades(nCiudades),m_rnd(1,nCiudades-1){
    int i {0};
    generate(m_seq_ciudades.begin(),m_seq_ciudades.end(),[&i](){
        return i++;
    });
}

void Tour::visualizar() {
    auto i=m_seq_ciudades.begin();
    cout << "[ ";
    while(i<m_seq_ciudades.end()){
        cout << *i << " ";
        i++;
    }
    cout<<"]"<<endl;
}

void Tour::shuffleTour(const int veces) {
    for (int i=0;i<veces;i++){
        int e1=m_rnd.getNextRandom();
        int e2=m_rnd.getNextRandom();
        swap(m_seq_ciudades[e1],m_seq_ciudades[e2]);
    }
}