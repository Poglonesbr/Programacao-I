#include <iostream>
#include <string>

using namespace std;

 class Retangulo{
     public:
        Retangulo(){};          // Construtor
        ~Retangulo(){};         // Destrutor
    
        float calculeArea(){                //Metodo para calcular a area
            area =  altura * largura;       // Conta 
            return area;                    // Retornar o valor da area para deixar salvo na Class
        };
            
        float calculePerimetro(){                   //Metodo para calcular o perimetro
            perimetro = 2 * (largura + altura);     // Conta 
            return perimetro;                       // Retornar o valor do perimetro para deixar salvo na Class
        };
        
        void setMedidas(float _altura, float _largura){     //Metodo para salvar o valor na Class e não pedir como parametros nos metodos de calcular
            altura = _altura;
            largura = _largura;
        };

        float getPerimetro(){               // Metodo que utiliza o valor da class caso tenha uma alteração
            return perimetro;
            
        }
        
        float getArea(){                    // Metodo que utiliza o valor da class caso tenha uma alteração
            return area;
        }

        
    private:                              //Declaração de variaveis na Class
        float altura;
        float largura;
        float area;
        float perimetro;
};

int main() {    
        Retangulo conta;        //Instânciar o objeto Retangulo no main
        float altura;           //Declaração de variaveis no main
        float largura;
        float area;
        float perimetro;
        
        std::cout << "Digite o valor da altura: ";      //Pedir os valores para realizar as contas
        std::cin >> altura;
        std::cout << "Digite o valor da largura: ";
        std::cin >> largura;
        
        conta.setMedidas(altura, largura);          //Mandar os valores das medidas para a class Retangulo
        
        conta.calculeArea();                        // Chamar o metodo para realizar as contas
        conta.calculePerimetro();
        
        
        std::cout << "A área é: " << conta.getArea() << endl;               // Printar os valores na tela *endl é como o \n
        std::cout << "O perimetro é " << conta.getPerimetro() << endl;

    return 0;
    }
