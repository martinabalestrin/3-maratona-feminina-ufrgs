#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int linhas;
    vector<string> horarios;

    cin >> linhas;
    for(int i = 0; i < linhas; i++) {
        string temp;
        cin >> temp;
        horarios.push_back(temp);
    }

    for(int i = 0; i < linhas; i++) {

        int horas = stoi(horarios[i].substr(0,2));
        int minutos = stoi(horarios[i].substr(3,2));

        if (horas > 23) {
            //cout << "ERRO" << endl;
            return 0;
        }
        if (minutos > 59) {
            //cout << "ERRO" << endl;
            return 0;
        }

        if(horas > 0 && horas < 12) {

            if (horas < 10) {
                if(minutos < 10) {
                    cout << "0" << horas << ":0" << minutos << " AM" << endl;
                } else {
                    cout << "0" << horas << ":" << minutos << " AM" << endl;
                }
            }

            else {
                if(minutos < 10) {
                    cout << horas << ":0" << minutos << " AM" << endl;
                } else {
                    cout << horas << ":" << minutos << " AM" << endl;
                }
            }
        }

        else if(horas > 12) {

            if(horas-12 < 10) {
                if(minutos < 10) {
                    cout << "0" << horas-12 << ":0" << minutos << " PM" << endl;
                }
                else {
                    cout << "0" << horas-12 << ":" << minutos << " PM" << endl;
                }
            }
            else {
                if(minutos < 10) {
                    cout << horas-12 << ":0" << minutos << " PM" << endl;
                }
                else {
                    cout << horas-12 << ":" << minutos << " PM" << endl;
                }
            }
        }

        else if(horas == 00) {

            if(minutos < 10) {
                cout << "12:0" << minutos << " AM" << endl;
            }
            else {
                cout << "12:" << minutos << " AM" << endl;
            }
        }

        else if(horas == 12) {

            if(minutos < 10) {
                cout << "12:0" << minutos << " PM" << endl;
            }
            else {
                cout << "12:" << minutos << " PM" << endl;
            }
        }
    }

    return 0;
}