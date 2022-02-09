#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, y, max, min, hypo, powr, s;

    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;

    max = fmax(x,y);
    min = fmin(x,y);
    hypo = hypot(x,y);
    powr = pow(x,y);
    s = fmod(x,y);


    cout<<"Max = "<<max<<"\nMin = "<<min<<"\nHypotenuse = "<<hypo<<"\nPower = "<<powr<<"\nSquare root = "<<s;
    return 0;
}
    

