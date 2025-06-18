#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reverseArray(int N, vector<int>& arr)
{
    int start = 0;
    int end = N-1;
    while(start <= end)
    {
        swap(arr[start++], arr[end--]);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    
    reverseArray(N, arr);
    for(int i=0; i<N; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}