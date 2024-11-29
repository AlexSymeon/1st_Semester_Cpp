#include <iostream>
using namespace std;

int sub1 (int x);
int add3 (int x);
int sub5 (int x);
int mult (int x,int y);
double division(int x,int y);
double sum(void);

int main()
{
    sum();
    return 0;
}

int sub1 (int x)
{
    return x-1;
}

int add3 (int x)
{
    return x+3;
}

int sub5 (int x)
{
    return x-5;
}

int mult (int x,int y)
{
    return x*y;
}

double division(int x,int y)
{
    return (double)x/(double)y;
}

double sum(void)
{
    double result=0.0,result_temp=0.0;
    int x=6;

    while(1)
    {
        result_temp = division(mult(sub1(x),add3(x)),sub5(x));
        result = result + result_temp;
        if (result > 500)
        {
            break;
        }
        cout << "For i=" << x << " the result is: " << result << endl;
        x++;
    }

    cout << "For i=" << x+1 << " the result is above 500." << endl;

    return result;
}