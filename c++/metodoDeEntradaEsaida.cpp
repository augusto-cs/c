#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("cls");

    //Declaração de Variaveis
    int Idade = 0;
    char Nome[20] ="";
    char Nacionalidade[15] ="";
    string Endereco = "";

    cout<<"informe Seu Nome: ";
    cin>>Nome;
    cout<<"Informe a Idade: ";
    cin>>Idade;
    cout<<"Informe a Nacionalidade: ";
    cin>>Nacionalidade;
    fflush(stdin);
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
