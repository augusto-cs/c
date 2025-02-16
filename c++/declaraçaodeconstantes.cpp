#include <iostream>
using namespace std;

#define PI 3.1415
#define PulaLinha cout<<"\n\n";

int main()
{
    system("cls");

    const int valorQualquer = 500;
    const double raizdeDois = 1.4142;

    cout<<"\n\n---- Imprimindo Constantes ----";
    cout<<"\n-01 Constante Valor de PI:  "<< PI;
    cout<<"\n-02 Constante Valor Qualquer: "<< valorQualquer;
    cout<<"\n-03 Constante Valor de Raiz Quadrada de dois"<<raizdeDois;

    PulaLinha

    return 0;
}