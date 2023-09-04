#include <iostream>
#include <string>
using namespace std;

/*
int tempconverter(){
    
    int n;
    char unit;
    int t;

    cout << "Please enter the degree: ";
    cin >> n;
    do{
        cout << "\nPlease enter the Unit Of Temp (C or F): ";
        cin >> unit;
        if (unit == 'F' || unit == 'C' || unit != 'f' || unit != 'c'){
            break;
        } 
    } while (unit != 'F' || unit != 'C' || unit != 'f' || unit != 'c');

    if (unit == 'F' || unit =='f'){
        t = (n - 32) * 5/9;
        cout << "\nThis is the degress in Celsius: " << t << endl;
    }
    else {
        t = (n * 9/5) + 32;
        cout << "\nThis is the degress in Farheniet: " << t << endl;
    }

    return t;
}
*/

/*
float Multiplier(){
    float a, b, sum;
    cin >> a >> b;

    sum = a * b;

    cout << "\n" << sum;

    return sum;
}
*/
/*
int calculator(){
    int n,m;
    float num[100], sum = 0, average;

    cout << "Enter the numbers of entries: ";
    cin >> n;

    while (n >= 100 || n <= 0){
        cout << "Error! Please enter the number again: ";
        cin >> n;
    }

    for (m = 0; m < n; m++){
        cout << "#" << m + 1 << ". Next number: ";
        cin >> num[m];
        sum += num[m];
    }

    average = sum / n;
    cout << "Average: " << average;

    return average;
}
*/

/* Login and Registration System

1. Login
2. Registration
3. Forgot Password/Username
4. Exit/Log out

*/

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