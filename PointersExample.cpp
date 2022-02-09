#include <iostream>
using namespace std;

void sq(int a){
    cout<<a*a;
    a=10;
}

void cube(int *x){
    cout<<(*x)*(*x)*(*x);
}

int main(){
    int num=5;
    sq(num);
    cube(&num);
}