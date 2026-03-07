#include <iostream>

using namespace std;

int main(void){
    int a, b, res;

    cout << "Escreva os 2 números ";
    cin >> a >> b;

    res = a % b;

    cout << "A resposta é: " << res << endl;
    return 0;
}