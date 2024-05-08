#include <iostream>
#define pi 3.14

 class Circulo{
     public:
        Circulo();
        ~Circulo();
    
        float calculeArea(){
            area =  pi * (raio * raio);
            return area;
        };
        
        void setRaio(float _raio){
            raio = _raio;
        };
        
    private:
        float raio;
        float area;
};


int main() {
        Circulo conta;
        float raio;
        float area;
        
        std::cout << "Digite o valor do raio";
        std::cin >> raio;
        
        conta.setRaio(raio);
        area = conta.calculeArea();
        
    }