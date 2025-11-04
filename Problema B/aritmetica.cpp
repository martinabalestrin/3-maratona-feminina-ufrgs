#include <iostream>

using namespace std;

int main()
{
    int L = 0;
    int R = 0;
    int K = 0;
    int cont = 0;

    cin >> L >> R >> K;

    for(int i = L; i <= R; i++) {
        if(i % K == 0) {
            cont++;
        }
    }

    cout << cont;

    return 0;
}