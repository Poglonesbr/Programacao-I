#include <iostream>
#define pi 3.14 
#include <string>

using namespace std;

// Definir valor de pi no codigo

 class Circulo{
     public:
        Circulo(){};  // Constutor
        ~Circulo(){}; // Destrutor
    
        float calculeArea(){  // Método para calcular a area
            area =  pi * (raio * raio);
            return area;
        };
        
        float calculePerimetro(){ // Método para calcular a area
            perimetro = pi * raio * 2;
            return perimetro;
        };
        
        void setRaio(float _raio){ // Método para "salvar" o valor de raio na class Circulo
            raio = _raio;
        };

       float getArea() {
         return area;
       };

       float getPerimetro() {
         return perimetro;
       };
        
    private:  // Definir variaveis
        float raio;
        float area;
        float perimetro;
};

int main() { 
        Circulo conta; // Instanciar a class no main para ser utilizada no main
        float raio; // Definir variavel
        
        std::cout << "Digite o valor do raio: "; // Pedir valor do raio
        std::cin >> raio;
        
        conta.setRaio(raio); // Guardar o valor de raio na class Circulo
 
        conta.calculeArea();    //Realizar a conta
        conta.calculePerimetro();  //Realizar a conta
         
        std::cout << "A área é: " << conta.getArea() << endl;        // Print e usar get para retornar o valor
        std::cout << "O perimetro é " << conta.getPerimetro() << endl;  // Print e usar get para retornar o valor
        
    }
