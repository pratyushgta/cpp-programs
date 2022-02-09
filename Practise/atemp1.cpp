#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  int n=0;
  int exit=0;
  string letter="";
  while(exit!=1)
  {
  cout<<"do you want to reset (r) or push(p) " <<endl;
  cin>>letter;

  while(letter=="p")
  {
      n++;
      cout<<"counter="<<n<<endl;
      cout<<"do you want to reset (r) or push(p) " <<endl;
      cin>>letter;

  }
if(letter=="r")
  {
      n=0;
      cout<<"counter has reset to 0"<<endl;
  }
  else
  {
      cout<<"goodbye"<<endl;
      exit=1;
  }
  }
}