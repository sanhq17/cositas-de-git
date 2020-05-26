#include <iostream>

using namespace std;

double v(double t, double v0);
double * RK4(double t, double dt, double y, double v0);

double v(double t, double v0)
{
    double g = -9.81;
    return v0 + g*t;
}

double * RK4(double t, double dt, double y, double v0)
{
    double k1 = v(t, v0)*dt;
    double k2 = v(t + dt/2, v0)*dt;
    double k3 = v(t + dt/2, v0)*dt;
    double k4 = v(t + dt, v0)*dt;
    
    double * pos = new double[2];
    pos[0] = t + dt;
    pos[1] = y + (k1 + 2*k2 + 2*k3 + k4)/6;
    
    return pos;
}