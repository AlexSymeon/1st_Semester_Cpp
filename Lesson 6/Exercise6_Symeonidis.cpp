#include <iostream>
#include <cmath>
using namespace std;

class circle
{
    private:
        double radius;

    public:
        void set_aktina(double r)
            {
                radius = r;
            }
        void give_embadon()
            {
                double area = radius * radius * M_PI;
                cout << "The area of the circle is: " << area << endl;
            }
};

int main()
{
    circle c;
    double x;

    cout << "Give radius: " << endl;
    cin >> x;

    c.set_aktina(x);
    c.give_embadon();

    return 0;
}