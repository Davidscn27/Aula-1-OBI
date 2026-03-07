#include <iostream>

using namespace std;

int main(void){
    long long res = 1;
    char letra;

    do{
        cout << "res = " << res << "\n";
        cout << "Quer multiplicar res por 2? Responda com Y para sim. ";
        cin >> letra;

        res *= 2;
    }while(letra == 'y' || letra == 'Y');


    return 0;
}