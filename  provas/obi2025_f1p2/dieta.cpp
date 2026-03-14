#include <iostream>

using namespace std;

int main() {
    int N, M, P, G, C, T = 0;

    cin >> N >> M;

    for (int i = 0; i < N; i++){
        cin >> P >> G >> C;
                            
        T += P*4 + G*9 + C*4;
    }

    cout << M - T << "\n";

    return 0;
}