#include <iostream>
using namespace std;

int main()
{
    int i,j,x;
    float mean_a,mean_th,mean_p,mean_l,mean_x,mean_v;

    int Dist[6][6] = {{0,501,217,354,703,328},
                     {501,0,467,152,205,208},
                     {217,467,0,337,670,314},
                     {354,152,337,0,354,64},
                     {703,205,670,354,0,411},
                     {328,208,314,64,411,0}};


    cout << "Cities are represented by the numbers: Athens --> (1), Thessaloniki --> (2), Patra --> (3), Larisa --> (4), Xanthi --> (5), Volos --> (6)" << endl << "Give distance in km: " << endl;
    cin >> x;

    for (i=0;i<6;i++)
    {
        for (j=0;j<=i;j++)
        {
            if (x < Dist[i][j])
            {
                cout << "From city " << i+1 << " to city " << j+1 << " : " << Dist[i][j] << " km" << endl;
            }
        }
    }

    return 0;
}