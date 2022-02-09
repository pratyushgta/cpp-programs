#include <iostream>
using namespace std;

int main()
{
float a, b, ans;
char letter;
do
{
cout << "Enter the value of a and b : " << endl;
cin >> a >> b;
ans = a/b;
cout << "The answer is " << ans << endl;
cout << "Do you want to play again (y/n)" << endl;
cin >> letter;
}
while (letter != 'n');
cout<<"goodbye";
}