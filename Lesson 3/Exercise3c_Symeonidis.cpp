#include <iostream>
using namespace std;

int main()
{
    int i;
    float mean_a,mean_th,mean_p,mean_l,mean_x,mean_v;

    int Dist[6][6] = {{0,501,217,354,703,328},
                     {501,0,467,152,205,208},
                     {217,467,0,337,670,314},
                     {354,152,337,0,354,64},
                     {703,205,670,354,0,411},
                     {328,208,314,64,411,0}};

    for (i=0;i<6;i++)
    {
        mean_a = mean_a + Dist[i][0];
        mean_th = mean_th + Dist[i][1];
        mean_p = mean_p + Dist[i][2];
        mean_l = mean_l + Dist[i][3];
        mean_x = mean_x + Dist[i][4];
        mean_v = mean_v + Dist[i][5];
    }
    mean_a = mean_a/5;
    mean_th = mean_th/5;
    mean_p = mean_p/5;
    mean_l = mean_l/5;
    mean_x = mean_x/5;
    mean_v = mean_v/5;

    cout << "Mean distance from Athens: " << mean_a << endl;
    cout << "Mean distance from Thessaloniki: " << mean_th << endl; 
    cout << "Mean distance from Patra: " << mean_p << endl;
    cout << "Mean distance from Larisa: " << mean_l << endl;
    cout << "Mean distance from Xanthi: " << mean_x << endl;
    cout << "Mean distance from Volos: " << mean_v << endl;

    return 0;
}