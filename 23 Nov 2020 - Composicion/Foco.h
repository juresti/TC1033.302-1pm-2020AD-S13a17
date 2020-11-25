//Clase Foco del ejemplo Lampara de composición \
25 de noviembre
#ifndef FOCO_C
#define FOCO_C

#include <string>
using namespace std;
class Foco{
private:
    int luminosidad;
    string color;
public:
    Foco(){
        luminosidad = 60;
        color = "Blanco";
    }
    Foco(int lum,string color){
        luminosidad = lum;
        this->color = color;
    }

    int getLuminosidad(){return luminosidad;}
    string getColor(){return color;}

    string print(){
        return "Foco(" + to_string(luminosidad) + "," + color + ")";
    }
}; //Clase Foco

#endif
