//Compilador: https://www.online-cpp.com/

#include<iostream>
using namespace std;
int main()
{
    int nota1, nota2, media;
  
    cout << "Nota 1: ";
    cin >> nota1;
    cout << "Nota 2: ";
    cin >> nota2;
    
    media = (nota1 + nota2) / 2;
    
    cout << "Média: " << media;
    return 0;
}
