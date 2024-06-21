#ifndef COMPRA_HPP
#define COMPRA_HPP
#include <iostream>
#include <vector>
#include <chrono>
#include <ctime>
#include <sstream>
#include <windows.h>
#include "Compra.cpp"
#include "produto.cpp"
#include "produto.hpp"

class Compra(){
    public:
    Compra(){}
    ~Compra(){}

    void setQntd(int _qntd){
        qntd=_qntd
    }
    void setValorTotal(float _valorTotal){
        valorTotal=_valorTotal;
    }
    void setId(int _id){
        id=_id;
    }
    void setTipoPag(bool _tipoPag){
        tipoPag=_tipoPag;
    }

    std::vector<Produto> produto;
    int qntd;
    bool tipoPag;
    float valorTotal;
    std::chrono::time_point<std::chrono::system_clock> dataCompra;
    protected: 
    int id;
}

#endif