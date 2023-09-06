#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void Login(){
    ifstream l("Registration.txt");
    if (!l.is_open()){
        cout << "Could not open file...\n";
    }

    getline (l, userid, '\n');
    getline (l, userpass, '\n');

    string id, pass;
    cout << "Please enter your Username: ";
    cin >> id;
    cout << "\n Please enter your password: ";
    cin >> pass;

    if (id == userid && pass == userpass){
        cout << "Hello!";
        break;
    } else {
        cout << "Incorrect Username/Password..";
        Login();
    }
}

void Register(){
    ofstream r("Registration.txt");
    if (!r.is_open()){
        cout << "Could not open file...\n"; 
    }

    string userid, userpass, userpass2;
    cout << "Please enter a new username: ";
    cin >> userid;
    r << userid;
    r << '\n';
    do{
        cout << "\n Please enter a new password: ";
        cin >> userpass;
        cout << "\n Please re-enter the password: ";
        cin >> userpass2;

        if (userpass && userpass2 => 4){
            if (userpass == userpass2){
                break;
            }
            cout << "\nThe passwords do not match! Please try again.";
        }
    }while (userpass < 4);

    r << userpass;
    r << '\n';
}

void Forgot(){
    ifstream f("Registration.txt");
    if (!f.is_open()){
        cout < "Could not open file..,\n";
    }
    
    getline (f, userid, '\n');
    getline (f, userpass, '\n');

    string id2, pass2;
    cout << "Please enter your username: ";
    cin >> id2;
    if (id2 == userid){
        cout << "Please enter a new password: ";
        userpass.clear();
        cin >> userpass;
    } else {
        cout << "Wrong Username, Please try again."
        Forgot();
    }
}

int System(){
    int c;

    cout << "\t |1. Login                   |\n"
         << "\t |2. Register                |\n"
         << "\t |3. Forgot Pass/Username?   |\n"
         << "\t |4. Exit                    |\n";
    cout << "\n Please Enter a Choice: ";
    cin >> c;
    cout << endl;

    switch(c)
    {
        case 1:
            Login();
            break;
            
        case 2:
            Register();
            break;

        case 3:
            Forgot();
            break;
        
        case 4:
            cout << "Goodbye";
            break;
        
        default:
            cout << "Choice: ";
            cin >> c;
    }
}

int main(){
    System();
}