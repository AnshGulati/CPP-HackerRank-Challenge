#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int q;
    cin >> q;
    map<string, int> mp;

    for (int i = 0; i < q; i++)
    {
        string str;
        int x;
        cin >> x >> str;

        if (x == 1)
        {
            int n;
            cin >> n;
            mp[str] += n;
        }
        else if (x == 2)
            mp.erase(str);
        else
        {
            cout << mp[str] << endl;
        }
    }

    return 0;
}
