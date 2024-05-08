/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>


class Aluno {
    public: 
        Aluno(){};
        ~Aluno(){};
        float calcularMedia(float nota1, float nota2, float nota3){
          media = (nota1 + nota2 + nota3) / 3;
            return media;
        }
        

    private:
      float media;
};

int main()
{
    Aluno docente;
    float nota1;
    float nota2;
    float nota3;
    float media;
    int matricula;
    std::string nome;

    std::cout << "Digite o numero da matricula: ";
    std::cin >> matricula;
  
    std::cout << "Escreva o nome do aluno: ";
    std::cin >> nome;

    std::cout << "Digite a primeira nota: ";
    std::cin >> nota1;
    std::cout << "Digite a segunda nota: ";
    std::cin >> nota2;
    std::cout << "Digite a terceira nota: ";
    std::cin >> nota3;

    media = docente.calcularMedia(nota1, nota2, nota3);
    if (media > 6){
        std::cout << "Aluno aprovado com média: " << media;
    }else{
        std::cout << "Aluno reprovado com média: " << media;
    }

    

    return 0;
}
