#include<iostream>
using namespace std;


    struct inventory
    {
        char name[20];
        float rate;
        int qty;
        float price;
    };

    float pr(float r,int q)
    {
        float cost=r*q;
        return cost;
    }

    int main()
    {
        struct inventory i1;
        inventory *ptr;
        ptr=&i1;
        char ch;
        cout<<"Enter the name:"<<endl;
        cin.get((*ptr).name,20);
        cout<<"Enter the rate of product:"<<endl;
        cin>>(*ptr).rate;
        cout<<"Enter the quantity of product:"<<endl;
        cin>>(*ptr).qty;
        i1.price=pr((*ptr).rate,(*ptr).qty);
        cout<<"total amount:"<<(*ptr).price;

        cout<<endl<<endl<<"do you want to update the rate & quantity (Y/N)";
        cin>>ch;
        switch(ch)
        {
            case 'Y':cout<<"Enter New rate:"<<endl;;
                   cin>>(*ptr).rate;
                   cout<<"Enter new quantity:"<<endl;
                   cin>>(*ptr).qty;
                   (*ptr).price=pr((*ptr).rate,(*ptr).qty);
                   cout<<" New Total amount:"<<(*ptr).price;
                   break;

                   case 'N':
                   cout<<"SO your final amount is:"<<(*ptr).price;
                   break;

                   default:
                    cout<<"Wrong input"<<endl;
                          }
        return 0;
    }