
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data, code(7, '0');

    cout << "Enter 4 data bits: ";
    cin >> data;

    if (data.length() != 4 ||
        data.find_first_not_of("01") != string::npos)
    {
        cout << "Invalid data!" << endl;
        return 0;
    }

    code[2] = data[0];
    code[4] = data[1];
    code[5] = data[2];
    code[6] = data[3];

    code[0] = (code[2] - '0') ^ (code[4] - '0') ^ (code[6] - '0') + '0';
    code[1] = (code[2] - '0') ^ (code[5] - '0') ^ (code[6] - '0') + '0';
    code[3] = (code[4] - '0') ^ (code[5] - '0') ^ (code[6] - '0') + '0';

    cout << "Hamming code: " << code << endl;

    return 0;
}
