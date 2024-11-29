#include <iostream>
using namespace std;

int sub1 (int *x);
int add3 (int *x);
int sub5 (int *x);
int mult (int *x);
double division(int *x);
double sum(void);


int main()
{
	sum();
	return 0;
}

int sub1 (int *x)
{
	return *x-1;
}

int add3 (int *x)
{
	return *x+3;
}

int sub5 (int *x)
{
	return *x-5;
}

int mult (int *x)
{
	int y = sub1(x);
	int z = add3(x);
	return y*z;
}

double division(int *x)
{
	int y = mult(x);
	int z = sub5(x);
	return (double)y/(double)z;
}

double sum(void)
{
    double result=0.0,result_temp=0.0;
    int x=6;

    while(1)
    {
        result_temp = division(&x);
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