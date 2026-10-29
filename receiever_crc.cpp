
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string received, gen, temp;

    cout << "Enter received data: ";
    cin >> received;

    cout << "Enter generator bits: ";
    cin >> gen;

    temp = received;

    for (int i = 0; i <= (int)temp.length() - (int)gen.length(); i++)
    {
        if (temp[i] == '1')
        {
            for (int j = 0; j < (int)gen.length(); j++)
            {
                temp[i + j] =
                    (temp[i + j] == gen[j]) ? '0' : '1';
            }
        }
    }

    string remainder = temp.substr(temp.length() - gen.length() + 1);

    cout << "CRC remainder: " << remainder << endl;

    if (remainder.find('1') == string::npos)
        cout << "No error detected." << endl;
    else
        cout << "Error detected!" << endl;

    return 0;
}
