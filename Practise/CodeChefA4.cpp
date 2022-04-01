#include <iostream>
#include <cstring>
using namespace std;

string arr[100];

void sort(int arr[], int size)
{
    int counter = 0;
    int counter2 = 0;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                counter++;
            }
        }
    }

    cout << counter << endl;
}

int main()
{
    int T = 0;
    cin >> T;

    while (T != 0)
    {
        int n;
        cin >> n;
        char a[n];
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] = (int)(tolower(a[i]));
        }
        sort(arr, n);
        T--;
    }
}