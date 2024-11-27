#include <iostream>
using namespace std;

int sub1 (int *x);
int sub3 (int *x);
int sub5 (int *x);
int mult (int *x,int *y);
double mod(int *x,int *y);


int main()
{

	int x,i=6;
	double result_temp,result;
	int temp1,temp3,temp5,temp_mult;
	double temp_mod;


	do
	{
	    temp1 = sub1(&i);
		temp3 = sub3(&i);
		temp5 = sub5(&i);
		temp_mult = mult(&temp1,&temp3);
		temp_mod = mod(&temp_mult,&temp5);
		
		result = result + temp_mod;
		cout << result << endl;
		i++;
	} while(result < 500);

	cout << "i is equal to " << i-1 << " with result: " << result - temp_mod << endl;


	return 0;
}

int sub1 (int *x)
{
	return *x-1;
}

int sub3 (int *x)
{
	return *x-3;
}

int sub5 (int *x)
{
	return *x-5;
}

int mult (int *x,int *y)
{
	return (*x)*(*y);
}

double mod(int *x,int *y)
{
	return (double)*x/(double)*y;
}