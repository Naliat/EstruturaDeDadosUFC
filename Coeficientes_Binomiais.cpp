#include <iostream>
using namespace std;

int coefiBinomial(int n, int k)
{

    if (k == 0 || k == n)

        return 1;

    return coefiBinomial(n - 1, k - 1) + coefiBinomial(n - 1, k);
}

int main()
{

    int n, k;
    cin >> n >> k;

    cout << coefiBinomial(n, k) << endl;

    return 0;
}
