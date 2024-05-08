#include <iostream>
#define pi 3.14

 class Circulo{
     public:
        Circulo(){};
        ~Circulo(){};
    
        float calculeArea(){
            area =  pi * (raio * raio);
            return area;
        };
        
        float calculePerimetro(){
            perimetro = pi * raio * 2;
            return perimetro;
        };
        
        void setRaio(float _raio){
            raio = _raio;
        };
        
    private:
        float raio;
        float area;
        float perimetro;
};

int main() {
        Circulo conta;
        float raio;
        float area;
        float perimetro;
        
        std::cout << "Digite o valor do raio: ";
        std::cin >> raio;
        
        conta.setRaio(raio);
        area = conta.calculeArea();
        std::cout << "A área é: " << area;
        std::cout << "\n";
        perimetro = conta.calculePerimetro();
        std::cout << "O perimetro é " << perimetro;
        
    }
