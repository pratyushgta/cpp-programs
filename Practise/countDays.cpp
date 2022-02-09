#include <iostream>
using namespace std;

int main()
{
    int month_days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int total, day, month;

    cout<<"Enter the day: ";
    cin>>day;
    cout<<"Enter the month: ";
    cin>>month;

    total=day;

    for(int i=0;i<month-1;i++)
    {
        total+=month_days[i];
    }

    cout<<"Total days: "<<total;
}

    

