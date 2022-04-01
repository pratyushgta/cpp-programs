#include <bits/stdc++.h>

using namespace std;

int minSwaps(int arr[], int n)
{
    pair<int, int> arrPos[n];
    for (int i = 0; i < n; i++)
    {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }

    sort(arrPos, arrPos + n);

    vector<bool> vis(n, false);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] || arrPos[i].second == i)
            continue;
        int cycle_size = 0;
        int j = i;
        while (!vis[j])
        {
            vis[j] = 1;
            j = arrPos[j].second;
            cycle_size++;
        }
        if (cycle_size > 0)
        {
            ans += (cycle_size - 1);
        }
    }
    return ans;
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
            arr[i] = (int)a[i];
        }
        int x = (sizeof(arr) / sizeof(int));
        int res = minSwaps(arr, x);
        if (res == 1 || res == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        T--;
    }
}