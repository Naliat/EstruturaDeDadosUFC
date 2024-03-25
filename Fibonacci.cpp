#include <iostream>

using namespace std;

int calculateRabbitPairs(int n, int k)
{

    if (n == 1 || n == 2)
    {

        return 1;
    }
    else
    {

        int pairs_previous_mouth = calculateRabbitPairs(n - 1, k);
        int pairs_two_months_ago = calculateRabbitPairs(n - 2, k);

        return pairs_previous_mouth + (pairs_two_months_ago * k);
    }
}

int main()
{

    int n, k;

    cin >> n >> k;

    int total_pairs = calculateRabbitPairs(n, k);

    cout << total_pairs << endl;
    return 0;
}