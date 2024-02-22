#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            s.insert(num);
        }

        int mex = 0;
        set<int> mis;
        for (int i = 0; i <= n + 1; i++)
        {
            if (s.find(i) == s.end())
            {
                mis.insert(i);
            }
        }

        bool f = true;
        int c = 0;
        while (c < 2 * n + 1 && f)
        {
            int v = *mis.begin();
            cout << *mis.begin() << endl
                 << endl;
            mis.erase(mis.begin());
            cout.flush();

            int y;
            cin >> y;

            if (y == -1)
            {
                f = false;
            }
            else
            {
                s.erase(y);
                mis.insert(y);
            }
            c += 1;
        }
    }

    return 0;
}
