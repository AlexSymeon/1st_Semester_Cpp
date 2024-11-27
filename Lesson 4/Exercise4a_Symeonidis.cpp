#include <iostream>
using namespace std;

int sub1 (int x);
int sub3 (int x);
int sub5 (int x);
int mult (int x,int y);
double mod(int x,int y);

int main()
{

    int i=6;
    double result_temp,result;

    do 
    {
        result_temp = mod(mult(sub1(i),sub3(i)),sub5(i));
        result = result + result_temp;
        cout << result << endl;
        i++;
    }while(result<500);

    cout << "i is equal to " << i-1 << " with result: " << result - result_temp << endl;

    return 0;
}

int sub1 (int x)
{
    return x-1;
}

int sub3 (int x)
{
    return x-3;
}

int sub5 (int x)
{
    return x-5;
}

int mult (int x,int y)
{
    return x*y;
}

double mod(int x,int y)
{
    return (double)x/(double)y;
}