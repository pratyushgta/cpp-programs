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
       int size;
       cout<<"Enter the total no. of records: ";
       cin>>size;
       char ch;
       int update;
       struct inventory i1[size];

       int tot_price=0;

       for(int i=0;i<size;i++)
       {
          inventory *ptr;
           ptr=&i1[i];
           cout<<"\n\nRECORD "<<i+1<<endl;
          cout<<"Enter the name:"<<endl;
           //cin.get(i1[i].name,20);
           cin>>i1[i].name;
           cout<<"Enter the rate of product:"<<endl;
           cin>>i1[i].rate;
          cout<<"Enter the quantity of product:"<<endl;
          cin>>i1[i].qty;
         i1[i].price=pr(i1[i].rate,i1[i].qty);
         tot_price+=i1[i].price;
         cout<<"total amount:"<<i1[i].price;
       }
        
        cout<<endl<<endl<<"do you want to update the rate & quantity (Y/N)";
        cin>>ch;
        switch(ch)
        {
            case 'Y': cout<<"Which record you want to update?"<<endl;
            cin>>update;
            if(update>size || update<size)
            {
                cout<<"Invalid Input!";
                break;
            }
            else{
                tot_price=tot_price-i1[update-1].price;
                cout<<"UPDATE RECORDING FOR: "<<i1[update-1].name;
                 cout<<"\nEnter New rate:"<<endl;;
                   cin>>i1[update-1].rate;
                   cout<<"Enter new quantity:"<<endl;
                   cin>>i1[update-1].qty;
                   i1[update-1].price=pr(i1[update-1].rate,i1[update-1].qty);
                   cout<<"New Total amount:"<<i1[update-1].price;
                   tot_price+=i1[update-1].price;
                   cout<<"\n\nSo your final amount is:"<<tot_price;
            }
                   break;

                   case 'N':
                   cout<<"\nSo your final amount is:"<<tot_price;
                   break;

                   default:
                    cout<<"Wrong input"<<endl;
                          }
        return 0;
    }