#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double f(int q_igreja, int x) {
    if (q_igreja == 0) {
        return 0;
    }

    double ret = f(q_igreja - 1, x)/2.0;

    return ret + x;
}

int main() {
    int N, C;
    cin >> N >> C;
    double dinheiro_inicial = f(N, C)/2.0;

    
    cout << fixed << setprecision(2) << dinheiro_inicial << endl;

    return 0;
}
