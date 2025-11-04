#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int m = 0;
    int i = 1;

    cin >> n >> m;

    while(i <= n) {

        for(int j = 1; j <= m; j++) {
            cout << "#";
        }

        cout << endl;
        i++;
        if(i>n) break;

        for(int j = 1; j < m; j++) {
            cout << ".";
        }

        cout << "#" << endl;

        i++;
        if(i>n) break;

        for(int j = 1; j <= m; j++) {
            cout << "#";
        }

        cout << endl;
        i++;
        if(i>n) break;

        cout << "#";

        for(int j = 2; j <= m; j++) {
            cout << ".";
        }

        cout << endl;
        i++;
        if(i>n) break;
    }


    return 0;
}