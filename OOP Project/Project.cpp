#include<iostream>
#include<string.h>
#include<ctime>
#include<conio.h>
using namespace std;
class admin{
	
};
class doctor{
	
};
class login{
   string password;
public:
    login(){
    system("CLS");
    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>";
    cout<<"\n\n\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\t\t------------------------------";
    cout<<"\n\t\t    LOGIN \n";	
    cout<<"\t\t------------------------------\n\n";	
    cout << "\t\tEnter Password: ";
    char ch;
    ch = _getch();
   while(ch != 13){//character 13 is enter
      password.push_back(ch);
      cout << '*';
      ch = getline(cin,password);
      
  }
    
    if(password == "pass"){
        cout << "\n\n\t\tAccess Granted! \n";
        system("PAUSE");
        system ("CLS");}
    else{
        cout << "\n\n\t\tAccess Aborted...\n\t\tPlease Try Again\n\n";
        system("PAUSE");
        system("CLS");}
	}
};
int main(){
	int choice;
	time_t now = time(0);
    char* date_time = ctime(&now);
    cout <<"\n\tDate : and time is: " << date_time << endl;
	cout<<"\n\t\t<><><><><><><><><><><><><><><><><><><>\n\n";
    cout<<"\t\tWelcome To Hospital Management System\n\n";
    cout<<"\n\t\t<><><><><><><><><><><><><><><><><><><>\n\n\n"; 
    cout<<"\t\t\tPick your choice:\n";
    cout<<"\t\t\t 1-Admin(1) \n\t\t\t 2-Doctor(2) \n\t\t\t 3-Exit(3)";
    cout<<"\n\n\t\tEnter 1 for Admin, Enter 2 for Doctor,\n\t\t\t Enter 3 to exit\n";
    cout<<"\n\t\t\tEnter your choice: ";
    cin>>choice;
    switch(choice)
    {
    	case 1:{
		   admin A1;
		   login log;
    	   break;
        }
    	case 2:{
    		doctor d1;
    		login log;
			break;
		}
    	case 3:{
    		system("CLS");
    		cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
			cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
			cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
			break;
		}
	}
}
