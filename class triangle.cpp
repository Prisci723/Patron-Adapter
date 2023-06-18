
struct Vertice{
    int A;
    int B;
    int C;
};
class triangle{
    Vertice vertice;
    public:
    triangle(int A, int B, int C);
    triangle();
    int getPoint_x(Vertice v1);
    int getPoint_y(Vertice v1);

};