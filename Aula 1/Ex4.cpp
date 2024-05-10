#include <iostream>
#include <string>


class Aluno {
    public: 
        Aluno(){};
        ~Aluno(){};
        float calcularMedia(){
          media = (nota1 + nota2 + nota3) / 3;
            return media;
        }

      void setNotas(float _nota1, float _nota2, float _nota3){
        nota1 = _nota1;
        nota2 = _nota2;
        nota3 = _nota3;

      }

    void setInfo(std::string _nome, int _matricula){
        nome = _nome;
        matricula = _matricula;
    }

    private:
        float nota1;
        float nota2;
        float nota3;
        float media;
        int matricula;
        std::string nome;
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

    docente.setInfo(nome, matricula);

    std::cout << "Digite a primeira nota: ";
    std::cin >> nota1;
    std::cout << "Digite a segunda nota: ";
    std::cin >> nota2;
    std::cout << "Digite a terceira nota: ";
    std::cin >> nota3;

    docente.setNotas(nota1, nota2, nota3);
    media = docente.calcularMedia();
    if (media > 6){
        std::cout << "Aluno aprovado com média " << media;
    }else{
        std::cout << "Aluno reprovado com média " << media;
    }

    return 0;
}
