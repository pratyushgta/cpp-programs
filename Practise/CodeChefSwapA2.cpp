#include <bits/stdc++.h>
using namespace std;

int calculateSwaps(vector<int> &arr, int n)
{
    vector<pair<int, int>> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[i].first = arr[i];
        temp[i].second = i;
    }

    sort(temp.begin(), temp.end());
    int min_swaps = 0;
    int i = 0;
    while (i < n)
    {
        if (temp[i].second == i || temp[i].first == arr[i])
        {
            ++i;
            continue;
        }
        else
        {
            swap(temp[i].first, temp[temp[i].second].first);
            swap(temp[i].second, temp[temp[i].second].second);
            if (temp[i].second != i)
                i--;
        }
        min_swaps++;
        ++i;
    }
    return min_swaps;
}

int main()
{
    int T = 0;
    cin >> T;

    while (T != 0)
    {
        int n;
        cin >> n;
        vector<int> arr;
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            arr.push_back(a);
            a = 0;
        }

        int x = arr.size();
        cout << calculateSwaps(arr, n) << '\n';
        T--;
    }
}
