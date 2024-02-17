#include<iostream>
#include<fstream>
#include<iomanip>
#include<ctime>
#include<process.h>     
#include<cstring>      
#include<conio.h>  
#include<stdlib.h> 
#include<windows.h>
#include<cstring>
using namespace std;
class bill{
	
};
class hospital{
string hospital_d;
public:
void hosp_details(){
ifstream details("hospital.txt");
while(getline(details, hospital_d)){
cout<<hospital_d;
cout<<"\n";
}
details.close();
}
};
class department{
	protected:
string department;
public:
	virtual void dep() = 0;
	virtual void depmenu() = 0;
};

class login{
	string pass;
   char ch, ch1;
public:
	static int count;
    login(char a){
    	ch1 = a;
    	string userid[3] = {"20K-0337", "20K-0246", "20K-0414"};
		string drname = "name1";
    	string id;
        while(count<5){
            system("CLS");
            cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>";
            cout<<"\n\n\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
            cout<<"\t\t\t------------------------------";
            cout<<"\n\t\t\t\t     LOGIN \n";	
            cout<<"\t\t\t------------------------------\n\n";
			cout << "\t\t\tEnter username: ";
			cin>>id;
            cout << "\t\t\tEnter Password: ";
			ch = _getch();
        while(ch != 13){
            pass.push_back(ch);
            cout << '*';
            ch = _getch();}
            if(ch1 =='a'){
            if(pass == "pass"){
            	if(id == "name1"){
                    cout << "\n\n\t\tAccess Granted! \n";
                    system("PAUSE");
                    system ("CLS");
		            break;}
		        else{
		            cout << "\n\n\t\tAccess Aborted...\n\t\tPlease Try Again\n\n";
                    system("PAUSE");
                    count++;}}
            else{
                cout << "\n\n\t\tAccess Aborted...\n\t\tPlease Try Again\n\n";
                system("PAUSE");
                count++;
				}
	    }
	    else if(ch1=='d'){
			if(pass == "drtime"){
	        	if(id == userid[0] || id == userid[1] || id == userid[2]){
                    cout << "\n\n\t\tAccess Granted! \n";
                    system("PAUSE");
                    system ("CLS");
		            break;}
		        else{
		            cout << "\n\n\t\tAccess Aborted...\n\t\tPlease Try Again\n\n";
                    system("PAUSE");
                    count++;}}
            else{
                cout << "\n\n\t\tAccess Aborted...\n\t\tPlease Try Again\n\n";
                system("PAUSE");
                count++;}}
	    }
    }
};

int login::count = 0;

class admin:virtual public hospital{
	int in;
	friend class doctor_timing;
	friend string anything_else();
	const char access;
public:
	admin():access('a'){
	}
	int display(char e){                                       
	system("CLS");       
    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
    cout<<"\t\t\t------------------------------\n";
    cout<<"\n\t\t\t  Welcome to the ADMIN Block \n\n";	
    cout<<"\t\t\t------------------------------\n\n";	
    cout<<"\t\t\t What do you want to do?\n\n";
    cout<<"\t\t\t 1. Book appointments \n\t\t\t 2. Update Staff Records \n\t\t\t 3. View Patient's Report \n\t\t\t 4. Check Bill\n";
    cout<<"\n\t\t\tEnter your choice: ";
    cin>>in;
    return in;	
	}
};
class patient:virtual public hospital{
public:
	char name[20];
    char address[100];
    char contact[10];
    char age[5];
    char gender[8];
    char group[5];
    char disease[50];
    string id;
    char test[50];
    char tduration[50];
    char extraDiag[50];
    char extraTreat[50];
    char name5[20];
    string info;
    char dateofApp[20];
    char symp[100];
    char diag[100];
    char med[100];
    char add[30];
    char ward1[15];
    int ward_charges;
    const char access;
public:
	patient():access('p'){
	}
	int display(char acess){ 
	int in;                                      
	system("CLS");       
    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
    cout<<"\t\t\t------------------------------\n";
    cout<<"\n\t\t\t  Welcome to online PATIENT Portal \n\n";	
    cout<<"\t\t\t------------------------------\n\n";
	cout<<"If you are a new patient, Enter 1\nIf you have visited before enter 2\n";
	cout<<"Enter your choice : ";
	cin>>in;
	return in;	
	
}
};

class ward:public patient{
public:
	void room(){
		cout<<"\nchoose the type of ward : "<<endl; 
		cout<<"\t-> General \t\t$35 per day \n\t-> Emergency \t\t$40 per day \n\t-> Medical \t\t$44 per day \n\t-> Surgical \t\t$51 per day";
		cout<<"\n\t-> Intensive care \t$60 per day"<<endl;
		cout<<"\nEnter your choice : ";
		gets(ward1); 
			if(ward1[0]=='G' || ward1[0]=='g')
			    ward_charges = 35;
			else if(ward1[0] == 'E' || ward1[0] == 'e')
			    ward_charges = 40;
			else if(ward1[0] == 'M' || ward1[0] == 'm')
			    ward_charges = 44;
			else if(ward1[0] == 'S' || ward1[0] == 's')
			    ward_charges = 51;
			else if(ward1[0] == 'I' || ward1[0] == 'i')
			ward_charges = 60; 
            cout<<"\n"<<ward1<<" ward is alloted Successfully\n";
			cout<<"Charges of ward per day = $ "<<ward_charges<<endl;
	}
};

class doctor : public department, public ward{
	string specialization;
	string phoneNo;
	public:	
		void dep(){
			int n;
			system("cls");
			cout<<"\n\n\n";
			cout<<"\t\t\t\t\t\t\tSelect your department\n\n";
			cout<<"\t\t\t\t\t\t\t1. Orthopaedics department\n";
			cout<<"\t\t\t\t\t\t\t2. ENT department\n";
			cout<<"\t\t\t\t\t\t\t3. Chest & Vascular department\n";
			cout<<"\t\t\t\t\t\t\t4. Gynecology department\n";
			cout<<"\t\t\t\t\t\t\t5. Psychiatry department\n";
			cout<<"\t\t\t\t\t\t\t6. Dental Surgery department\n";
			cout<<"\t\t\t\t\t\t\t7. Accident & Surgery department\n";
			cout<<"\t\t\t\t\t\t\t8. Dermatology department\n";
			cout<<"\t\t\t\t\t\t\t9. Urology department\n";
			cout<<"\t\t\t\t\t\t\t10. Physiotherapy department\n";
			
			cin>>n;
			
			switch(n){
				
				case 1:
					department = "Orthopaedics departement";
					depmenu();
					break;
				case 2:
					department = "ENT departement";
					depmenu();
					break;
				case 3:
					department = "Chest & Vascular departement";
					depmenu();
					break;
				case 4:
					department = "Gynecology departement";
					depmenu();
					break;
				case 5:
					department = "Psychiatry departement";
					depmenu();
					break;
				case 6:
					department = "Dental Surgery departement";
					depmenu();
					break;
				case 7:
					department = "Accident & Surgery departement";
					depmenu();
					break;
				case 8:
					department = "Dermatology departement";
					depmenu();
					break;
				case 9:
					department = "Urology departement";
					depmenu();
					break;
				case 10:
					department = "Physiotherapy departement";
					depmenu();
					break;
					
			}
			
			} 
		void depmenu(){
			int n;
			system("cls");
			cout<<"\n\n\n";
			cout<<"\t\t\t\t\t\t\tPlease select from the following options (Press respective number) \n\n";
			cout<<"\t\t\t\t\t\t\t1. View appointments\n";
			cout<<"\t\t\t\t\t\t\t2. Search current patient records\n";
			cout<<"\t\t\t\t\t\t\t3. Edit patient records\n";
			cout<<"\t\t\t\t\t\t\t4. Prescribe medicines\n";
			cout<<"\t\t\t\t\t\t\t5. Delete patient records\n";  
			cout<<"\t\t\t\t\t\t\t6. Draw salary\n";
			cout<<"\t\t\t\t\t\t\t7. Logout\n";
			
			
			cin>>n;
			
			switch(n){
				
				case 1:
					appointments();
					break;
				case 2:
					searchPatientRecords();
					break;
				case 3:
					editPatientRecords();
					break;
				case 4:
					prescribeMeds();  
					break;
				case 5:
					delPatientRecords();
					break;
				case 6:
					salary();
					break;
				case 7:
                	cout<<"\t\t\t\t\t\t\tThank you for using FAST Hospital's portal.\n";
					exit(5);
					break;
					
			}
		}
		appointments() {  //checkreports
		system("cls");
		string outputAppointments;
		char response;
		fstream drfile;
		
		cout<<"\n\n\t\t\t\t\t\t\t<><><><><><><><><><><><><><><><><><><><>\n\n";
			cout<<"\t\t\t\t\t\t\t--------------------------\n";
			cout<<"\t\t\t\t\t\t\tHospital Appointments\n\n";	
			cout<<"\t\t\t\t\t\t\t--------------------------\n\n";
				
		drfile.open("Appointments.txt", ios::in );
		
		while(getline(drfile,outputAppointments)){
		cout<<outputAppointments<<endl;
	    }
		drfile.close();
		cout<<"\t\t\t\t\t\t\t Go back to menu?(Y/N) \n";
			cin>>response;
			//response = toupper(response);
			
			switch(response){
				case 'Y':
					depmenu();
					break;
				case 'N':
					exit(5);
					break;	
			}
		
		} 
		
		searchPatientRecords() { 	
			
			string records;
			string patientfile;
			char response;
			
	        fstream f1;
	        
			cout<<"Search by entering patient ID to view record : ";
			cin>>patientfile;
			
			system("cls");
			f1.open( patientfile.c_str() , ios::in );
			if(!f1){
			cout<<"This patient record does not exist";		
			}
			
			else{
			cout<<"\n\n\t\t\t\t\t\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
			cout<<"\t\t\t\t\t\t\t--------------------------\n";
			cout<<"\n\t\t\t\t\t\t\t      PATIENT RECORD\n\n";	
			cout<<"\t\t\t\t\t\t\t--------------------------\n\n";
			while(getline(f1, records)){
			cout<<"\n";
			cout<<records;
			}
			f1.close();
			
			cout<<"\t\t\t\t\t\t\t Do you want to view more patient records?(Y/N) \n";
			cin>>response;
			response = toupper(response);
			
			switch(response){
				case 'Y':
					searchPatientRecords();
					break;
				case 'N':
					depmenu();
					break;	
			}
		}
	}
	
		editPatientRecords(){ 
		
			patient p;
			string records;
			string patientfile; 
			char response;
			time_t now = time(0);
            char* date_time1 = ctime(&now);
			
	        fstream file1;
	        
			cout<<"Enter patient ID to add diagnosis : ";
			cin>>patientfile;
			
			system("cls");
			file1.open( patientfile.c_str() , ios::app );
			if(!file1){
			cout<<"This patient record does not exist";		
			}

	    	else{
	    		system("cls");
            cout<<"\n";
			cout<<"Adding diagnosis information in patient's file-------on : "<<date_time1;

            cout<<"\nEnter the symptoms observed : ";
			file1<<"Symptoms : "; fflush(stdin);
			gets(p.symp); 
			file1<<p.symp<<"\n";
			
            cout<<"\nEnter the Diagnosis : ";
			file1<<"Diagnosis : ";
			gets(p.diag);
			file1<<p.diag<<"\n";
			
			cout<<"\t\t\t\t\t\t\t Do you want to add more diagnosis information?(Y/N) \n";
			cin>>response;
			response = toupper(response);
			
			switch(response){
				case 'Y':
					cout<<"\nEnter additional diagnosis information : ";
					file1<<"Additional diagnosis information : "; 
					gets(p.extraDiag); 
					file1<<p.extraDiag<<"\n";
					break;
				case 'N':
					depmenu();
					break;	
			}
			file1.close();
			cout<<"\n";
			system("pause");
            system("cls");}
            
		}

		delPatientRecords(){ cout<<"\ndel func"; } 
		
		prescribeMeds() { 
		
		    patient p;
			ward w;
			
			string records;
			string patientfile, name;
			char response;
			
	        fstream file2;
	        
			cout<<"Enter patient ID to prescribe medicine and treatment : ";
			cin>>patientfile;
			
			system("cls");
			file2.open( patientfile.c_str() , ios::app );
			if(!file2){
			cout<<"This patient record does not exist";		
			}
		    
	    	else{
	    		system("cls");
            cout<<"\n";
			cout<<"\t\t\t\t\t\t\t TREATMENT INFORMATION: \n\n";
			
            cout<<"\nPrescribe any medicines: "; 
			file2<<"Medicines : ";  fflush(stdin);
			gets(p.med); 
			file2<<p.med<<"\n";
			
			cout<<"\nAny tests or medical procedures required:";
			file2<<"Medical tests or other procedure: ";
			gets(p.test);    
			file2<<p.test<<"\n";
			
			cout<<"\nDuration of treatment: ";
			file2<<"Duration of treatment: ";
			gets(p.tduration);
			file2<<p.tduration<<"\n";
			
			cout<<"\nAddmission Required?(yes/no) : "; 
			file2<<"Addmission Required? : ";
			gets(p.add); 
			if(p.add[0] =='y' || p.add[0] == 'Y'){
			file2<<p.add<<"\n";
			file2<<"Type of ward : ";
			w.room();
			file2<<p.ward1<<"\n";
			
			cout<<"\t\t\t\t\t\t\t Do you want to add any other treatment information?(Y/N) \n";
			cin>>response;
			response = toupper(response);
			
			switch(response){
				case 'Y':
					cout<<"\nEnter additional treatment information : ";
					file2<<"Additional treatment information : "; 
					gets(p.extraTreat); 
					file2<<p.extraTreat<<"\n";
					break;
				case 'N':
					depmenu();
					break;	
			}
			
			file2<<"\n-------------------------------\n";
			file2.close();
			cout<<"\n";
			system("pause");
            system("cls");  }
            
			else{
			file2<<p.add<<"\n";
			cout<<"\t\t\t\t\t\t\t Do you want to add any other treatment information?(Y/N) \n";
			cin>>response;
			response = toupper(response);
			
			switch(response){
				case 'Y':
					cout<<"\nEnter additional treatment information : ";
					file2<<"Additional treatment information : "; 
					gets(p.extraTreat); 
					file2<<p.extraTreat<<"\n";
					break;
				case 'N':
					depmenu();
					break;	
			}
			file2.close();
			cout<<"\n";
			system("pause");
            system("cls");
			} } }
            
		salary() { cout<<"\nsalary func"; }	
};

string anything_else(){
string answer;
system("cls");
cout<<"\n\n\n\t\tDo you want to do anything else?(Enter yes or no) : ";	
cin>>answer;
return answer;
}


class appointment:public patient{
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
  cout<<"\t\t-> Date of appointment: ";gets(dateofApp); 
  cout<<"\t\t-> Name : ";gets(name); f<<"Name : "; f<<name;f<<"\n";
cout<<"\t\t-> Address : ";gets(address); f<<"Address : "; f<<address;f<<"\n";
  cout<<"\t\t-> Blood Group : ";gets(group); f<<"Bloog Group : "; f<<group;f<<"\n";
  cout<<"\t\t-> Any past diseases : : ";gets(disease); f<<"Past diseases : "; f<<disease;f<<"\n";
  cout<<"\t\t-> Contact Number : ";gets(contact); f<<"Contact Number : "; f<<contact;f<<"\n";
  cout<<"\t\t-> Age : ";gets(age); f<<"Age : "; f<<age;f<<"\n";
  cout<<"\t\t-> Gender : ";gets(gender); f<<"Gender : "; f<<gender;f<<"\n";
  cout<<"\n\t\t\t----------------------------------\n";
cout<<"\n\tPatient Details Saved Successfully!\n";
  system("PAUSE");
  f.close();
  
  id=filename;
  fstream appFile;
  appFile.open("Appointments.txt", ios::app);
  
  appFile<<"\n\t\t\t\t\t\t\tPatient ID: "<<id<<"\t"<<"Name : "<<name<<"\t"<<"Date of appointment: "<<dateofApp<<"\t\n";
  appFile.close();
  
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
appointment b;
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

class report{
	friend string anything_else();
		string myStringText;
		public:
		void report_add(){
			char filename[50];
	ifstream file;
	char ch;
	cout<<"Enter patient ID to display report : ";
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
class staff:public admin,doctor{
public:
	char name [25];
    char age[25];
    char phone [25];
    char a[25];
    char department[25];
    char address[25];
void delete_staff()
{
    fstream staff;
    fstream temp;
    staff.open("staff.txt",ios::in);
    temp.open("temp.txt",ios::out);
    cin.ignore();
    cout<<" \n\t enter the name to delete record : ";
    cin.getline(a,25);
    while(!staff.eof())
    {
        staff.getline(name,25,'|');
        staff.getline(age,25,'|');
        staff.getline(phone,25,'|');
        staff.getline(address,25,'|');
        staff.getline(department,25);
        if(strcmp(name,a)==0)
        {
            continue;
        }
        else
        {
        temp<< name<<'|'<<age<<'|'<<phone<<'|'<<address<<'|'<<department<<'\n';
        }


    }
    temp.close();
    staff.close();

    staff.open("staff.txt",ios::out);
    temp.open("temp.txt",ios::in);
    while(!temp.eof())
    {
        temp.getline(name,25,'|');
        temp.getline(age,25,'|');
        temp.getline(phone,25,'|');
        temp.getline(address,25,'|');
        temp.getline(department,25);
            staff<< name<<'|'<<age<<'|'<<phone<<'|'<<address<<'|'<<department<<'\n';
    }
    temp.close();
    staff.close();
    remove("temp.txt");
    cout<<"\n Record deleted! \n";
}
void update_staff()
{
    fstream staff;
    fstream temp;

    staff.open("staff.txt",ios::in);
    temp.open("temp.txt",ios::out);
    cin.ignore();
    cout<<" \n\t Enter the name to update record : ";
    cin.getline(a,25);
    while(!staff.eof())
    {
        staff.getline(name,25,'|');
        staff.getline(age,25,'|');
        staff.getline(phone,25,'|');
        staff.getline(address,25,'|');
        staff.getline(department,25);
        if(strcmp(name,a)==0)
        {

            cout<<" \n\tEnter the updated data of staff member :   \n ";
            cout<<" \n Name : ";
            cin.getline(name,25);
            cout<<" \n Age : ";
            cin.getline(age,25);
            cout<<" \n Phone Number : ";
            cin.getline(phone,25);
            cout<<" \n Address : ";
            cin.getline(address,25);
            cout<<" \n Department : ";
            cin.getline(department,25);
            temp<< name<<'|'<<age<<'|'<<phone<<'|'<<address<<'|'<<department<<'\n';
        }
        else
        {
            temp<< name<<'|'<<age<<'|'<<phone<<'|'<<address<<'|'<<department<<'\n';
        }


    }
    temp.close();
    staff.close();

    staff.open("staff.txt",ios::out);
    temp.open("temp.txt",ios::in);
    while(!temp.eof())
    {
        temp.getline(name,25,'|');
        temp.getline(age,25,'|');
        temp.getline(phone,25,'|');
        temp.getline(address,25,'|');
        temp.getline(department,25);
        staff<< name<<'|'<<age<<'|'<<phone<<'|'<<address<<'|'<<department<<'\n';
    }
    temp.close();
    staff.close();
    remove("temp.txt");
    cout<<"\n Staff member record updated successfully! \n";
}
void display_all()
{
    fstream staff;
    staff.open("staff.txt",ios::in);
    cout<< " \n\t Name \t Age \t  Phone Number \t  Adress \t  Department \n";
    while(!staff.eof())
    {
        staff.getline(name,25,'|');
        staff.getline(age,25,'|');
        staff.getline(phone,25,'|');
        staff.getline(address,25,'|');
        staff.getline(department,25);
        cout<< "\n \t "<< name << "\t "<<age<<"\t      "<<phone<<"\t    "<<address<<"\t             "<<department<<endl;

    }
}
void search_staff( )
{

    fstream staff;
    staff.open("staff.txt",ios::in);
    cout<<" \n Enter the name of staff member to : ";
    cin.ignore();
    cin.getline(a,25);
    int x=0;
    cout<< " \n\t Name \t Age \t  Phone Number \t  Department \t  Address \n";
    while(!staff.eof())
    {
        staff.getline(name,25,'|');
        staff.getline(age,25,'|');
        staff.getline(phone,25,'|');
        staff.getline(address,25,'|');
        staff.getline(department,25);
        if(strcmp(name, a)==0)
        {
    cout<< " \n\t Name \t Age \t  Phone Number \t  Department \t  Address \n";
            x=1;
            break;
        }

    }
    if(x==0)
    {
        cout<<" \n Record not found!\n";
    }
    staff.close();
}
void  add_staff()
{
    fstream staff;
    staff.open("staff.txt", ios::app);
    cin.ignore();
            cout<<" \n Name : ";
            cin.getline(name,25);
            cout<<" \n Age : ";
            cin.getline(age,25);
            cout<<" \n Phone Number : ";
            cin.getline(phone,25);
            cout<<" \n Address : ";
            cin.getline(address,25);
            cout<<" \n Department : ";
            cin.getline(department,25);
            staff<< name<<'|'<<age<<'|'<<phone<<'|'<<address<<'|'<<department<<'\n';
    cout<< "Data of new staff member added successfully!";
    staff.close();
}
};

int main(){
	int choice, x, k,z,a;
	string ans;
	time_t now = time(0);
    char* date_time = ctime(&now);
    cout <<"\tThe current date and time is: " << date_time << endl;
	cout<<"\t\t<><><><><><><><><><><><><><><><><><><>\n\n";
    cout<<"\t\tWelcome To Hospital Management System\n";
    cout<<"\n\t\t<><><><><><><><><><><><><><><><><><><>\n\n"; 
    cout<<"\t\t\tPick your choice:\n";
    cout<<"\t\t\t   1-Admin(1) \n\t\t\t   2-Doctor(2) \n\t\t\t   3-Patient(3) \n\t\t\t   3-Exit(4)";
    cout<<"\n\n\t\tEnter 1 for Admin, Enter 2 for Doctor,\n\t\t\t, Enter 3 for Patient,\n\t\t\t Enter 4 to exit\n";
    cout<<"\n\t\t\tEnter your choice: ";
    cin>>choice;
    if(choice == 1){
		login log('a');
		k = login::count;
		if(k==5){
			cout<<"\n\n\t\t\tToo many login attempts! The program will now terminate."<<endl;
		    system("PAUSE");
			system("CLS");
    	    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
		    cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
		    cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";}
		else{
		admin A1;
		char e;
		cout<<"Enter 'a' for admin to continue : ";
		cin>>e;
	    d:x = A1.display(e);
    	switch(x){
		   	case 1:{
		   		appointment b1;
		   		string filename;
                 ofstream f;
                 getline( cin, filename );
                 f.open( filename.c_str(),ios::out );
		   		b1.booking1();
		   		ans = anything_else();
				if(ans=="yes")
				    goto d;
                else
	                system("CLS");
    		        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
			        cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
			        cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
				break;
			   }
			case 2:{
	staff s;
     system("CLS");
    bool flag=true;
    while (flag)
    {
    cout<<"What do you want to do?\n";
    cout<<"1)Add new staff member details\n";
    cout<<"2)Update staff member details\n";
    cout<<"3)Delete record of staff member \n";
    cout<<"4)View details of all staff members \n";
    cout<<"5)Search for staff member\n";
    cout<<"Enter your choice :";
        int c;
        cin>>c;
        switch (c)
        {
        case 1 :
            s.add_staff();
            break;
        case 2:
            s.update_staff();
            break;
        case 3:
            s.delete_staff();
            break;
        case 4 :
            s.display_all();
            break;
        case 5 :
            s.search_staff();
            break;
        default :
            cout << " \n Error! Please input a valid number!\n";
        }
        cout << " If you want to continue, enter ' y ' \n ";
        char f;
        cin>>f;
        if(f!='y')
        {
            flag=false;
        }
    }
    return 0;
	           
				if(ans=="yes")
				    goto d;
                else
	                system("CLS");
    		        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
			        cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
			        cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
				break;
			}

			case 3:{
				report r1;
				system("CLS");
				r1.report_add();
				cout<<endl<<"\n\n\t";
				system("PAUSE");
				ans = anything_else();
				if(ans=="yes")
				    goto d;
                else
	                system("CLS");
    		        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
			        cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
			        cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
				break;
			}
			case 4:{
				bill b1;
				break;
			}
			default:{
			    
				break;
			}
		   }}}
    else if(choice == 2){
    login log('d');
	k = login::count;
		if(k==5){
			cout<<"\n\n\t\t\tToo many login attempts! The program will now terminate."<<endl;
			system("PAUSE");
		    system("CLS");
    	    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
		    cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
		    cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";}
        else{
    doctor d1;
	d1.dep();
	}}
		else if(choice==3){
				patient p1;
				int b;
				char e;
		system("CLS");
		cout<<"Enter 'p' for patient to continue : ";
		cin>>e;
	   d1:b= p1.display(e);
		   	if(b==1){
		    cout<<"\t\t\t What do you want to do?\n\n";
    cout<<"\t\t\t 1. Book an appointment \n\t\t\t 2. Check doctor's timings \n\t\t\t 3. Get Hospital's Information";
    cout<<"\n\t\t\tEnter your choice: ";
    cin>>z;
    if(z==1){
    appointment b1;
		   		string filename;
                 ofstream f;
                 getline( cin, filename );
                 f.open( filename.c_str(),ios::out );
		   		b1.booking1();
		   		ans = anything_else();
				if(ans=="yes")
				    goto d1;
                else
	                system("CLS");
    		        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
			        cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
			        cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
				
	}
	else if(z==2){
		doctor_timing t1;
				t1.timings1();
				ans = anything_else();
				if(ans=="yes")
				    goto d1;
                else
	                system("CLS");
    		        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
			        cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
			        cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
			
	}
	else if(z==3){
	hospital h1;
	h1.hosp_details();
	ans = anything_else();
				if(ans=="yes")
				    goto d1;
                else
	                system("CLS");
    		        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
			        cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
			        cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
	}
	}
        if(b==2){
    	string patientfile;
			char response;
	        fstream f1;
             cout<<"Enter your Patient ID : ";
         	cin>>patientfile; fflush(stdin);
			system("cls");
			f1.open( patientfile.c_str() , ios::in );
			if(!f1){
			cout<<"You have not visited before!";		
			}
    	else{
        cout<<"\t\t\t What do you want to do?\n\n";
    cout<<"\t\t\t 1. View my report \n\t\t\t 2. View payment history \n\t\t\t 3. Book new appointment\n";
    cout<<"\n\t\t\tEnter your choice: ";
    cin>>z;
    if(z==1){
    report r1;
				system("CLS");
				r1.report_add();
				cout<<endl<<"\n\n\t";
				system("PAUSE");
				ans = anything_else();
				if(ans=="yes")
				    goto d1;
                else
	                system("CLS");
    		        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
			        cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
			        cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
				
	}
	if(z==2){
	//bill;
	}
	if(z==3){
	appointment b1;
		   		string filename;
                 ofstream f;
                 getline( cin, filename );
                 f.open( filename.c_str(),ios::out );
		   		b1.booking1();
		   		ans = anything_else();
				if(ans=="yes")
				    goto d1;
                else
	                system("CLS");
    		        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
			        cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
			        cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
			
	}

	}
}


		   }}

