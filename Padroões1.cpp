#include <iostream>
using namespace std;

int calcularQuaSomb(int n)
{

    int sombreados = 20 + (n - 1) * 8;
    return sombreados;
}

int main()
{
    int posicao;

    cin >> posicao;

    cout << calcularQuaSomb(posicao) << endl;

    return 0;
}