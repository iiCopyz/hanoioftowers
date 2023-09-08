#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int System();

void Register(){
    string userid, userpass, userpass2;
    ofstream r("Registration.txt", ios::app);
    if (!r.is_open()){
        cout << "Could not open file...\n"; 
    }

    cout << "Please enter a new username: ";
    cin >> userid;
    r << userid << '\n';
    do{
        cout << "\nPlease enter a new password: ";
        cin >> userpass;
        cout << "Please re-enter the password: ";
        cin >> userpass2;
        if (userpass == userpass2){
            cout << "Registatrion Sucessful!\n";
            break;
        } else {
            cout << "Seems like there was an error...\n";
            System();
        }
    }while (userpass != userpass2);

    r << userpass << '\n';
    r.close();
}

void Login(){
    string userid, userpass, id, pass;

    ifstream l("Registration.txt", ios::app);
    if (!l.is_open()){
        cout << "Could not open file...\n";
    }
    getline (l, userid, '\n');
    getline (l, userpass, '\n');

    cout << "\nPlease enter your Username: ";
    cin >> id;
    cout << "Please enter your password: ";
    cin >> pass;

    if (id == userid && pass == userpass){
        cout << "\nHello " << id;
    } else {
        cout << "\nIncorrect Username/Password..\n";
        System();
    }
}

void Forgot(){
    string userid, userpass, id2, pass2;

    ifstream f("Registration.txt", ios::app);
    if (!f.is_open()){
        cout << "Could not open file..,\n";
    }
    getline (f, userid, '\n');
    getline (f, userpass, '\n');

    cout << "\nPlease enter your username: ";
    cin >> id2;
    if (id2 == userid){
        userid.clear();
        userpass.clear();
        cout << "\nPlease enter a new username: ";
        cin >> userid;
        cout << "Please enter a new password: ";
        cin >> userpass;

        ofstream n("Registration.txt", ios::app);
        if (!n.is_open()){
            cout << "Could not open file...\n";
        }
        n << userid << '\n';
        n << userpass << '\n';
    } else {
        cout << "\nWrong Username, Please try again.";
        System();
    }

}

int System(){
    int c;

    cout << "\t\n |1. Login                   |"
         << "\t\n |2. Register                |"
         << "\t\n |3. Forgot Pass/Username?   |"
         << "\t\n |4. Exit                    |";
    cout << "\nPlease Enter a Choice: ";
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
            cout << "\nGoodbye";
            break;
        
        default:
            cout << "\nPlease Enter a Choice: ";
            cin >> c;
    }
    return 0;
}

int main(){
    System();
}