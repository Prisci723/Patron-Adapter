#include "class RoundPeg.cpp"
#include "class triangle.cpp"
#include <cmath>

class TrianglePegAdapter: public RoundPeg{
    private:
    triangle figura;
    triangle * ptrTri;
    public:
    TrianglePegAdapter(triangle figura):RoundPeg(){
        this->figura = figura; 
    }

    int getRadius(Vertice v1, int circumcentro_x, int circumcentro_y){
        int x, y;
        x = ptrTri->getPoint_x(v1);
        y = ptrTri->getPoint_y(v1);
        return sqrt( pow((x - circumcentro_x), 2) + pow((y - circumcentro_y),2));
    }

};

