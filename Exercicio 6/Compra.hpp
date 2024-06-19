#ifndef COMPRA_HPP
#define COMPRA_HPP
#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <sstream>
#include <windows.h>
#include "Compra.cpp

class Compra(){
    public:
    Compra(){}
    ~Compra(){}

    vector<Produto> produto;
    int qntd;
    bool tipoPag;
    float valorTotal;
    std::chrono::time_point<std::chrono::system_clock> dataCompra;
}

#endif