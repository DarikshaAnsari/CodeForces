#include <bits/stdc++.h>
using namespace std;

void wushangclan()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    long long sum = 0;
    long long ind = n - x;

    for (int i = 0; i < n; i++)
    {
        if (i >= ind)
        {
            sum -= arr[i];
        }
        else
        {
            sum += arr[i];
        }
    }
    long long ans = sum;

    for (int i = n - 1; i >= n - k; i--)
    {
        if (i >= ind)
        {
            sum += arr[i];
            if (ind >= 1)
            {
                sum -= (2 * arr[ind - 1]);
            }
            ans = max(sum, ans);
            ind--;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        wushangclan();
    }
    return 0;
}