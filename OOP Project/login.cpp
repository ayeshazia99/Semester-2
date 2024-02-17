#include <iostream>
using namespace std;
class login{
string pass;
   char ch, ch1;
    static int loginAttempt ;
public:
void login1()
{

    while (loginAttempt < 5)
    {
        cout << "Please enter your password: ";
        cin >> pass;

        if (pass == "pass")
        {
cout << "\n\n\t\tAccess Granted! \n";
            break;
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
            
    }

    cout << "Thank you for logging in.\n";
}
};int login::loginAttempt;
int main(){
login log;
log.login1();
}
