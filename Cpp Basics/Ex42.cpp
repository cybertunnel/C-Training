#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float radius;
    float area;

    cout<<"Enter radius of a circle";
    cin>>radius;

    area=3.1425*pow(radius, 2);

    cout<<"Area of the circle is " << area << endl;
}