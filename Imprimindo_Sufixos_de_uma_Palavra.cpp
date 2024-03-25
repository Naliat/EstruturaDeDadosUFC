#include <iostream>
#include <string>

using namespace std;

int main()
{
    string palavra;
    cin >> palavra;

    int tamanho = palavra.size();
    for (int i = tamanho - 1; i >= 0; i--)
    {
        cout << palavra.substr(i) << endl;
    }
    return 0;
}
