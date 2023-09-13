#include <iostream>
#include "regisys.h"
using namespace std;

void registration::createid(){
    cout << "\nPlease enter your Username: ";
    cin >> userid;

    ifstream l(userid + ".txt");
    if (!l.is_open()){
        cout << "Could not open file...\n";
    }
    getline (l, id);
    getline (l, pass);

    cout << "Please enter your password: ";
    cin >> userpass;
}