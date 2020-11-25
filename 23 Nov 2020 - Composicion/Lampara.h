//Clase Lampara del ejemplo de composición \
25 de noviembre
#ifndef LAMPARA_C
#define LAMPARA_C

#include "Apagador.h"
#include "Foco.h"
#include <string>
using namespace std;
class Lampara{
private:
    string color;
    float costo;
    Foco foco;
    Apagador apagador;
public:
    Lampara(){ //Asignación de variables de instancia
        color = "Amarilla";
        costo = 499.99;
        foco = Foco{};
        apagador = Apagador{};
    }

    //Member initializing list
    Lampara(string col,float cost) : color{col},costo{cost},foco{},apagador{}
    {
        //Ya no se inicializan aqui las variables de instancia
        //Si es necesario, se llamarian procesos - conectar una impresora
    }

    string getColor(){return color;}
    float getCosto(){return costo;}

    void setCosto(float c){costo = c;}

    string encender(){
        apagador.encender();
        return "Lampara encendida";
    }

    string apagar(){
        apagador.apagar();
        return "Lampara apagada";
    }

    bool isEncendida(){
        return apagador.isEncendido();
    }

    string cambiarFoco(int lum,string color){
        foco = Foco{lum,color};
        return "Foco cambiado";
    }

    string colorFoco(){
        return foco.getColor();
    }

    int luminosidadFoco(){
        return foco.getLuminosidad();
    }

    string print(){
        return "Lampara(" + color + "," + to_string(costo) + "," + foco.print() + "," + apagador.print() + ")";
    }
}; //Clase Lampara

#endif
