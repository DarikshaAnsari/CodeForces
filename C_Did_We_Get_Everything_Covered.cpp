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

void wushangclan()
{
    int n, k, m;
    cin >> n >> k >> m;
    map<char, int> mp;
    set<int> st;
    string ans = "";
    int f;
    int count = 0;
    string s;
    cin >> s;
    fr(i,0,m)
    {
        mp[s[i]]++;
        st.insert(i);
        if (mp.size() == k)
        {
            count++;
            mp.clear();
            ans.push_back(s[i]);
        }else{
            f++;
            st.erase(i);
        }
        if (count >= n)
        {
            cout << "YES" << endl;
            return;
        }
    }
    fr(i,0,k)
    {
        if (mp.find('a' + i) != mp.end())
        {
            continue;
        }
        else
        {
            ans.push_back('a' + i);
            break;
        }
    }
    int t=0;
    string mano="";
    while (ans.size() != n)
    {
        mano+='a';
        ans.push_back('a');
        t=0;
    }
    cout << "NO\n"
         << ans << endl;
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