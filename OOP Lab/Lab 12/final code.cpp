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
class patient{
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
    int var1;
	float ward_charges;
    float test_charges;
    float dr_fee;
public:
	patient(){         //constructor
		var1 = 0; 
	}
	int display1(){
	 
	bool flag;
	for(flag = true;flag!=false;){                                   
	system("CLS");       
    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
    cout<<"\t\t\t------------------------------\n";
    cout<<"\n\t\t\t  Welcome to online PATIENT Portal \n\n";	
    cout<<"\t\t\t------------------------------\n\n";
	cout<<"\t\t-> If you are a new patient, Enter 1\n\t\t->If you have visited before, Enter 2\n";
	cout<<"\t\t\tEnter your choice : ";
	cin>>var1;
	if(var1>0){
		if(var1<3){
		flag = false;
		return var1;}}
    cout<<"\t\tinvalid input: ";
    system("PAUSE");
	}
}
};
class bill:virtual public patient{
	float *amount;
	int days;
public:
	bill(){
		amount = new float;
	}
	void operator +(){
		*amount = test_charges + ward_charges + dr_fee;
	}
	void input(){
		system("CLS");       
        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
        cout<<"\t\t\t------------------------------\n";
        cout<<"\n\t\t\t     Patient's Bill  \n\n";	
        cout<<"\t\t\t------------------------------\n\n";
        cout<<"Enter the number of days you remain admitted: ";
        cin>>days;
        ward_charges = ward_charges*days;
        cout<<ward_charges<<endl;
	}
	void display_total_bill(){
		cout<<"\n\t\t\t->Total Ward charges: Rs."<<ward_charges<<"/-"<<endl;
		cout<<"\n\t\t\t->Doctor's consultation fee: Rs."<<dr_fee<<"/-"<<endl;
		cout<<"\n\t\t\t->Tests and medicines charges: Rs."<<test_charges<<"/-"<<endl;
		cout<<"\t\t\t------------------------------------------";
		cout<<"\n\t\t\t->Total Bill amount: Rs."<<*amount<<"/-"<<endl;
		system("PAUSE");
	}
	~bill(){
		delete amount;
	}
};
class department{
protected:
	int salary_amount;
	string department1;
public:
	virtual void dep() = 0;
	virtual void depmenu() = 0;
	virtual void sal() = 0;
};
int login(char a){
	string pass;
    char ch, ch1;
	static int count;
    	ch1 = a;
    	string userid[3] = {"20K-0337", "20K-0246", "20K-0414"};
		string drname = "name1";
    	string id;
    	bool flag = true;
        while(flag){
    	system("CLS");
            cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>";
            cout<<"\n\n\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
            cout<<"\t\t\t------------------------------";
            cout<<"\n\t\t\t\t     LOGIN \n";	
            cout<<"\t\t\t------------------------------\n\n";
			cout << "\t\t\tEnter username: ";
			cin>>id;
			pass.clear();
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
		if(count>=5){
			flag = false;}	
		}
		return count;
}
int count = 0;
class doctor;
class admin{
	int in;
	friend class doctor_timing;
	friend string anything_else();
public:
	admin(){
	in = 0;}
	int display(){
	bool flag = true;
	while(flag){                                    
	system("CLS");       
    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
    cout<<"\t\t\t------------------------------\n";
    cout<<"\n\t\t\t  Welcome to the ADMIN Block \n\n";	
    cout<<"\t\t\t------------------------------\n\n";	
    cout<<"\t\t\t What do you want to do?\n\n";
    cout<<"\t\t\t 1. Book appointments \n\t\t\t 2. Update Staff Records \n\t\t\t 3. View Patient's Report \n\t\t\t 4. Check Bill \n\t\t\t 5. Exit the program\n";
    cout<<"\n\t\t\tEnter your choice: ";
    cin>>in;
    if(in>0 || in<6){
    	flag = false;
    	 return in;
	}
	}}
};
class ward:virtual public patient{
public:
	void room(){
		cout<<"\n\t\t\t->choose the type of ward : "<<endl; 
		cout<<"\t\t\t\t-> General: \t\t$35 per day \n\t\t\t\t-> Emergency: \t\t$40 per day \n\t\t\t\t-> Medical: \t\t$44 per day \n\t\t\t\t-> Surgical: \t\t$51 per day";
		cout<<"\n\t\t\t\t-> Intensive care \t$60 per day"<<endl;
		cout<<"\n\t\t\tEnter your choice : ";
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
            cout<<"\n\t\t->"<<ward1<<" ward is alloted Successfully"<<endl;
	}
};
class doctor: public department, public ward, virtual public patient{
	string specialization;
	string phoneNo;
	int var2;
public:
	doctor(){     //default constructor
		var2 = 0;
	}
    void dep(){
		bool gang = true;
		while(gang){
		system("CLS");       
        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
        cout<<"\t\t\t--------------------------------\n";
        cout<<"\n\t\t\t  Welcome to the DOCTOR Block \n\n";	
        cout<<"\t\t\t--------------------------------\n\n";	
        cout<<"\t\t\t     Select your department\n\n";
		cout<<"\t\t\t\t1. Orthopaedics department\n";
		cout<<"\t\t\t\t2. ENT department\n";
		cout<<"\t\t\t\t3. Chest & Vascular department\n";
		cout<<"\t\t\t\t4. Gynecology department\n";
		cout<<"\t\t\t\t5. Psychiatry department\n";
		cout<<"\t\t\t\t6. Dental Surgery department\n";
		cout<<"\t\t\t\t7. Accident & Surgery department\n";
		cout<<"\t\t\t\t8. Dermatology department\n";
		cout<<"\t\t\t\t9. Urology department\n";
		cout<<"\t\t\t\t10. Physiotherapy department\n";	
		cout<<"\t\t\t->Enter your choice: ";
		cin>>var2;
		if(var2>0){
		    if(var2<11){
		        gang = false;}}
	    }
		switch(var2){
			case 1:
				department1= "Orthopaedics department";
				depmenu();
			break;
			case 2:
				department1 = "ENT department";
				depmenu();
				break;
			case 3:
				department1 = "Chest & Vascular department";
				depmenu();
				break;
			case 4:
				department1 = "Gynecology department";
				depmenu();
				break;
			case 5:
				department1 = "Psychiatry department";
			    depmenu();
				break;
			case 6:
				department1 = "Dental Surgery department";
				depmenu();
				break;
			case 7:
				department1 = "Accident & Surgery department";
				depmenu();
				break;
			case 8:
				department1 = "Dermatology department";
				depmenu();
				break;
			case 9:
				department1 = "Urology department";
        		depmenu();
				break;
			case 10:
				department1 = "Physiotherapy department";
				depmenu();
				break;				
			default:{
				
				break;
			}
			}
	}  
	void depmenu(){
			bool flower = true;
			while(flower){
			system("CLS");       
            cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
            cout<<"\t\t\t------------------------------\n";
            cout<<"\n\t\t\t            Menu \n\n";	
            cout<<"\t\t\t------------------------------\n\n";	
            cout<<"\t\tPlease select from the following options (Enter respective number) \n\n";
			cout<<"\t\t\t\t1. View appointments\n";
			cout<<"\t\t\t\t2. Search current patient records\n";
			cout<<"\t\t\t\t3. Edit patient records\n";
			cout<<"\t\t\t\t4. Prescribe medicines\n";
			cout<<"\t\t\t\t5. Delete patient records\n";  
			cout<<"\t\t\t\t6. Draw salary\n";
			cout<<"\t\t\t\t7. Logout\n";
			cout<<"\t\t\t->Enter your choice: ";
			cin>>var2;
			if(var2>0){
		        if(var2<8){
		            flower = false;}}
	    }
			switch(var2){
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
					sal();
					salary();
					break;
				case 7:{
					cout<<"\t\t\t\t\t\t\tThank you for using FAST Hospital's portal.\n";
					exit(5);
					break;
				}
				default:{
					cout<<"invalid input"<<endl;
					break;
				}	
			}
		}
		void appointments() {  //checkreports
		string outputAppointments;
		char response;
		fstream drfile;
		system("CLS");       
        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
        cout<<"\t\t\t--------------------------------\n";
        cout<<"\n\t\t\t        Appointments  \n\n";	
        cout<<"\t\t\t--------------------------------\n\n";
				
		drfile.open("Appointments.txt", ios::in );
		
		while(getline(drfile,outputAppointments)){
		cout<<outputAppointments<<endl;
	    }
		drfile.close();
		cout<<"\n\nt\t\t Go back to menu?(Y/N): ";
		cin>>response;
		response = toupper(response);
		
		switch(response){
			case 'Y':
				depmenu();
    			break;
			case 'N':
				exit(5);
				break;	
		}
		
		} 
		
		void searchPatientRecords() { 	
			
			string records;
			string patientfile;
			char response;
			
	        fstream f1;
	        system("CLS");       
            cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
            cout<<"\t\t\t--------------------------------\n";
            cout<<"\n\t\t\t       Search Records  \n\n";	
            cout<<"\t\t\t--------------------------------\n\n";
			cout<<"\t\t-> Search by entering patient ID to view record : ";
			cin>>patientfile;

			f1.open( patientfile.c_str() , ios::in );
			if(!f1){
			cout<<"\t\t->This patient record does not exist";
			cout<<"\t\t\t-> Go back to menu?(Y/N): ";
		    cin>>response;
		    response = toupper(response);
		
		    switch(response){
			    case 'Y':
				    depmenu();
    			    break;
			    case 'N':
				    exit(5);
				    break;	
		    }}
			else{
			system("CLS");       
            cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
            cout<<"\t\t\t------------------------------\n";
            cout<<"\n\t\t\t     Patient's Record  \n\n";	
            cout<<"\t\t\t------------------------------\n\n";
			while(getline(f1, records)){
			cout<<"\n";
			cout<<records;
			}
			f1.close();
			
			cout<<"\t\t\t-> Do you want to view more patient records?(Y/N): ";
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
	
		void editPatientRecords(){ 
		
			patient p;
			string records;
			string patientfile; 
			char response;
			time_t now = time(0);
            char* date_time1 = ctime(&now);
			system("CLS");       
            cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
            cout<<"\t\t\t------------------------------\n";
            cout<<"\n\t\t\t        Edit Record  \n\n";	
            cout<<"\t\t\t------------------------------\n\n";
	        fstream file1;
	        
			cout<<"\t\t\t-> Enter patient ID to add diagnosis : ";
			cin>>patientfile;
			
			file1.open( patientfile.c_str() , ios::app );
			if(!file1){
			cout<<"\t\t\tThis patient record does not exist";
			cout<<"\n\n\t\t\t->Go back to menu?(Y/N): ";
		    cin>>response;
		    response = toupper(response);
		
		    switch(response){
			    case 'Y':
				    depmenu();
    			    break;
			    case 'N':
				    exit(5);
				    break;	
		    }}
	    	else{
			cout<<"\n\t\t Adding diagnosis information in patient's file-------on : "<<date_time1;
            cout<<"\n\t\t\t-> Enter the symptoms observed : ";
			file1<<"Symptoms : "; fflush(stdin);
			gets(p.symp); 
			file1<<p.symp<<"\n";
			
            cout<<"\n\t\t\t-> Enter the Diagnosis : ";
			file1<<"Diagnosis : ";
			gets(p.diag);
			file1<<p.diag<<"\n";
			
			cout<<"\t\t Do you want to add more diagnosis information?(Y/N): ";
			cin>>response;
			response = toupper(response);
			
			switch(response){
				case 'Y':
					cout<<"\n\t\t\t-> Enter additional diagnosis information : ";
					cin.ignore();
					file1<<"Additional diagnosis information : "; 
					gets(p.extraDiag); 
					file1<<p.extraDiag<<"\n";
					cout<<"\n\n\t\t\t->Go back to menu?(Y/N): ";
        		    cin>>response;
		            response = toupper(response);
		
	         	    switch(response){
	        		    case 'Y':
			        	    depmenu();
    			            break;
	          		    case 'N':
			        	    exit(5);
				            break;	
		            }
					break;
				case 'N':
					depmenu();
					break;	
			}
			file1.close();
			cout<<"\n";
			system("PAUSE");
            system("CLS");}
            
		}

		void delPatientRecords(){ 
		system("CLS");  char response;     
        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
        cout<<"\t\t\t--------------------------------\n";
        cout<<"\n\t\t\t        Delete Record \n\n";	
        cout<<"\t\t\t--------------------------------\n\n";
		cout<<"\ndel func"; 
		cout<<"\n\n\t\t\tGo back to menu?(Y/N): ";
		cin>>response;
		response = toupper(response);
		
		switch(response){
			case 'Y':
				depmenu();
    			break;
			case 'N':
				exit(5);
				break;	
		}
		
		
		} 
		
		void prescribeMeds() { 
		
		    patient p;
			ward w;
			
			string records;
			string patientfile, name;
			char response;
			system("CLS");       
            cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
            cout<<"\t\t\t--------------------------------\n";
            cout<<"\n\t\t\t      Doctor's Prescription  \n\n";	
            cout<<"\t\t\t--------------------------------\n\n";
	        fstream file2;
	        
			cout<<"\t\t\t-> Enter patient ID to prescribe medicine and treatment : ";
			cin>>patientfile;
			
			file2.open( patientfile.c_str() , ios::app );
			if(!file2){
			cout<<"\t\t\t-> This patient record does not exist";
			
			cout<<"\n\n\t\t\t Go back to menu?(Y/N): ";
		    cin>>response;
		    response = toupper(response);
		
	    	switch(response){
		    	case 'Y':
			    	depmenu();
    			    break;
    			case 'N':
	     			exit(5);
		    		break;	
		    }	
			}
	    	else{
	    	system("CLS");       
            cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
            cout<<"\t\t\t--------------------------------\n";
            cout<<"\n\t\t\t       Treatment Information  \n\n";	
            cout<<"\t\t\t--------------------------------\n\n";
			
            cout<<"\t\t\t-> Prescribe any medicines: "; 
			file2<<"Medicines : ";  fflush(stdin);
			gets(p.med); 
			file2<<p.med<<"\n";
			
			cout<<"\t\t\t-> Any tests or medical procedures required:";
			file2<<"Medical tests or other procedure: ";
			gets(p.test);    
			file2<<p.test<<"\n";
			
			cout<<"\t\t\t-> Total charges(including charges of tests and prescribed medicines): ";
			cin>>test_charges;
			
			cout<<"\t\t\t-> Duration of treatment: ";
			file2<<"Duration of treatment: ";
			cin.ignore();
			gets(p.tduration);
			file2<<p.tduration<<"\n";
			
			cout<<"\t\t\t-> What will be the consultation fee? ";
			cin>>dr_fee;
			cout<<"\t\t\t-> Addmission Required?(yes/no) : "; 
			file2<<"Addmission Required? : ";
			cin.ignore();
			gets(p.add); 
			if(p.add[0] =='y' || p.add[0] == 'Y'){
			file2<<p.add<<"\n";
			file2<<"Type of ward : ";
			w.room();
			file2<<p.ward1<<"\n";
			
			cout<<"\t\t\t-> Do you want to add any other treatment information?(Y/N) \n";
			cin>>response;
			response = toupper(response);
			
			switch(response){
				case 'Y':
					cout<<"\t\t\t-> Enter additional treatment information : ";
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
			system("PAUSE");
            system("CLS");  }
            
			else{
			file2<<p.add<<"\n";
			cout<<"\t\t\t-> Do you want to add any other treatment information?(Y/N) \n";
			cin>>response;
			response = toupper(response);
			
			switch(response){
				case 'Y':
					cout<<"\t\t\t-> Enter additional treatment information : ";
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
			system("PAUSE");
            system("CLS");
			} } }
    void sal(){
    	if(department1 == "Orthopaedics department"){
			salary_amount = 25000;}
	    else if(department1 == "ENT department"){
			salary_amount = 45000;}
	    else if(department1 == "Chest & Vascular department"){
			salary_amount = 38000;}
        else if(department1 == "Gynecology department"){
			salary_amount = 35000;}
	    else if(department1 == "Psychiatry department"){
			salary_amount = 32000;}
	    else if(department1 == "Dental Surgery department"){
			salary_amount = 30000;}
	    else if(department1 == "Accident & Surgery department"){
	 		salary_amount = 55000;}
	    else if(department1 == "Dermatology department"){
			salary_amount = 48000;}
	    else if(department1 == "Urology department"){
			salary_amount = 45000;}
	    else if(department1 == "Physiotherapy department"){
		    salary_amount = 35000;}
	}
	void salary(){
		char overtime;
        int hrs;
        double hr_rate;
        system("CLS");       
        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
        cout<<"\t\t\t------------------------------\n";
        cout<<"\n\t\t\t      Doctor's Salary  \n\n";	
        cout<<"\t\t\t------------------------------\n\n";
        cout<<"\t\t\t-> The base salary for your : "<<department1<<" is $"<<salary_amount<<endl; 
        cout<<"\t\t\t-> Have you worked overtime? (more than 7 hours) (Y or N) \n";
        cin>>overtime;
    
        hr_rate = 1870.5;
        overtime = toupper(overtime);
        switch(overtime){
        case 'Y' :{
            bool fool = true;
            while(fool){
			cout<<"\t\t\t-> Enter the total amount of hrs worked overtime\n";
            cin>>hrs;
            if(hrs>7){
            	fool= false;}
			}
            salary_amount = salary_amount + (7 - hrs)*hr_rate;
            cout<<"-------------------------------\n";
            cout<<"\t\t\t-> Total salary for this month is: $"<<salary_amount<<endl;
            break;}
        case 'N':{
            cout<<"-------------------------------\n";
            cout<<"\t\t\t-> Total salary for this month is: $"<<salary_amount<<endl; 
            break;}}
	}
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
cout<<"\t\t\t        1)Orthopaedics\n\t\t\t\t";cout<<"2)ENT\n\t\t\t\t";cout<<"3)Chest & Vascular\n\t\t\t\t";cout<<"4)Gynaecology\n\t\t\t\t";cout<<"5)Psychiatry\n\t\t\t\t";
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

class staff:public admin, public doctor{
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
    system("CLS");       
    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
    cout<<"\t\t\t------------------------------\n";
    cout<<"\n\t\t\t  Delete staff record \n\n";	
    cout<<"\t\t\t------------------------------\n\n";	
	cout<<" \n\t\t\t-> Enter the name to delete record : ";
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
    cout<<"\n\n\t\t\t Record deleted successfully! \n";
}
void update_staff()
{
    fstream staff;
    fstream temp;

    staff.open("staff.txt",ios::in);
    temp.open("temp.txt",ios::out);
    cin.ignore();
    system("CLS");       
    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
    cout<<"\t\t\t------------------------------\n";
    cout<<"\n\t\t\t   Update staff Record  \n\n";	
    cout<<"\t\t\t------------------------------\n\n";	
    cout<<" \n\t\t Enter the name to update record : ";
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

            cout<<" \n\t\tEnter the updated data of staff member :   \n ";
            cout<<" \n\t\t\t-> Name : ";
            cin.getline(name,25);
            cout<<" \n\t\t\t-> Age : ";
            cin.getline(age,25);
            cout<<" \n\t\t\t->\t\t\t-> Phone Number : ";
            cin.getline(phone,25);
            cout<<" \n\t\t\t-> Address : ";
            cin.getline(address,25);
            cout<<" \n\t\t\t-> Department : ";
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
    cout<<"\n\n\t\t Staff member record updated successfully! \n";
}
void display_all()
{
    fstream staff;
    staff.open("staff.txt",ios::in);
    system("CLS");       
    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
    cout<<"\t\t\t------------------------------\n";
    cout<<"\n\t\t\t  Display record \n\n";	
    cout<<"\t\t\t------------------------------\n\n";	
    cout<< " \n\t Name \t Age \t  Phone Number \t  Adress \t  Department \n";
    while(!staff.eof())
    {
        staff.getline(name,25,'|');
        staff.getline(age,25,'|');
        staff.getline(phone,25,'|');
        staff.getline(address,25,'|');
        staff.getline(department,25);
        cout<< "\n\t"<< name << "\t "<<age<<"\t      "<<phone<<"\t    "<<address<<"\t             "<<department<<endl;
    }
}
void search_staff( )
{
    fstream staff;
    staff.open("staff.txt",ios::in);
    system("CLS");       
    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
    cout<<"\t\t\t------------------------------\n";
    cout<<"\n\t\t\t  Search record \n\n";	
    cout<<"\t\t\t------------------------------\n\n";	
	cout<<" \n\t\t\tEnter the name of staff member to search: ";
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
        cout<<" \n\n\t\t\t Record not found!\n";
    }
    staff.close();
}
void  add_staff()
{
    fstream staff;
    system("CLS");       
    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
    cout<<"\t\t\t------------------------------\n";
    cout<<"\n\t\t\t       Add record \n\n";	
    cout<<"\t\t\t------------------------------\n\n";	
    staff.open("staff.txt", ios::app);
    cin.ignore();
            cout<<" \n\t\t->Name : ";
            cin.getline(name,25);
            cout<<" \n\t\t-> Age : ";
            cin.getline(age,25);
            cout<<" \n\t\t-> Phone Number : ";
            cin.getline(phone,25);
            cout<<" \n\t\t-> Address : ";
            cin.getline(address,25);
            cout<<" \n\t\t-> Department : ";
            cin.getline(department,25);
            staff<< name<<'|'<<age<<'|'<<phone<<'|'<<address<<'|'<<department<<'\n';
    cout<< "\n\n\tData of new staff member added successfully!";
    staff.close();
}
};
class hospital: public patient{
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
    cout<<"\n\n\t\tEnter 1 for Admin, Enter 2 for Doctor,\n\t\t\t Enter 3 for Patient, Enter 4 to exit\n";
    cout<<"\n\t\t\tEnter your choice: ";
    cin>>choice;
    if(choice == 1){
		k = login('a');
		if(k == 5){
			cout<<"\n\n\t\t\tToo many login attempts! The program will now terminate."<<endl;
		    system("PAUSE");
			system("CLS");
    	    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
		    cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
		    cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";}
		else{
		admin A1;
	    while(ans!="no"){
		x = A1.display();
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
				    break;
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
                bool flag = true;
                while (flag){
                    system("CLS");       
                    cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><><>\n\n";
                    cout<<"\t\t\t------------------------------\n";
                    cout<<"\n\t\t\t  Welcome to the staff Block \n\n";	
                    cout<<"\t\t\t------------------------------\n\n";	
                    cout<<"\t\t\t What do you want to do?\n\n";
	                cout<<"\t\t\t1)Add new staff member details\n";
                    cout<<"\t\t\t2)Update staff member details\n";
                    cout<<"\t\t\t3)Delete record of staff member \n";
                    cout<<"\t\t\t4)View details of all staff members \n";
                    cout<<"\t\t\t5)Search for staff member\n";
                    cout<<"Enter your choice :";
                    int c;
                    cin>>c;
                    switch (c){
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
                            cout << " \n\n\t\t\t Error! Please input a valid number!\n";}
                cout << " \n\t\t\tIf you want to continue, enter 'y':  ";
                char f;
                cin>>f;
                if(f!='y'){
                    flag = false;}
				}
            return 0;
	            ans = anything_else();
		        if(ans=="yes")
		            break;
                else{
	            system("CLS");
    	        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
		        cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
		        cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
				break;}
			}
			case 3:{
				report r1;
				system("CLS");
				r1.report_add();
				cout<<endl<<"\n\n\t";
				system("PAUSE");
				ans = anything_else();
				if(ans=="yes")
				    break;
                else
	                system("CLS");
    		        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
			        cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
			        cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
				break;
			}
			case 4:{
				bill B1;
				B1.input();
				B1.operator +();
				B1.display_total_bill();
				break;
			}
			case 5:{
				system("CLS");
    		        cout<<"\n\n\t\t   <><><><><><><><><><><><><><><><><><><>\n\n";
			        cout<<"\n\n\n\n\n\n\t\t\tThank you for using Hospital management system!!!!";
			        cout<<"\n\n\t\t\tProject designed by:\n\t\t\t\t* Ayesha Zia(20k-0414)\n\t\t\t\t* Syeda Ravia Ejaz(20k-0246)\n\t\t\t\t* Hira Asif(20k-0377)\n\n\n\n\n\n";
				break;
			}
			default:{
			   cout<<"\n\t\t\tinvalid input\n\n"; 
				break;
			}
		   }}}}
    else if(choice == 2){
	k = login('d');
		if(k == 5){
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
	   d1:b= p1.display1();
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
	if(z == 2){
	bill B1;
	B1.input();
	B1.operator +();
    B1.display_total_bill();}
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
