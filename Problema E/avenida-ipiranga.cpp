#include <iostream>

using namespace std;

int main()
{
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;

    cin >> x1 >> x2 >> x3;

    // int media = (x1+x2+x3) / 3;

    int menor = 100;

    if(x1 < menor) menor = x1;
    if(x2 < menor) menor = x2;
    if(x3 < menor) menor = x3;

    int maior = 1;

    if(x1 > maior) maior = x1;
    if(x2 > maior) maior = x2;
    if(x3 > maior) maior = x3;

    int cont = 0;

    if(x1-menor > 0) cont += x1-menor;
    else if(menor-x1 > 0) cont += menor-x1;
    if(x2-menor > 0) cont += x2-menor;
    else if(menor-x2 > 0) cont += menor-x2;
    if(x3-menor > 0) cont += x3-menor;
    else if(menor-x3 > 0) cont += menor-x3;

    for(menor+1; menor <= maior; menor++) {

        int temp = 0;

        if(x1-menor > 0) temp += x1-menor;
        else if(menor-x1 > 0) temp += menor-x1;
        if(x2-menor > 0) temp += x2-menor;
        else if(menor-x2 > 0) temp += menor-x2;
        if(x3-menor > 0) temp += x3-menor;
        else if(menor-x3 > 0) temp += menor-x3;

        // cout << "Km " << menor << ": " << temp << endl;

        if(temp < cont) cont = temp;
    }

    cout << cont;

    return 0;
}