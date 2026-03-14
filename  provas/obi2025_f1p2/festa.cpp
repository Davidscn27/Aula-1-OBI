#include <iostream>

using namespace std;
int main(void){
    int E, S, L, dis;
    cout << "Qual a posição da Escola, Supermercado e Lojinha? ";
    cin >> E >> S >> L;

    dis = abs(E - S) + abs(S - L) + abs(L - E);

    cout << dis << "\n";
    
    return 0;
}