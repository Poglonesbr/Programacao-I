#include <iostream>

 class Retangulo{
     public:
        Retangulo(){};
        ~Retangulo(){};
    
        float calculeArea(){
            area =  altura * largura;
            return area;
        };
        
        float calculePerimetro(){
            perimetro = 2 * (largura + altura);
            return perimetro;
        };
        
        void setMedidas(float _altura, float _largura){
            altura = _altura;
            largura = _largura;
        };

        };
        
    private:
        float altura;
        float largura;
        float area;
        float perimetro;
};

int main() {
        Retangulo conta;
        float altura;
        float largura;
        float area;
        float perimetro;
        
        std::cout << "Digite o valor da altura: ";
        std::cin >> altura;
        std::cout << "Digite o valor da largura: ";
        std::cin >> largura;
        
        conta.setMedidas(altura, largura);
        area = conta.calculeArea();
        std::cout << "A área é: " << area;
        std::cout << "\n";
        perimetro = conta.calculePerimetro();
        std::cout << "O perimetro é " << perimetro;

    return 0;
    }
