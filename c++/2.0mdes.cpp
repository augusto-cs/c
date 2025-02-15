#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("cls");

    //Declaração de Variaveis
    int Idade = 0;
    string Nome, Nacionalidade, Endereco;

    cout<<"informe Seu Nome: ";
    getline(cin, Nome);

    cout<<"Informe a Idade: ";
    cin>> Idade;
    cin.ignore();

    cout<<"Informe a Nacionalidade: ";
    getline(cin, Nacionalidade);

    cout<<"Informe seu Endereco: ";
    getline(cin, Endereco);
   

    //Imprimindo no terminal
    cout<<"\n\n------ Imprimindo Dados Informados ------";
    cout<<"\n--- Nome: "<< Nome;
    cout<<"\n--- Idade:"<< Idade;
    cout<<"\n--- Nacionalidade:"<<Nacionalidade;
    cout<<"\n--- Endereco:"<<Endereco;

    return 0;
}