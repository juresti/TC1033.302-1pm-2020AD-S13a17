//Pruebas de las clases del ejercio de composición \
sobre la clase Lampara \
23 noviembre
#include "Apagador.h"
#include "Foco.h"
#include "Lampara.h"
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
    cout << ap1.print() << endl;

    cout <<"\n***** Pruebas de Foco\n";
    Foco foco1{};
    cout << foco1.print() << endl;
    Foco foco2{500,"Azul"};
    cout << foco2.getLuminosidad() << endl;
    cout << foco2.getColor() << endl;

    cout << "\n***** Pruebas de Lampara\n";
    Lampara lamp1{};
    cout << lamp1.print() << endl;
    lamp1.setCosto(299.99);
    cout << lamp1.encender() << endl;
    cout << lamp1.apagar() << endl;
    cout << lamp1.isEncendida() << endl;
    Lampara lamp2{"Roja",40.50};
    cout << lamp2.getColor() << endl;
    cout << lamp2.getCosto() << endl;
    lamp2.cambiarFoco(20,"Azul");
    cout << lamp2.print() << endl;
    cout << lamp2.colorFoco() << endl;
    cout << lamp2.luminosidadFoco() << endl;
    return 0;
}
