
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string code;
    int p1, p2, p4, error;

    cout << "Enter received 7-bit code: ";
    cin >> code;

    if (code.length() != 7 ||
        code.find_first_not_of("01") != string::npos)
    {
        cout << "Invalid code!" << endl;
        return 0;
    }

    p1 = (code[0]-'0') ^ (code[2]-'0') ^
         (code[4]-'0') ^ (code[6]-'0');

    p2 = (code[1]-'0') ^ (code[2]-'0') ^
         (code[5]-'0') ^ (code[6]-'0');

    p4 = (code[3]-'0') ^ (code[4]-'0') ^
         (code[5]-'0') ^ (code[6]-'0');

    error = p1 + 2 * p2 + 4 * p4;

    if (error == 0)
    {
        cout << "No error detected." << endl;
    }
    else
    {
        cout << "Error at bit position: " << error << endl;

        code[error - 1] =
            (code[error - 1] == '0') ? '1' : '0';

        cout << "Corrected code: " << code << endl;
    }

    cout << "Original data: "
         << code[2] << code[4] << code[5] << code[6] << endl;

    return 0;
}
