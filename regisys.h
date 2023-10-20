#include <iostream>
using namespace std;

class registration {
    private: 
        int userid, userpass, userpass2;
    public:
        registration();
        void createid();
        void checkpass();
};

class login {
    private:
        int userid, userpass, id, pass;
    public:
        login();
        void pull();
        void checkvalid();
        void success();
};

class forgot {
};