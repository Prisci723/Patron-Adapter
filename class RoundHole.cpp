#include "class TrianglePegAdapter.cpp"

class RoundHole{
    private:
    int radio;
    public: 
     RoundHole();
     int getRadio(){
        return radio;
     }
     bool fits(RoundPeg* Figura){
          return this->getRadio() >= Figura->getRadius();
     }

};