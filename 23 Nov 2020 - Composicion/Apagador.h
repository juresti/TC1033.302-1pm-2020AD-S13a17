//Definición clase Apagador ejercicio de composición \
23 de noviembre
#ifndef APAGADOR_C
#define APAGADOR_C

#include <iostream>
#include <string>
using namespace std;
class Apagador{
private:
    bool encendido;
public:
    Apagador(){encendido = false;}
    ~Apagador(){//Procesos para liberar recursos
        cout << "Destruyendo Apagador";
    }

    bool isEncendido(){return encendido;}
    void encender(){encendido = true;}
    void apagar(){encendido = false;}

    string print(){
        //Regresa el estado del objeto Apagador
        string estado {};
        if (isEncendido()) {estado = "encendido";}
        else {estado = "apagado";}
        return "Apagador. Se encuentra " + estado;
    }
}; //Clase Apagador

#endif
