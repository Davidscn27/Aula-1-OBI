#include <iostream>

using namespace std;

int main(void){
   int N, M; //n = numero de refeições e m = a maximo de calorias
   int P, G, C; //P = proteinas, G = gorduras e C = carboidrato
   int T = 0; //T = total de calorias

    cout << "Quantas vezes garfield comeu e qual o maximo de calorias que ele pode comer? ";
    cin >> N >> M;

    for (int i = 0; i < N; i++){
        cout << "Quantas proteinas, gorduras e carboidratos garfield comeu? ";
        cin >> P >> G >> C;
        
        T += P*4 + G*9 + C*4;
    }

    int R = M - T; //R = resto de calorias sobrando

    if(R > 0){
    cout << "Garfield pode comer " << R << " calorias ainda. " << "\n";
    }
    else if(R  == 0){
        cout << "Garfield ja bateu a meta do dia " << "\n";
    }
    else{
        cout << "Garfield deve passar fome pelo resto do dia.\n ";
    }

    return 0;

}