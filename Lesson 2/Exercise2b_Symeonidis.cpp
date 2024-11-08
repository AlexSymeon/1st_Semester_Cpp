#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int value,i,j;
    int digit = 0;
    int mod = 0;
    string result = "";
    string hex_given = "";
    char digit_hex;
    int result_hex = 0;
	
	do{
    cout << "Decimal to Hex ---> Press 1\n" << "Hex to Decimal ---> Press 2\n";
    cin >> j;
	
    switch (j)
    {
        case 1:
        
            value = 0;
            digit = 0;
            mod = 0;
            result = "";
            
            cout << "Give decimal number: " ;
    	    cin >> value;
            while (1)
            {
                if (value >= 1)
                {
                    mod = value%16;
                    if (mod >= 10)
                    {
                        result = char(mod + 'A' - 10) + result;
                    }
                    else if (mod < 10)
                    {
                        result = char(mod + '0') + result;
                    }
                    value = (float)value/16;
                }
                else
                {
                    break;
                }
            }
            cout << "The result is: " << result << endl;
            
        break;

        case 2:
        
            value = 0;
            digit = 0;
            mod = 0;
            result = "";
            hex_given = "";
            result_hex = 0;
 
            cout << "Give Hex number: ";
            cin >> hex_given;
            
            for (i = hex_given.size() - 1; i >=0 ; i--)
            {
                digit_hex = hex_given[i];
                if (digit_hex >= '0' && digit_hex <= '9')
                {
                    result_hex = result_hex + (int)(digit_hex - '0') * pow((double)16,(double)(hex_given.size() - i - 1));
                }
                else if (digit_hex >= 'A' && digit_hex <= 'F')
                {
                    result_hex = result_hex + ((int)(digit_hex - 'A') + 10) * pow((double)16,(double)(hex_given.size() - i - 1));
                }
                else
                {
                    cout << "Invalid Number.\n";
                }
            }

            cout << "The result is: " << result_hex << endl;
            
        break;
        
        default: cout << "Please try another number\n";
    }
	}while(j!=1 || j!=2);

}