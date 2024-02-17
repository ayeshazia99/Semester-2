#include<iostream>
#include<string.h>
#include<ctime>
#include<conio.h>
#include<fstream>
using namespace std;
class admin{
	int in;
	friend class doctor_timing;
	friend void anything_else();
public:
	int display(){
	system("CLS");
    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
    cout<<"\t\t\t------------------------------\n";
    cout<<"\n\t\t\t  Welcome to the ADMIN Block \n\n";	
    cout<<"\t\t\t------------------------------\n\n";	
    cout<<"\t\t\tQ. What do you want to do?\n\n";
    cout<<"\t\t\t     1. Book appointments \n\t\t\t     2. Check doctor's timings \n\t\t\t     3. Add Patient's diagnosis information\n\t\t\t     4. View Patient's Report \n\t\t\t     5. Check Bill\n";
    cout<<"\n\t\t\tEnter your choice: ";
    cin>>in;
    return in;
	
	}
};
class booking{
char name[20];
char address[100];
char contact[10];
char age[5];
char gender[8];
char group[5];
char disease[50];
char id[15];
friend class doctor_timing;
friend void anything_else();
public:
booking1(){
string filename;
ofstream f;
cout << "Enter Patient ID : ";
  getline( cin, filename );
  f.open( filename.c_str(),ios::out );
  cout<<"Name : ";gets(name); f<<"Name : "; f<<name;f<<"\n";
cout<<"Address : ";gets(address); f<<"Address : "; f<<address;f<<"\n";
  cout<<"Contact Number : ";gets(contact); f<<"Contact Number : "; f<<contact;f<<"\n";
  cout<<"Age : ";gets(age); f<<"Age : "; f<<age;f<<"\n";
  cout<<"Gender : ";gets(gender); f<<"Gender : "; f<<gender;f<<"\n";
  cout<<"Blood Group : ";gets(group); f<<"Bloog Group : "; f<<group;f<<"\n";
  cout<<"Any past diseases : : ";gets(disease); f<<"Past diseases : "; f<<disease;
    cout<<"\n********************************************************************\n";
cout<<"\nPatient Details Saved Successfully!\n";
  f.close();
}
};
class doctor_timing{
int department;
string doctor;
string myStringText;
string answer;
friend void anything_else();
public:
void timings1(){
booking b;
system("CLS");
cout<<"1)Orthopaedics\n";cout<<"2)ENT\n";cout<<"3)Chest & Vascular\n";cout<<"4)Gynaecology\n";cout<<"5)Psychiatry\n";
cout<<"6)Dental Surgery\n";cout<<"7)Accident & Surgery\n";cout<<"8)Dermatology\n";cout<<"9)Urology\n";cout<<"10)Physiotherapy\n";
cout<<"Enter the department : ";
cin>>department;
system("cls");
cout<<"Dr. Ali Zia\n";
cout<<"Dr. Fatima Saleem\n";
cout<<"Dr. Sara Khan\n";
cout<<"Dr. Hasan Ahmed\n";
cout<<"Dr. Laiba Danish";
cout<<"\nEnter the doctor's first name : ";
cin>>doctor;
system("cls");
if(doctor=="ali"||doctor=="Ali"){
ifstream myFile("ali.txt");
while(getline(myFile, myStringText)){
cout<<myStringText;
cout<<"\n";
}
myFile.close();
}
else if(doctor=="Fatima"||doctor=="fatima"){
ifstream myFile("fatima.txt");
while(getline(myFile, myStringText)){
cout<<myStringText;
cout<<"\n";
}
myFile.close();
}
if(doctor=="Sara"||doctor=="sara"){
ifstream myFile("sara.txt");
while(getline(myFile, myStringText)){
cout<<myStringText;
cout<<"\n";
}
myFile.close();

}
if(doctor=="Hasan"||doctor=="hasan"){
ifstream myFile("hasan.txt");
while(getline(myFile, myStringText)){
cout<<myStringText;
cout<<"\n";
}
myFile.close();

}
if(doctor=="Laiba"||doctor=="laiba"){
ifstream myFile("laiba.txt");
while(getline(myFile, myStringText)){
cout<<myStringText;
cout<<"\n";
}
myFile.close();

}
cout<<"\n\nDo you want to book an appointment(Enter yes or no) : ";
cin>>answer;
if(answer=="yes"){
system("cls");
string filename;
ofstream f;
getline( cin, filename );
f.open( filename.c_str(),ios::out );
b.booking1();
}
else{

}
}

};
void anything_else(){
admin a;
string answer;
cout<<"Do you want to do anything else?(Enter yes or no) : ";	
cin>>answer;
if(answer=="yes"){
a.display();
}
else
	system("CLS");
    		cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
			cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
			cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
			
}
class doctor{
	
};

class diagnosis{
	
};
class report{
	
};
class bill{
	
};
class login{
   string pass;
   char ch, ch1;
public:
    login(char a){
    	ch1 = a;
    system("CLS");
    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>";
    cout<<"\n\n\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\t\t\t------------------------------";
    cout<<"\n\t\t\t\t     LOGIN \n";	
    cout<<"\t\t\t------------------------------\n\n";	
    cout << "\t\t\tEnter Password: ";
    ch = _getch();
    while(ch != 13){
      pass.push_back(ch);
      cout << '*';
      ch = _getch();}
    if(ch1 =='a'){
    if(pass == "pass"){
        cout << "\n\n\t\tAccess Granted! \n";
        system("PAUSE");
        system ("CLS");}
    else{
        cout << "\n\n\t\tAccess Aborted...\n\t\tPlease Try Again\n\n";
        system("PAUSE");
        system("CLS");}
	}
	else if(ch1=='d'){
	if(pass == "pass1"){
        cout << "\n\n\t\tAccess Granted! \n";
        system("PAUSE");
        system ("CLS");}
    else{
        cout << "\n\n\t\tAccess Aborted...\n\t\tPlease Try Again\n\n";
        system("PAUSE");
        system("CLS");}
	}}
};
int main(){
	int choice, x;
	time_t now = time(0);
    char* date_time = ctime(&now);
    cout <<"\tThe current date and time is: " << date_time << endl;
	cout<<"\t\t<><><><><><><><><><><><><><><><><><><>\n\n";
    cout<<"\t\tWelcome To Hospital Management System\n";
    cout<<"\n\t\t<><><><><><><><><><><><><><><><><><><>\n\n"; 
    cout<<"\t\t\tPick your choice:\n";
    cout<<"\t\t\t   1-Admin(1) \n\t\t\t   2-Doctor(2) \n\t\t\t   3-Exit(3)";
    cout<<"\n\n\t\tEnter 1 for Admin, Enter 2 for Doctor,\n\t\t\t Enter 3 to exit\n";
    cout<<"\n\t\t\tEnter your choice: ";
    cin>>choice;
    if(choice == 1){
		login log('a');
		admin A1;
	    x = A1.display();
    	switch(x){
		   	case 1:{
		   		booking b1;
		   		string filename;
                 ofstream f;
                 getline( cin, filename );
                 f.open( filename.c_str(),ios::out );
		   		b1.booking1();
		   		anything_else();
				break;
			   }
			case 2:{
				doctor_timing t1;
				t1.timings1();
				anything_else();
				break;
			}
			case 3:{
				diagnosis d1;
				break;
			}
			case 4:{
				report r1;
				break;
			}
			case 5:{
				bill b1;
				break;
			}
			default:{
				break;
			}
		   }}
    else if(choice == 2){
		doctor d1;
    	login log('d');}
    else{
    	system("CLS");
    	cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
		cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
		cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";}
}
