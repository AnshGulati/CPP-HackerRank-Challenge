#include <bits/stdc++.h>

using namespace std;
// Implement the class Box
// l,b,h are integers representing the dimensions of the box

class Box
{
private:
    int l, b, h;

public:
    Box()
    {
        l = b = h = 0;
    }

    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }

    Box(const Box &B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long long)l * b * h;
    }

    friend bool operator<(Box &B1, Box &B2)
    {
        if (B1.l < B2.l)
            return true;

        else if (B1.b < B2.b && B1.l == B2.l)
            return true;

        else if (B1.h < B2.h && B1.b == B2.b && B1.l == B2.l)
            return true;

        return false;
    }

    friend ostream &operator<<(ostream &out, Box &B)
    {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

// Overload operator < as specified
// bool operator<(Box& b)

// Overload operator << as specified
// ostream& operator<<(ostream& out, Box& B)

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}