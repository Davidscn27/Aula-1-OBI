#include <iostream>

using namespace std;

int main (void){
    int A, B, C, D;

    cin >> A >> B >> C >> D;

    for (int i = 0; i <= C - A; i = i + D){
        if (C - i >= A && C - i <= B){
            cout << "S" "\n";

            return 0;
        }

    }

    cout << "N" "\n";

    return 0;
}