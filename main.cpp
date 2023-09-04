#include <iostream>
#include <string>
using namespace std;

void Login(){
    int c;
    string userid, userpass, id, pass;
    cout << "Please enter a Username: ";
    cin >> userid;
    cout << "\n Please enter a password: ";
    cin >> userpass;

    
}
void Register();
void Forgot();

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
            cout << "choice: ";
            cin >> c;
    }
}


int main(){
    
}