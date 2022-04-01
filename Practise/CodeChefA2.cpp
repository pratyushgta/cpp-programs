#include <algorithm>
#include <iostream>
using namespace std;

string arr[100];

int main()
{
    int T = 0;
    cin >> T;

    while (T != 0)
    {
        int counter = 0;
        int n;
        cin >> n;
        int arr[n];
        int temp[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            temp[i]=arr[i];
        }

        cout << "BEFORE" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << temp[i] << " ";
        }

        /* int asize = sizeof(arr) / sizeof(arr[0]);
         sort(arr, arr + asize);

         for (int i = 0; i < n; i++)
         {
             if (arr[i] == newarr[i])
                 counter++;
         }

         cout << counter << endl;*/

        T--;
    }
}