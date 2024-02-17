#include<iostream>
#include<string.h>
#include<ctime>
#include<conio.h>
#include<fstream>
using namespace std;
class admin{
	int in;
	friend class doctor_timing;
	friend string anything_else();
public:
	int display(){
	system("CLS");
    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
    cout<<"\t\t\t------------------------------\n";
    cout<<"\n\t\t\t  Welcome to the ADMIN Block \n\n";	
    cout<<"\t\t\t------------------------------\n\n";	
    cout<<"\t\t\t What do you want to do?\n\n";
    cout<<"\t\t\t 1. Book appointments \n\t\t\t 2. Check doctor's timings \n\t\t\t 3. Add Patient's diagnosis information\n\t\t\t 4. View Patient's Report \n\t\t\t 5. Check Bill\n";
    cout<<"\n\t\t\tEnter your choice: ";
    cin>>in;
    return in;
	
	}
};
class booking{
	protected:
char name[20];
char address[100];
char contact[10];
char age[5];
char gender[8];
char group[5];
char disease[50];
char id[15];
friend class doctor_timing;
friend string anything_else();
public:
booking1(){
string filename;
ofstream f;
system("CLS");
cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
cout<<"\t\t\t------------------------------\n";
cout<<"\n\t\t\t      BOOK APPOINTMENTS \n\n";	
cout<<"\t\t\t------------------------------\n\n";
cout << "\t\t-> Enter Patient ID : ";
  getline( cin, filename );
  f.open( filename.c_str(),ios::out );
  cout<<"\t\t-> Name : ";gets(name); f<<"Name : "; f<<name;f<<"\n";
cout<<"\t\t-> Address : ";gets(address); f<<"Address : "; f<<address;f<<"\n";
  cout<<"\t\t-> Contact Number : ";gets(contact); f<<"Contact Number : "; f<<contact;f<<"\n";
  cout<<"\t\t-> Age : ";gets(age); f<<"Age : "; f<<age;f<<"\n";
  cout<<"\t\t-> Gender : ";gets(gender); f<<"Gender : "; f<<gender;f<<"\n";
  cout<<"\t\t-> Blood Group : ";gets(group); f<<"Bloog Group : "; f<<group;f<<"\n";
  cout<<"\t\t-> Any past diseases : : ";gets(disease); f<<"Past diseases : "; f<<disease;
    cout<<"\n\t----------------------------------\n";
cout<<"\n\tPatient Details Saved Successfully!\n";
  f.close();
}
};
class doctor_timing{
int department;
string doctor;
string myStringText;
string answer;
friend string anything_else();
public:
void timings1(){
booking b;
system("CLS");
cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
cout<<"\t\t\t------------------------------\n";
cout<<"\n\t\t\t      Doctor's Timings \n\n";	
cout<<"\t\t\t------------------------------\n\n";
cout<<"\t\t\tQ. Enter the name of department?\n\n";
cout<<"\t\t\t       1)Orthopaedics\n\t\t\t\t";cout<<"2)ENT\n\t\t\t\t";cout<<"3)Chest & Vascular\n\t\t\t\t";cout<<"4)Gynaecology\n\t\t\t\t";cout<<"5)Psychiatry\n\t\t\t\t";
cout<<"6)Dental Surgery\n\t\t\t\t";cout<<"7)Accident & Surgery\n\t\t\t\t";cout<<"8)Dermatology\n\t\t\t\t";cout<<"9)Urology\n\t\t\t\t";cout<<"10)Physiotherapy\n\n\t\t\t->";
cout<<"Enter your choice: ";
cin>>department;
system("CLS");
cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
cout<<"\t\t\t------------------------------\n";
cout<<"\n\t\t\t      Doctor's Name \n\n";	
cout<<"\t\t\t------------------------------\n\n";
cout<<"\t\tQ. Enter the first name of the doctor?\n\n";
cout<<"\t\t\t* Dr. Ali Zia\n";
cout<<"\t\t\t* Dr. Fatima Saleem\n";
cout<<"\t\t\t* Dr. Sara Khan\n";
cout<<"\t\t\t* Dr. Hasan Ahmed\n";
cout<<"\t\t\t* Dr. Laiba Danish";
cout<<"\n\t\t->Enter your the first name of doctor: ";
cin>>doctor;
system("cls");
if(doctor=="ali"||doctor=="Ali"){
ifstream myFile("ali.txt");
cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
cout<<"\t\t\t--------------------------\n";
cout<<"\n\t\t\t DR ALI ZIA's TIMINGS \n\n";	
cout<<"\t\t\t--------------------------\n\n";
while(getline(myFile, myStringText)){
cout<<"\n";
cout<<"\t\t\t->";
cout<<myStringText;
cout<<"\n";
}
myFile.close();
}
else if(doctor=="Fatima"||doctor=="fatima"){
ifstream myFile("fatima.txt");
cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
cout<<"\t\t\t--------------------------\n";
cout<<"\n\t\t\t DR FATIMA SALEEM's TIMINGS \n\n";	
cout<<"\t\t\t--------------------------\n\n";
while(getline(myFile, myStringText)){
cout<<"\n";
cout<<"\t\t\t->";
cout<<myStringText;
cout<<"\n";
}
myFile.close();
}
if(doctor=="Sara"||doctor=="sara"){
ifstream myFile("sara.txt");
cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
cout<<"\t\t\t--------------------------\n";
cout<<"\n\t\t\t DR SARA KHAN's TIMINGS \n\n";	
cout<<"\t\t\t--------------------------\n\n";
while(getline(myFile, myStringText)){
cout<<"\n";
cout<<"\t\t\t->";
cout<<myStringText;
cout<<"\n";
}
myFile.close();

}
if(doctor=="Hasan"||doctor=="hasan"){
ifstream myFile("hasan.txt");
cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
cout<<"\t\t\t--------------------------\n";
cout<<"\n\t\t\t DR HASAN AHMED's TIMINGS \n\n";	
cout<<"\t\t\t--------------------------\n\n";
while(getline(myFile, myStringText)){
cout<<"\n";
cout<<"\t\t\t->";
cout<<myStringText;
cout<<"\n";
}
myFile.close();

}
if(doctor=="Laiba"||doctor=="laiba"){
ifstream myFile("laiba.txt");
cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
cout<<"\t\t\t--------------------------\n";
cout<<"\n\t\t\t DR LAIBA DANISH's TIMINGS \n\n";	
cout<<"\t\t\t--------------------------\n\n";
while(getline(myFile, myStringText)){
cout<<"\n";
cout<<"\t\t\t->";
cout<<myStringText;
cout<<"\n";
}
myFile.close();

}
cout<<"\n\n\tDo you want to book an appointment(Enter yes or no) : ";
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
string anything_else(){
admin a;
string answer;
system("cls");
cout<<"\n\n\n\t\tDo you want to do anything else?(Enter yes or no) : ";	
cin>>answer;
return answer;
}
class doctor{
	
};

class diagnosis{
protected:
	char name[20];
	string info;
	char symp[500];
    char diag[500];
    char med[500];
    char add[30];
    char ward[15];
    int ward_charges;
public:
	void add_info(){
	    fstream file;
	    time_t now = time(0);
        char* date_time1 = ctime(&now);
        c:cout<<"\n\nEnter the patient's file name to be opened : ";
        cin.ignore();
        gets(name);
        system("cls");
	    file.open(name, ios::in);
		if(!file){
		    cout<<"\nError while opening the file\n";
		    goto c;}
		else{
		    cout<<"\n\n\t\t----------------Information about "<<name<<" -------------\n\n";
			while(file.good()){
			getline(file,info);
			cout<<info<<"\n";}
			cout<<"\n";
			file.close();
			file.open(name, ios::out | ios::app);
            cout<<"\n";
			cout<<"Adding diagnosis information in patient's file-------on : "<<date_time1;
			file<<"Description of "<<date_time1<<"\n";
            cout<<"\nEnter the symtoms observed : ";
			file<<"Symptoms : "; 
			gets(symp); 
			file<<symp<<"\n";
            cout<<"\nEnter the Diagnosis : ";
			file<<"Diagnosis : ";
			gets(diag);
			file<<diag<<"\n";
            cout<<"\nEnter the name of Medicines required: "; 
			file<<"Medicines : ";
			gets(med); 
			file<<med<<"\n";
            cout<<"\nAddmission Required?(yes/no) : "; 
			file<<"Addmission Required? : ";
			gets(add); 
			if(add[0] =='y' || add[0] == 'Y'){
			file<<add<<"\n";
            cout<<"\nchoose the type of ward : "<<endl; 
			cout<<"\t-> General \t\t$35 per day \n\t-> Emergency \t\t$40 per day \n\t-> Medical \t\t$44 per day \n\t-> Surgical \t\t$51 per day";
			cout<<"\n\t-> Intensive care \t$60 per day"<<endl;
			cout<<"\nEnter your choice : "; 
			file<<"Type of ward : ";
			gets(ward); 
			if(ward[0]=='G' || ward[0]=='g')
			    ward_charges = 35;
			else if(ward[0] == 'E' || ward[0] == 'e')
			    ward_charges = 40;
			else if(ward[0] == 'M' || ward[0] == 'm')
			    ward_charges = 44;
			else if(ward[0] == 'S' || ward[0] == 's')
			    ward_charges = 51;
			else if(ward[0] == 'I' || ward[0] == 'i')
			    ward_charges = 60;
			file<<ward<<"\n";
			file<<"\n-------------------------------\n";
            cout<<"\n"<<ward<<" ward is alloted Successfully\n";
			cout<<"Charges of ward per day = $ "<<ward_charges<<endl;
			file.close();
			cout<<"\n";
			system("pause");
            system("cls");}
			else{
			file<<add<<"\n";
			file.close();
			cout<<"\n";
			system("pause");
            system("cls");
			}
		}
	}	
};
class report:public diagnosis,booking{
	public:
		string myStringText;
		void report_add(){
			char filename[50];
	ifstream file;
	char ch;
	cout<<"enter patient ID to display report";
	cin>>filename;
	system("CLS");
	file.open(filename,ios::in);
	if(!file){
		cout<<"The record of patient does not exist";
		
	}
	else{
cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
cout<<"\t\t\t--------------------------\n";
cout<<"\n\t\t\t      PATIENT's REPORT\n\n";	
cout<<"\t\t\t--------------------------\n\n";
while(getline(file, myStringText)){
cout<<"\n";
cout<<"\t\t\t->";
cout<<myStringText;

		}
		file.close();
	}
}
		

};
class bill{
	
};
class login{
string pass;
   char ch, ch1;
    static int loginAttempt ;
public:
void login1()
{
    system("CLS");
    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>";
    cout<<"\n\n\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
    cout<<"\t\t\t------------------------------";
    cout<<"\n\t\t\t\t     LOGIN \n";	
    cout<<"\t\t\t------------------------------\n\n";	
    cout << "\t\t\tEnter Password: ";
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
};int login::loginAttempt=0;
int main(){
	int choice, x;
	string ans;
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
    	login log;
		log.login1();
	
	//	login log('a');
		admin A1;
	    d:x = A1.display();
    	switch(x){
		   	case 1:{
		   		booking b1;
		   		string filename;
                 ofstream f;
                 getline( cin, filename );
                 f.open( filename.c_str(),ios::out );
		   		b1.booking1();
		   		ans = anything_else();
				if(ans=="yes"){
					
				}
//				    goto d;
               else
	                system("CLS");
    		        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
			        cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
			        cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
				break;
			   }
			case 2:{
				doctor_timing t1;
				t1.timings1();
				ans = anything_else();
//				if(ans=="yes")
//				    goto d;
//                else
	                system("CLS");
    		        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
			        cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
			        cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
				break;
			}
			case 3:{
				diagnosis d1;
				d1.add_info();
				ans = anything_else();
//				if(ans=="yes")
//				    goto d;
//                else
	                system("CLS");
    		        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
			        cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
			        cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
				break;
			}
			case 4:{
				system("CLS");
				report r1;
				r1.report_add();

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
    	//login log('d');
    }
    else{
    	system("CLS");
    	cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
		cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
		cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";}
}
