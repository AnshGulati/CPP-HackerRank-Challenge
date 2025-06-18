// Input Format
// Input consists of the following space-separated values: int, long, char, float, and double, respectively.

// Output Format
// Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    // Complete the code.
    
    int n; long l; char c; float f; double d;
    
    cin >> n >> l >> c >> f >> d;
    
    cout << n << endl << l << endl << c << endl;
    cout << fixed << setprecision(3) << f << endl;
    cout << fixed << setprecision(9) << d << endl;  
    
    return 0;
}