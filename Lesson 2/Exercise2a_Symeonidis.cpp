#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int value,i,j;
    int digit = 0;
    int octal[10]={0};
    int result = 0;
	
	do{
    cout << "Decimal to Octal ---> Press 1\n" << "Octal to Decimal ---> Press 2\n";
    cin >> j;
	
    switch (j)
    {
        case 1:
        
            value = 0;
            digit = 0;
            octal[10] = {0};
            result = 0;
            
            cout << "Give decimal number: " ;
    	    cin >> value;
            while (1)
            {
                if (value >= 1)
                {
                    octal[digit] = value%8;
                    value = (float)value/8;
                    digit++;
                if (value == 0)
                {
                    break;
                }
                }
            }
            cout << "The result is: ";
            
            for (i=digit-1;i>=0;i--)
            {
                cout << octal[i];
            }
            cout << endl;
        break;

        case 2:
            
            value = 0;
            digit = 0;
            octal[10] = {0};
            result = 0;
        
            cout << "Give octal number: " ;
    	    cin >> value;
    	    
    	    int is_valid;
            int digit_valid;
            is_valid = value;
            
            while (is_valid != 0)
            {
                digit_valid = is_valid%10;
                if (digit_valid < 0 || digit_valid > 7)
                {
                    cout << "False number (numbers must be between 0 and 7)" << endl;
                    break;
                }
                is_valid = is_valid/10;
            }


            while (1)
            {
                if (value >= 1)
                {
                    octal[digit] = value%10;
                    value = (float)value/10;
                    result = result + octal[digit]*pow((double)8,(double)digit);
                    digit++;
                if (value == 0)
                {
                    break;
                }
                }
            }
            cout << "The result is: " << result << endl;
        break;
        
        default: cout << "Please try another number\n";
    }
	}while(j!=1 || j!=2);

}