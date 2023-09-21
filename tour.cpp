#include <iostream>
#include <vector>
#include <algorithm>
#include "tour.h"

using std::generate;
using std::cout;
using std::endl;

Tour::Tour(int nCiudades):m_seq_ciudades(nCiudades){
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