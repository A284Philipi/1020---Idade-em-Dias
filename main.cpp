#include <iostream>

using namespace std;

int main()
{
    int ano=0, mes=0, dias=0;
    cin >> dias;
    while (dias >= 365){
        ano++;
        dias = dias - 365;
    }
    while (dias >= 30){
        mes++;
        dias = dias - 30;
    }
    cout << ano << " ano(s)" <<endl<< mes << " mes(es)" <<endl<< dias << " dia(s)" <<endl;
    return 0;
}
