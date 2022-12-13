#include <iostream>
#include <math.h>

// Finding Roots of a Quadratic Equation

using namespace std;

int main()
{
    float a, b, c, r1, r2;

    cout<<"Enter a, b, and c";
    cin>>a>>b>>c;

    r1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
    r2 = (-b- sqrt(b*b - 4*a*c))/(2*a);

    cout<<"Roots are: "<<r1<<r2;

    return 0;
}