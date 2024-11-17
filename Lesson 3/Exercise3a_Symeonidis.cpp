#include <iostream>
using namespace std;

int main()
{
    int i,j,city_1,city_2;

    int Dist[6][6] = {{0,501,217,354,703,328},
                     {501,0,467,152,205,208},
                     {217,467,0,337,670,314},
                     {354,152,337,0,354,64},
                     {703,205,670,354,0,411},
                     {328,208,314,64,411,0}};
    

    cout << "Give the two numbers that correspond to the cities you want to find the distance" << endl;
    cout << "Athens (1)" << endl << "Thessaloniki (2)" << endl << "Patra (3)" << endl << "Larisa (4)" << endl << "Xanthi (5)" << endl << "Volos (6)" << endl;

    cin >> city_1;
    cin >> city_2;
    if ((city_1>6 || city_1<=0) || (city_2>6 || city_2<=0))
    {   
        cout << "Give different numbers" << endl;
    }
    else   
    {
        cout << "The distance between city " << city_1 << " and city " << city_2 << " is : " << Dist[city_1-1][city_2-1] << endl;
    }
    
    
    return 0;

}