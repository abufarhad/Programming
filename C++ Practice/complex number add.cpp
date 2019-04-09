#include <bits/stdc++.h>
using namespace std;
class Complex
{
public:
    Complex(int r1, int c1, int r2, int c2)
    {
        complex<double> a(r1,c1);
        complex<double> b(r2,c2);
        cout << "Sum of these two numbers can be described by: " << a+b << endl;
    }
};

int main()
{
    double a, b, c, d;
    cout << "Enter the real part of 1st number: ";
    cin >> a;
    cout << "Enter the imaginary part of 1st number: ";
    cin >> b;
    cout << "Enter the real part of 2nd number: ";
    cin >> c;
    cout << "Enter the imaginary part of 2nd number: ";
    cin >> d;
    Complex object(a, b, c, d);
    return 0;
}


