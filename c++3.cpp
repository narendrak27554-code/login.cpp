#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int choice;
    string username, password, user, pass;

    do {
        cout << "\n===== LOGIN & REGISTRATION SYSTEM =====";
        cout << "\n1. Register";
        cout << "\n2. Login";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\nEnter Username: ";
                cin >> username;
                cout << "Enter Password: ";
                cin >> password;

                {
                    ofstream file("users.txt", ios::app);
                    file << username << " " << password << endl;
                    file.close();
                }

                cout << "Registration Successful!\n";
                break;

            case 2:
                cout << "\nEnter Username: ";
                cin >> username;
                cout << "Enter Password: ";
                cin >> password;

                {
                    ifstream file("users.txt");
                    bool found = false;

                    while(file >> user >> pass) {
                        if(user == username && pass == password) {
                            found = true;
                            break;
                        }
                    }
                    file.close();

                    if(found)
                        cout << "Login Successful!\n";
                    else
                        cout << "Invalid Username or Password!\n";
                }
                break;

            case 3:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}