#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

class Circle
{
    float radius;
    public :
        void getRadius()
        {
            cout << "Enter radius = ";
            cin >> radius;
        }

        void setRadius()
        {
            float r;
            cout << "Enter new radius = ";
            cin >> r;
            if (r > 0)
                radius = r;
            else
            {
                radius = 1;
                cout << "Invalid radius input.";
            }
        }

        void getArea()
        {
            float area;
            area = M_PI * radius * radius;
            cout << "The area of the circle : " << area << endl;
        }

        void getCircumference()
        {
            float circ;
            circ = M_PI * 2 * radius;
            cout << "The circumference of the circle : " << circ << endl;
        }
};

int main()
{
    Circle c1,c2;
    c1.getRadius();
    c1.getArea();
    c1.getCircumference();
    c2.setRadius();
    c2.getArea();
    c2.getCircumference();
    return 0;
}