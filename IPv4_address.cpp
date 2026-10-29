
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string ip;
    int a, b, c, d;
    char dot1, dot2, dot3;

    cout << "Enter IPv4 address: ";
    cin >> ip;

    stringstream ss(ip);

    if (!(ss >> a >> dot1 >> b >> dot2 >> c >> dot3 >> d) ||
        dot1 != '.' || dot2 != '.' || dot3 != '.' ||
        ss.peek() != EOF ||
        a < 0 || a > 255 || b < 0 || b > 255 ||
        c < 0 || c > 255 || d < 0 || d > 255)
    {
        cout << "Invalid IPv4 address!" << endl;
        return 0;
    }

    if (a == 0 || a == 127)
    {
        cout << "Special IPv4 address" << endl;
        return 0;
    }

    cout << "Valid IPv4 address" << endl;

    if (a >= 1 && a <= 126)
    {
        cout << "Class: A" << endl;
        cout << "Network ID: " << a << endl;
        cout << "Host ID: " << b << "." << c << "." << d << endl;
    }
    else if (a >= 128 && a <= 191)
    {
        cout << "Class: B" << endl;
        cout << "Network ID: " << a << "." << b << endl;
        cout << "Host ID: " << c << "." << d << endl;
    }
    else if (a >= 192 && a <= 223)
    {
        cout << "Class: C" << endl;
        cout << "Network ID: " << a << "." << b << "." << c << endl;
        cout << "Host ID: " << d << endl;
    }
    else if (a >= 224 && a <= 239)
    {
        cout << "Class: D (Multicast)" << endl;
    }
    else
    {
        cout << "Class: E (Experimental)" << endl;
    }

    return 0;
}
