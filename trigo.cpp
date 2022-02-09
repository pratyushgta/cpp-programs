#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, s, c, t;
    double ss, cc, tt;
    cout<<"Enter the value of x: ";
    cin>>x;

    s = sin(x);
    c = cos(x);
    t = tan(x);
    ss = sinh(x);
    cc = cosh(x);
    tt = tanh(x);

    cout<<"sin(x) = "<<s<<"\ncos(x) = "<<c<<"\ntan(x) = "<<t<<"\nsinh(x) = "<<ss<<"\ncosh(x) = "<<cc<<"\ntanh(x) = "<<tt;
    return 0;
}
    

