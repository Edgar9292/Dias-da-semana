#include <iostream>

using namespace std;

int main()
{
    int day;

    cout << "Dia da semana: ";
    cin >> day;

    switch(day)
    {
        case 1:
            cout <<"Domingo \n";
            break;
        case 2:
            cout <<"Segunda \n";
            break;
        case 3:
            cout <<"Ter�a \n";
            break;
        case 4:
            cout <<"Quarta \n";
            break;
        case 5:
            cout <<"Quinta \n";
            break;
        case 6:
            cout <<"Sexta \n";
            break;
        case 7:
            cout <<"S�bado \n";
            break;
        default:
            cout <<"Dia inv�lido";
    }

    return 0;
}
