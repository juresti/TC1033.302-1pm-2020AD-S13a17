//Pruebas de las clases del ejercio de composición \
sobre la clase Lampara \
23 noviembre
#include "Apagador.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "***** Pruebas de Apagador\n";
    Apagador ap1;
    cout << ap1.isEncendido() << endl;
    ap1.encender();
    cout << ap1.isEncendido() << endl;
    ap1.apagar();
    cout << ap1.isEncendido() << endl;
    cout << ap1.print();
    return 0;
}
