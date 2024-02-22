#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (int i = a; i < b; i++)
string getLongestRegex(string a, string b, string c)
{

    if (a.size() != b.size() && b.size() != c.size())
    {

        return "-1";
    }

    string sam = "";

    string ans = "";
    pair<int, char> res = {-1, 'a'};
    for (int i = c.size() - 1; i >= 0; i--)
    {
        if (a[i] != c[i] && b[i] != c[i])
        {
            res = {i, c[i]};

            break;
        }
    }

    if (res.first == -1)
    {
        return "-1";
    }

    string p = "[ABCDEFGHIJKLMNOPQRSTUVWXYZ]";

    for (int i = 0; i < a.size(); i++)
    {

        if (i != res.first)
        {
            ans += p;
        }
        else
        {

            int k = res.second - 'A';

            k++;

            for (int i = 0; i < 28; i++)
            {
                if (k != i)
                {

                    ans += p[i];
                }
            }
        }
    }

    return ans;
}

int main()
{
    string a = "AERB", b = "ATRC", c = "AGCB";
    cout << getLongestRegex(a, b, c) << endl;
    return 0;
}