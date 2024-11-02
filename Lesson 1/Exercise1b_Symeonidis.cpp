#include <iostream>
using namespace std;

int main() {
    float x,result;
    int y,z;
    
    cout << "Give a float number that has exactly two decimal points from the range [0,10) (i.e. 6.12)" << "\n";
    cin >> x;
    
    y = x * 100;
    z = x * 10;
    
    switch (x>=0 && x<10)
    {
        case 1:
            cout << "The number given is within the required range" << "\n";
            switch (x * 100 == y)
            {
                case 1:
                    cout << "The number has two decimal points\n";
                    switch (x*10-z >= 0.5)
                    {
                        case 1:
                            result = ((float)z+1)/10;
                            cout << "The result is: " << result << "\n";
                        break;
                        
                        default:
                            result = (float)z/10;
                            cout << "The result is: " << result << "\n";
                    }
                break;
                
                default:
                    cout << "The number does not have two decimal points";
            }
        break;
        
        default:
            cout << "Give a different number (number is out of range)" << "\n";
    }

    return 0;
}