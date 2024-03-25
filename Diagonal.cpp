#include <iostream>
#include <cstring>

using namespace std;

void diagonal(char *s, int k)
{

    if (*s == '\0')
    {
        return;
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            cout << ' ';
        }

        cout << *s << endl;

        diagonal(s + 1, k + 1);
    }
}

int main()
{
    char palavra[101];
    cin >> palavra;

    diagonal(palavra, 0);

    return 0;
}
