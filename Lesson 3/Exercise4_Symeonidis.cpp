#include <iostream>
using namespace std;

int main()
{

    int i,j,rows,cols;

    cout << "Give number of rows: " << endl;
    cin >> rows;
    cout << "Give number of columns: " << endl;
    cin >> cols;

    int arr_1[rows][cols],arr_2[rows][cols],result[rows][cols];

    cout << "Give the elements of the first matrix" << endl;
    
    for (i=0; i<rows; i++)
    {
        for (j=0; j<cols; j++)
        {
            cout << "Element [" << i << "] [" << j << "] : ";
            cin >> arr_1[i][j];
        }
    }

    cout << endl << "Give the elements of the first matrix" << endl;
    
    for (i=0; i<rows; i++)
    {
        for (j=0; j<cols; j++)
        {
            cout << "Element [" << i << "] [" << j << "] : ";
            cin >> arr_2[i][j];
        }
    }

    cout << endl << "The result is: " << endl;

    for (i=0;i<rows;i++)
    {
        for (j=0;j<cols;j++)
        {
            result[i][j] = arr_1[i][j] + arr_2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}