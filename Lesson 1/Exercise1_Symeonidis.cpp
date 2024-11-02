#include <iostream>
using namespace std;

int main() {
    double x,result;
    int y,z;
    
    cout << "Give a float number that has exactly two decimal points from the range [0,10) (i.e. 6.12)" << "\n";
    cin >> x;
    
    y = x * 100;
    z = x * 10;
    
    if (x>=0 && x<10)
    {
        cout << "The number given is within the required range" << "\n";
        if (x * 100 == y)
        {
            cout << "The number has two decimal points\n";
            if (x*10-z >= 0.5)
            {
                result = ((float)z+1)/10;
                cout << "The result is: " << result << "\n";
            }
            else
            {
                result = (float)z/10;
                cout << "The result is: " << result << "\n";
            }
        }
        else
        {
            cout << "The number does not have two decimal points";
        }
    }
    else
    {
        cout << "Give a different number (number is out of range)" << "\n";
    }

    return 0;
}