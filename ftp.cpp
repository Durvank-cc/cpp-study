#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;
    int choice;

    cout << "FTP CLIENT SIMULATION\n";
    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (username == "admin" && password == "1234") {
        cout << "\nLogin Successful!\n";

        do {
            cout << "\n--- FTP MENU ---\n";
            cout << "1. List Files\n";
            cout << "2. Upload File\n";
            cout << "3. Download File\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Files: file1.txt, file2.txt\n";
                    break;

                case 2:
                    cout << "File uploaded successfully (simulation).\n";
                    break;

                case 3:
                    cout << "File downloaded successfully (simulation).\n";
                    break;

                case 4:
                    cout << "FTP connection closed.\n";
                    break;

                default:
                    cout << "Invalid choice!\n";
            }
        } while (choice != 4);
    } else {
        cout << "Login Failed! Invalid credentials.\n";
    }

    return 0;
}
