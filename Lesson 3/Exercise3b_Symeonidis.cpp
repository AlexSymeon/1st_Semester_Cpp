#include <iostream>
using namespace std;

int main()
{
    int i,j,city;
    float mean = 0;

    int Dist[6][6] = {{0,501,217,354,703,328},
                     {501,0,467,152,205,208},
                     {217,467,0,337,670,314},
                     {354,152,337,0,354,64},
                     {703,205,670,354,0,411},
                     {328,208,314,64,411,0}};


    do{
    cout << "Give town that you want the mean distance from the others" << endl;
    cout << "Athens (1)" << endl << "Thessaloniki (2)" << endl << "Patra (3)" << endl << "Larisa (4)" << endl << "Xanthi (5)" << endl << "Volos (6)" << endl;

    cin >> city;

    for (i=0;i<6;i++)
    {
        mean = mean + Dist[i][city-1];
    }
    mean = mean/5;

    cout << "The mean value is: " << mean << endl;

    }while(!(city<=6 && city>0));
    
    return 0;
}