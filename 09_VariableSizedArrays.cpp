#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, q;
    cin >> n;
    cin >> q;
    
    vector<vector<int>> arr(n);
    
    for(int i=0; i<n; i++)
    {
        int size;
        cin >> size;
        vector<int> temp(size);
        for(int j=0; j<size; j++)
        {
            cin >> temp[j];
        }
        arr[i] = temp;
    }
    
    for(int k=0; k<q; k++)
    {
        int index1, index2;
        cin >> index1 >> index2;
        cout << arr[index1][index2] << endl;
    }
    return 0;
}