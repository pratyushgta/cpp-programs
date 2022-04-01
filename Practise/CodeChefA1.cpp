#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

void find(int arr[], int size)
{
    int max = 0;
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int j = 0; j < size; j++)
    {
        if (max == arr[j])
            counter++;
    }
    if (counter > 1)
    {

        cout << "fight:(" << endl;
    }
    else
    {
        cout << "peace:)" << endl;
        
    }
}

int main()
{
    int T = 0;
    cin >> T;

    while (T != 0)
    {
        int n;
        cin >> n;
        {
            int a[n];

            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            find(a,n);
            T--;
        }
    }
}