#include <iostream>
using namespace std;

class Point{
    public:
        int x;
        int y;
        int color;

        Point(int a, int b, int color = 255){
            x = a;
            y = b;
            cout << "point(" << x << "," << y << "," << color << ")" << endl;
        }
        int getx() const {
            return x;
        }

        int gety() const {
            return y;
        }

        ~Point(){
            printf("point~~~\n");
        }
};

class Rect{
    public:
        int x;
        int y;
        int w;
        int h;

        Rect( int a, int b, int c, int d) {
            printf("rect\n");
            w = c;
            h = d;
            x = a;
            y = b;

        }
        void display(){
            cout << x << "," << y << "," << w << "," << h << endl;
        }
        double getx(){
            return x;
        }
        double gety(){
            return y;
        }
        double getcolor(int color){
            return color;
        }
        ~Rect(){
            printf("rect~~~\n");
        }
};

int main(){
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    Point point(x, y);
    Rect rect(point.getx(), point.gety() , w, h);
    rect.display();
    

    return 0;
}
