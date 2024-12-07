#include <iostream>
using namespace std;

struct complex_num
{
    float real;
    float img;
};

void fill(complex_num *ptr);
void result(complex_num *ptr1, complex_num *ptr2);


int main()
{
    complex_num nums[2];
    int i;

    for (i=0;i<2;i++)
    {
        cout << "Dose times gia ton " << i+1 << "o arithmo" << endl;
        fill(&nums[i]);
    }

    result(&nums[0],&nums[1]);
    
    return 0;
}

void fill(complex_num *ptr)
{
    cout << "Dose timi gia to real part" << endl;
    cin >> (*ptr).real;
    cout << "Dose timi gia to imaginary part" << endl;
    cin >> (*ptr).img;
}

void result(complex_num *ptr1, complex_num *ptr2)
{
    float res1_real = (*ptr1).real+(*ptr2).real;
    float res1_img = (*ptr1).img+(*ptr2).img;

    float res2_real = (*ptr1).real-(*ptr2).real;
    float res2_img = (*ptr1).img-(*ptr2).img;
    
    cout << "Addition = " << res1_real << " + (" << res1_img << ") i" << endl;

    cout << "Subtraction = " << res2_real << " + (" << res2_img << ") i" << endl;
}