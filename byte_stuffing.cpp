
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data, stuffed = "";
    string FLAG = "FLAG";
    string ESC = "ESC";

    cout << "Enter data: ";
    getline(cin >> ws, data);

    stuffed = FLAG;

    for (int i = 0; i < data.length(); )
    {
        if (data.substr(i, 4) == FLAG)
        {
            stuffed += ESC + FLAG;
            i += 4;
        }
        else if (data.substr(i, 3) == ESC)
        {
            stuffed += ESC + ESC;
            i += 3;
        }
        else
        {
            stuffed += data[i];
            i++;
        }
    }

    stuffed += FLAG;

    cout << "After Byte Stuffing: " << stuffed << endl;

    return 0;
}
