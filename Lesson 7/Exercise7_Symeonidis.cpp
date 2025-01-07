#include <iostream>
using namespace std;

class dim
{
    private:
        float x,y,z;

    public:
        void give_x(float a)
        {        
            x = a;
        }
        void give_y(float a)
        {
            y = a;
        }
        void give_z(float a)
        {
            z = a;
        }
        void give_all(float a,float b,float c)
        {
            x = a;
            y = b;
            z = c;
        }
        void return_x()
        {
            cout << "The value of x is: " << x << endl;
        }
        void return_y()
        {
            cout << "The value of y is: " << y << endl;
        }
        void return_z()
        {
            cout << "The value of z is: " << z << endl;
        }
        void return_all()
        {
            cout << "(" << x << "," << y << "," << z << ")" << endl;
        }

        void move(char axis, float amount)
        {
        switch(axis)
            {
            case 'x':
                x = x + amount;
                break;
            case 'y':
                y = y + amount;
                break;
            case 'z':
                z = z + amount;
                break;
            }
        }
        
        
};


int main()
{
    dim d;
    
    d.give_x(5);
    d.give_y(4);
    d.give_z(3);

    d.return_x();
    d.return_y();
    d.return_z();

    d.give_all(6,8,9);
    d.return_all();

    d.move('x',3);
    d.return_x();

    return 0;
}