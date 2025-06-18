#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int q1;

    cin >> q1;

    arr.erase(arr.begin() + (q1 - 1));

    int beg, end;

    cin >> beg >> end;

    arr.erase(arr.begin() + (beg - 1), arr.begin() + (end - 1));

    cout << arr.size() << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
