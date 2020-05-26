#include <iostream>
#include "funciones.h"

using namespace std;


int main()
{
    double t = 0, dt = 0.001, v0 = 20, y = 8.5;
    
    double * t_x = new double[2];
    
    t_x[0] = 0;
    t_x[1] = y;
    
    for( ; y > 0; )
    {
        cout << t_x[0] << "," << t_x[1] << endl;
        t = t_x[0];
        y = t_x[1];
        
        t_x = RK4(t, dt, y, v0);
    }
    
    return 0;
}