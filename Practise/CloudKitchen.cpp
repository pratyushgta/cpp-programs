#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

string menu[100]; // to store menu items
int time[100];    // to store time taken by respective menu item

string item[100];    // store user's order item
string in_time[100]; // store order receive time

int total1 = 0; // total menu items
int total2 = 0; // total orders received

int timecounter = 0; // counter variable to increase hours by only 1 after first order

int hh, mm; // store hour and minutes

int tot_h, tot_m; // store final time

void calcTime(string itm)
{

    int item_pos = 0; // store the item menu position of ordered item
    for (int i = 0; i < total1; i++)
    {
        if (menu[i] == itm)
            item_pos = i;
    }

    int add = time[item_pos];

    /* tot_m+=mm+add+(0/60);
     tot_h=tot_h+hh+(tot_m/60);
     tot_m=tot_m%60;

     if(timecounter==0)
     tot_h += hh;*/

    /* tot_m += mm + add;
     if (tot_m > 59)
     {
         tot_h += 1;
         tot_m %= 60;
     }
     if(timecounter==0)
     tot_h += hh;*/

    if (timecounter == 0)
    {
        tot_h = hh;
        tot_m = mm;
    }

    tot_m = tot_m + add + 0 / 60;
    tot_h = tot_h + tot_m / 60;
    tot_m %= 60;

    if (tot_m == 0)
        cout << tot_h << ":" << tot_m << "0" << endl;
    else
        cout << tot_h << ":" << tot_m << endl;
    add = 0;
}

void timex(string val) // to convert string time to int
{
    int counter = 0;
    string hx = "";
    string mx = "";
    for (int i = 0; i < val.length(); i++)
    {
        char ch = val.at(i);
        if (ch == ':')
        {
            counter = 1;
        }
        else if (counter == 1)
        {
            mx += ch;
        }
        else
        {
            hx += ch;
        }
    }

    stringstream value1(hx);
    // int hx = 0;
    value1 >> hh;

    stringstream value2(mx);
    // int mx = 0;
    value2 >> mm;
}

void STDIN()
{
    cin >> total1;
    menu[total1];
    time[total1];

    for (int i = 0; i < total1; i++)
    {
        cin >> menu[i] >> time[i];
    }

    cin >> total2;

    for (int j = 0; j < total2; j++)
    {

        cin >> item[j] >> in_time[j];
    }
}

/*void STDOUT()
{
    for (int i = 0; i < total1; i++)
    {
        cout << menu[i] << time[i];
    }
    for (int j = 0; j < total2; j++)
    {
        cout << item[j] << in_time[j];
    }
}*/

int main()
{
    STDIN();
    // STDOUT();

    for (int i = 0; i < total2; i++)
    {
        timex(in_time[i]);
        calcTime(item[i]);
        timecounter = 1;
    }
    return 0;
}
