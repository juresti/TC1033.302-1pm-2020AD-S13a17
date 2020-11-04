#include <iostream>
using namespace std;

void numeroImpar(){
    int num {};

    cout << "Dime un numero impar: "; cin >> num;
    while(num % 2 != 1){
        cout << "Ese numero es PAR\n";
        cout << "Dime un numero impar: "; cin >> num;
    }
    cout << "Gracias el " << to_string(num) << " es impar\n";
}

int main()
{
    //Problema 1
    //Problema 2
    cout << "Problema 2\n";
    numeroImpar();
    return 0;
}
