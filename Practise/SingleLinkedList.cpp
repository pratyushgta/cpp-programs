#include <iostream>
#include <cstring>
using namespace std;

int main()
{                    
int choice=0;
int create_counter=0;
int in_val=0;
    do{
    cout<<"\nLINKED LISTS OPERATIONS\n1. Create\n2. Insert\n3. Delete\n4. Display\n5. Exit"<<endl;
        cout<<"Enter: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: 
            if(create_counter==0){
            create();
            create_counter++;
            }
            else
            {
                cout<<"Linked List is already created!"<<endl;
            }
            break;

            case 2:
            int in_choice=0;
           cout<<"\nWhere do you want to insert?\n1. Beginning\n2. End\n3. Before a node\n4. After a node\n5. Back"<<endl;
            cin>>in_choice;
            int pos=0;
            switch(in_choice)
            {
                case 1: cout<<">>>INSERT BEGINNING<<<\nEnter a value to insert: "<<endl;
                cin>>in_val;
                in_begin(in_val);
                break;
                case 2: cout<<">>>INSERT END<<<\nEnter a value to insert: "<<endl;
                cin>>in_val;
                in_end(in_val);
                break;
               case 3: cout<<">>>INSERT BEFORE<<<\nEnter a value to insert: "<<endl;
                cin>>in_val;
                cout<<"Insert before which value?"<<endl;
                cin>>pos;
                in_begin(in_val,pos);
                break;
               case 4: cout<<">>>INSERT AFTER<<<\nEnter a value to insert: "<<endl;
                cin>>in_val;
                cout<<"Insert after which value?"<<endl;
                cin>>pos;
                in_begin(in_val,pos);
                break;
                default: cout<<"Invalid Input"<<endl;
            }
            break;

           
            case 3:
            int in_choice=0;
           cout<<"\nWhere do you want to delete from?\n1. Beginning\n2. End\n3. Before a node\n4. After a node\n5. Back"<<endl;
            cin>>in_choice;
            int pos=0;
            switch(in_choice)
            {
                case 1: cout<<">>>DELETE BEGINNING<<<\nEnter a value to insert: "<<endl;
                cin>>in_val;
                del_begin(in_val);
                break;
                case 2: cout<<">>>DELETE END<<<\nEnter a value to insert: "<<endl;
                cin>>in_val;
                del_end(in_val);
                break;
               case 3: cout<<">>>DELETE BEFORE<<<\nEnter a value to insert: "<<endl;
                cin>>in_val;
                cout<<"Insert before which value?"<<endl;
                cin>>pos;
                del_begin(in_val,pos);
                break;
               case 4: cout<<">>>DELETE AFTER<<<\nEnter a value to insert: "<<endl;
                cin>>in_val;
                cout<<"Insert after which value?"<<endl;
                cin>>pos;
                del_begin(in_val,pos);
                break;
                default: cout<<"Invalid Input"<<endl;
            }
            break;

            case 4: cout<<"Display"<<endl;
            display();
            break;

            case 5: cout<<"Goodbye!"<<endl;
            break;

            default: cout<<"Invalid Input"<<endl;
            break;
        } 
        //cout<<push_val<<endl;
    }
    while(choice<5);
}