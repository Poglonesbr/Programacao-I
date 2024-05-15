#include <iostream>
#include <string>

using namespace std;

class Aluno {
    public: 
        Aluno(){};              // Construtor
        ~Aluno(){};             // Destrutor
        
        
        float calcularMedia(){                      //Metodo para calcular a media
          media = (nota1 + nota2 + nota3) / 3;      //Conta da media
            return media;                           //Retornar para a Class o valor da media
        };

      void setNotas(float _nota1, float _nota2, float _nota3){      //Metodo para salvar as notas na Class 
        nota1 = _nota1;
        nota2 = _nota2;
        nota3 = _nota3;

      };

    void setInfo(std::string _nome, int _matricula){            // Metodo para salvar as informações 
        nome = _nome;
        matricula = _matricula;
    };
    
    float getMedia(){                       // Metodo para retornar o valor da media na Class
        return media;
    };
    
    void exibeDados(){                      // Metodo para printar os dados na tela
        std::cout << "O aluno " << nome << " com matricula: " << matricula; 
    } ;
    

    private:            //Definir as variaveis na Class
        float nota1;
        float nota2;
        float nota3;
        float media;
        int matricula;
        std::string nome;
};

int main()
{
    Aluno docente;  // Instânciar a Class Aluno no main
    float nota1;    // Definir as variaveis no main
    float nota2;
    float nota3;
    int matricula;
    std::string nome;

    std::cout << "Digite o numero da matricula: " << endl;      //Pedir as informções
    std::cin >> matricula;

    std::cout << "Escreva o nome do aluno: " << endl;
    std::cin >> nome;

    docente.setInfo(nome, matricula);           // Salvar as informções na Class

    std::cout << "Digite a primeira nota: " << endl;        // Pedindo as notas
    std::cin >> nota1;
    std::cout << "Digite a segunda nota: " << endl;
    std::cin >> nota2;
    std::cout << "Digite a terceira nota: " << endl;
    std::cin >> nota3;

    docente.setNotas(nota1, nota2, nota3);              //Salvando as notas na Class
    
    docente.calcularMedia();                    //Chamar o metodo para realizar a conta da media
    
    docente.exibeDados();                       //Chamar o metodo para exibir os dados
    
    if (docente.getMedia() > 6){                                     // Verificar se a media é maior que 6 para ser aprovado
        std::cout << " foi aprovado com média " << docente.getMedia();  // Se aprovado 
    }else{
        std::cout << " foi reprovado com média " << docente.getMedia(); // Se reprovado
    }

    return 0;
}
