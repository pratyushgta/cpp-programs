#include <bits/stdc++.h>
using namespace std;

// Function that counts the minimum
// moves required to convert arr[] to brr[]
int minOperations(int arr1[], int arr2[], int i, int j, int n)
{
    // Base Case
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
            f = 1;
        break;
    }
    if (f == 0)
        return 0;

    if (i >= n || j >= n)
        return 0;

    // If arr[i] < arr[j]
    if (arr1[i] < arr2[j])

        // Include the current element
        return 1 + minOperations(arr1, arr2, i + 1, j + 1, n);

    // Otherwise, excluding the current element
    return max(minOperations(arr1, arr2, i, j + 1, n),
               minOperations(arr1, arr2, i + 1, j, n));
}

// Function that counts the minimum
// moves required to sort the array
void minOperationsUtil(int arr[], int n)
{
    int brr[n];

    for (int i = 0; i < n; i++)
        brr[i] = arr[i];

    sort(brr, brr + n);
    int f = 0;

    // If both the arrays are equal
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != brr[i])

            // No moves required
            f = 1;
        break;
    }

    // Otherwise
    if (f == 1)

        // Print minimum
        // operations required
        cout << (minOperations(arr, brr,
                               0, 0, n))
             << endl;
    else
        cout << "0" << endl;
}

int main()
{
    int T = 0;
    cin >> T;

    while (T != 0)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int x = sizeof(arr) / sizeof(arr[0]);
        minOperationsUtil(arr, x);
        T--;
    }
}
