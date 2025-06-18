#include <cmath>
#include <cstdio>
#include <iostream>
#include <set>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int q;
    cin >> q;

    int x, y;
    set<int> s;

    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;

        if (x == 1)
        {
            s.insert(y);
        }
        else if (x == 2)
            s.erase(y);
        else
        {
            if (s.find(y) != s.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}
