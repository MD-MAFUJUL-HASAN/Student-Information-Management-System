#include<bits/stdc++.h>

using namespace std;

/*declaring structure*/

struct information
{
  char ID[15];          //Student ID
  char batch[10];       //Student Batch Number
  char name[30];        //Student Name
  char father_name[30]; //Student Father's Name
  char mother_name[30]; //Student Mother,s Name
  char semester[10];    //Enrolled Semester of Student
  char program[45];     //Program of Student
  char address[50];     //Address of Student
  char email[30];       //Email of Student
  char dob[15];         //Date of Birth Of a Student
  char mobile[15];      //Phone No Of a Student
  char bg[15];          //Blood Group of a Student
};

struct information c;
FILE *fp, *ft;

class student
{
	public:
		void delay(unsigned int mseconds)
		{
    		clock_t goal = mseconds + clock();
    		while (goal > clock());
		}

		void date()
		{
  			time_t T = time(NULL);
  			struct  tm tm = *localtime(&T);
  			cout<<"\n\n\n";
  			cout<<"\t\t\t\t\t\t\t\t\t\t\t   Date: " <<tm.tm_mday<<"/"<<tm.tm_mon+1<<"/"<< tm.tm_year+1900;
		}

		void title()
		{
  			cout<<"\n\n\n";
  			cout<<"\t\t\t\t\t";
  			cout<<"\n";
  			cout<<"\t\t\t\t    ---------------------------------------\n";
  			cout<<"\t\t\t\t    |STUDENT INFORMATION MANAGEMENT SYSTEM|\n";
  			cout<<"\t\t\t\t    ---------------------------------------\n";
  			cout<<"\n\n";
  			cout<<"\t\t\t\t";
  		}

  		void callExit()
      	{
           system("cls");
           cout<<"\n\n\n\n\n\n\n\n";
           cout<<"\t\t\t\t\t";
           fflush(stdin);
           cout<<"You are out of the System.";
           cout<<"\n\n";
           cout<<"\t\t\t\t";
           printf("   Press Enter to Continue Exit Program...");
           cout<<"\n\n\n\n\n\n\n\n";
           exit(0);
      	}

      	void menu()
		{
 		 	int input;
  			system("cls");
  			date();
  			title();
 			cout<<" 1. Enter new Records\n\n";
 			cout<<"\t\t\t\t";
  			cout<<" 2. Modify Records\n\n";
  			cout<<"\t\t\t\t";
  			cout<<" 3. Delete Records\n\n";
  			cout<<"\t\t\t\t";
  			cout<<" 4. Search and view Records\n\n";
  			cout<<"\t\t\t\t";
  			cout<<" 5. Exit\n\n";
  			cout<<"\t\t\t\t";
  			cout<<"Choose options:[1/2/3/4/5]: ";
  			fflush(stdin);
  			cin>>input;
  			switch(input)
  			{
    			case 1:
    			{
      				system("cls");
      				add();
    			}
    			break;

    			case 2:
    			{
      				system("cls");
      				modify();
      				getchar();
   				}
    			break;

    			case 3:
    			{
      				system("cls");
      				del();
    			}
    			break;

    			case 4:
    			{
      				system("cls");
      				search();
    			}
				break;

    			case 5:
    			{
      				system("cls");
      				callExit();
    			}
    			break;

    			default:
    			{
      				system("cls");
      				fflush(stdin);
      				cout<<"\n\n\n";
      				cout<<"\t\t\t\t";
      				cout<<"      Invalid input!";
      				cout<<"\n\n";
      				cout<<"\t\t\t\t";
      				cout<<"Press Enter to choose again...";
      				getchar();
      				menu();
    			}
  			}
  		}

  		void mainpage()
		{
  			int process;
  			system("cls");
  			date();
  			cout<<"\n";
  			cout<<"\t\t\t\t    ---------------------------------------\n";
  			cout<<"\t\t\t\t    |STUDENT INFORMATION MANAGEMENT SYSTEM|\n";
  			cout<<"\t\t\t\t    ---------------------------------------\n";
  			cout<<"\n\n\n";
  			cout<<"\t\t\t\t";
  			cout<<"Prepared By    ";
  			cout<<":";
  			cout<<"   MD MAFUJUL HASAN";
  			cout<<"\n\n";
  			cout<<"\t\t\t\t";
  			cout<<"Project Name   ";
  			cout<<":";
  			cout<<"   Student Information Management System";
  			cout<<"\n\n";
  			cout<<"\t\t\t\t";
  			cout<<"\n\n";
  			cout<<"\t\t\t\t    Press Enter to continue.......";
  			getchar();
  			cout<<"\n\n";
  			cout<<"\t\t\t\tLoading";
  			for(process=0;process<25;process++)
  			{
    			delay(50);
    			printf(".");
  			}
		}

		int logscreen()
		{
  			char username[30];
  			char password[30];
  			int x = 0;
  			int y = 1;
  			do
  			{
    			system("cls");
    			cout<<"\n\n\n\n\n\n\n\n\n\n";
    			cout<<"\t\t\t\t\t";
    			cout<<"Username: ";
    			cin.getline(username,30);
    			cout<<"\t\t\t\t\t";
    			cout<<"\n";
    			cout<<"\t\t\t\t\t";
    			cout<<"Password: ";
    			cin.getline(password,30);
    			if(strcmp(username,"admin")==0 && strcmp(password,"pass")==0)
      			{
        			cout<<"\n\n";
        			cout<<"\t\t\t\t";
        			cout<<"You are accessed to the system!\n\n";
        			cout<<"\t\t\t\t   Press Enter to continue...";
        			fflush(stdin);
        			getchar();
        			menu();
        			system("cls");
        			getchar();
        			y = 0;
      			}
      			else
      			{
        			system("cls");
                      x = x + 1;
        			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        			cout<<"\t\t\t\t\t";
        			cout<<"No. of attempts remain: "<<3-x;
        			fflush(stdin);
        			getchar();
        			if(x>=3)
        			{
          				cout<<"\t\t\t\t\t\t";
          				cout<<"\n";
          				cout<<"\t\t\t\t";
          				cout<<"   No permission to enter the system!" ;
          				getchar();
          				callExit();
          				getchar();
      				}
  				} //END OF ELSE
 			}
			 while(y==1);
		}

		void add()
  		{
    		char input;
    		system("cls");
    		date();
    		cout<<" ";
    		cout<<"\t\t\t\t";
    		cout<<"\n";
    		cout<<"\n\n";
    		cout<<"\t\t\t\t";
    		cout<<"Enter The Information Below: \n\n\n\n";
    		cout<<"\t\t\t\t";
    		cout<<"Enter ID           :  ";
    		fflush(stdin);
    		cin.getline(c.ID,15);
    		cout<<"\n\n";
    		cout<<"\t\t\t\t";
    		cout<<"Batch              :  ";
    		fflush(stdin);
    		cin.getline(c.batch,10);
    		cout<<"\n\n";
    		cout<<"\t\t\t\t";
    		cout<<"Full Name          :  ";
    		fflush(stdin);
    		cin.getline(c.name,30);
    		cout<<"\n\n";
    		cout<<"\t\t\t\t";
    		cout<<"Father's Name      :  ";
    		fflush(stdin);
    		cin.getline(c.father_name,30);
    		cout<<"\n\n";
    		cout<<"\t\t\t\t";
    		cout<<"Mother,s Name      :  ";
    		fflush(stdin);
    		cin.getline(c.mother_name,30);
    		cout<<"\n\n";
    		cout<<"\t\t\t\t";
    		cout<<"Enrolled Semester  :  ";
    		fflush(stdin);
    		cin.getline(c.semester,10);
    		cout<<"\n\n";
    		cout<<"\t\t\t\t";
    		cout<<"Program            :  ";
    		fflush(stdin);
    		cin.getline(c.program,45);
    		cout<<"\n\n";
    		cout<<"\t\t\t\t";
    		cout<<"Address            :  ";
    		fflush(stdin);
    		cin.getline(c.address,50);
    		cout<<"\n\n";
    		cout<<"\t\t\t\t";
    		cout<<"Email Address      :  ";
    		fflush(stdin);
    		cin.getline(c.email,30);
    		cout<<"\n\n";
    		cout<<"\t\t\t\t";
    		cout<<"Date of Birth      :  ";
    		fflush(stdin);
    		cin.getline(c.dob,15);
    		cout<<"\n\n";
    		cout<<"\t\t\t\t";
    		cout<<"Phone No.          :  ";
    		fflush(stdin);
    		cin.getline(c.mobile,15);
    		cout<<"\n\n";
    		cout<<"\t\t\t\t";
    		cout<<"Blood Group        :  ";
    		fflush(stdin);
    		cin.getline(c.bg,15);
    		fflush(stdin);
    		fp=fopen("users.txt","rb+");
    		fwrite(&c,sizeof(c),1,fp);
    		fclose(fp);
    		cout<<"\n\n";
    		cout<<"\t\t\t\t";
    		printf("Record added successfully!!");
    		cout<<"\n\n";
    		cout<<"\t\t\t\t";
    		printf("Do you want to add more?(Y/N)\t");
    		cin>>input;
    		if(input=='Y' || input=='y')
    		{
      			add();
    		}
    		else
    			menu();
    		getchar();
        }


    	void modify()
		{
  			char mid[30];
  			int found=0;
  			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  			cout<<"\t\t\t\t\t";
  			fflush(stdin);
  			cout<<"Enter Full Name : ";
  			cin.getline(mid,30);
  			fflush(stdin);
            FILE *fp, *ft;
            ft = fopen("temp.dat", "wb");
            fp=fopen("users.txt","rb+");
  			while(fread(&c,sizeof(c),1,fp) == 1)
  			{
      			if(strcmp(mid,c.name) == 0)
      			{
          			fflush(stdin);
          			system("cls");
          			cout<<"\n\n\n\n\n\n\n\n\n\n\n";
          			cout<<"\t\t\t\t\t";
          			cout<<"<<<==Old Record==>>>";
          			cout<<"\n";
          			cout<<"\t\t\t\t\t";
          			list();
          			cout<<"\n\n";
          			cout<<"\t\t\t\t\t";
          			cout<<"Press Enter to modify the record...";
          			getchar();
          			system("cls");
          			rec(); // this will ask to enter new record
          			fseek(fp, - sizeof(c), 0);
                    fwrite(&c,sizeof(c),1,fp); //The new name will be added to the record.
          			found = 1;
          			cout<<"\n\n";
          			cout<<"\t\t\t\t\t";
          			cout<<"Record Saved !!!";
          			getchar();
        		}
        		fclose(fp);
        		menu();
      		}
      		if(!found)
      		{
          		system("cls");
          		delay(200);
          		fflush(stdin);
          		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
          		cout<<"\t\t\t\t\t";
          		fflush(stdin);
          		cout<<"<<--Record Not Found-->>";
          		getchar();
          		menu();
        	}
        	fclose(fp);
      }

      	void del()
        {
         	FILE *fp, *ft;
         	int ch;
         	char sid[30];
         	system("cls");
         	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         	cout<<"\t\t\t\t\t";
         	cout<<"Enter Full Name : ";
         	fflush(stdin);
         	cin.getline(sid,30);
         	fflush(stdin);
         	cout<<"\t\t\t\t\t";
         	cout<<"\n";
         	cout<<"\t\t\t\t\t";
         	cout<<"Record Deleted Successfully.\n";
         	cout<<"\n";
         	cout<<"\t\t\t\t\t";
         	cout<<"Press Enter For Main Menu...";
         	getchar();
         	menu();
         	fp = fopen("users.txt","rb+");
         	ft = fopen("temp.dat", "wb");
         	while (fread (&c, sizeof(c),1,fp) == 1)
         	{
           		if(strcmp(sid,c.name)==0)
             	{
                 	fwrite(&c,sizeof(c),1,ft);
           		}
         		fclose(fp);
         		fclose(ft);
         		remove("users.txt");
         		rename("temp.dat","users.txt");
         	}
       }


       /*void del()
       {
         int ch;
         char cno[30];
         system("cls");
         fp=fopen("users.txt","rb+");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         cout<<"\t\t\t\t\t";
         cout<<"Enter Full Name:";
         fflush(stdin);
         cin.getline(cno,30);
         fflush(stdin);
         while ( fread(&c, sizeof(c), 1, fp) && strcmp(cno,c.name) );
         ch=strcmp(cno,c.name);
         if(ch!=0)
         {
           system("cls");
           delay(200);
           cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<"\t\t\t\t\t";
           cout<<"<<--Record Not Found-->>";
           getchar();
           menu();
           }
        else //Here the saved record is displayed.
        {
          system("cls");
          cout<<"\n\n\n\n\n\n\n\n\n";
          cout<<"\t\t\t\t\t";
          cout<<"<<==Search Succesfull==>>";
          list(); //display the record
          cout<<"\n\n";
          cout<<"\t\t\t\t\t";
          cout<<"Press Enter To Delete The Record.....";
          getchar();
          empty(); //this is a Function which will erase the record in memory & NOT physically.
          fseek(fp, - sizeof(c), 0);
          fwrite(&c, sizeof(c), 1, fp);
          system("cls");
          delay(200);
          cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
          cout<<"\t\t\t\t\t";
          cout<<"Record Deleted !!!";
          getchar();
        }
        menu();
        fclose(fp);
      }*/

       void search()
       {
        	int ch;
        	char sid[30];
        	system("cls");
        	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        	cout<<"\t\t\t\t\t";
        	fflush(stdin);
        	cout<<"Enter Full Name : ";
        	cin.getline(sid,30);
        	fp=fopen("users.txt","rb+");
        	while (fread (&c, sizeof(c),1,fp) == 1)
        	{
          		if(strcmp(sid,c.name)==0)
          		{
            		ch=1;
            		break;
          		}
        	}
        	if(ch==1)
        	{
          		system("cls");
          		cout<<"\n\n\n\n\n\n\n";
          		cout<<"\t\t\t\t\t";
          		cout<<"<<==Search Succesfull==>>";
          		fflush(stdin);
          		getchar();
          		list(); //display the record
          		cout<<"\n\n\n";
          		cout<<"\t\t\t\t\t";
          		cout<<"Press Enter For Main Menu...";
          		getchar();
          		menu();
        	}
        	else
        	{
          		system("cls");
          		//getchar();
          		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
          		cout<<"\t\t\t\t\t";
          		cout<<"<<--Record Not Found-->>";
          		cout<<"\n\n\n";
          		cout<<"\t\t\t\t\t";
          		cout<<"Press Enter For Main Menu...";
          		getchar();
          		menu();
        	}
			fclose(fp);
      }

      void list()
	  {
    	cout<<" ";
      	cout<<"\n";
      	cout<<"\t\t\t\t";
      	cout<<"\t\t\t\t";
      	cout<<"\n";
      	cout<<"\t\t\t\t";
      	cout<<"\n";
      	cout<<"\t\t\t\t";
      	cout<<"ID                 :   "<<c.ID;
      	cout<<"\n\n";
      	cout<<"\t\t\t\t";
      	cout<<"Batch              :   "<<c.batch;
      	cout<<"\n\n";
      	cout<<"\t\t\t\t";
      	cout<<"Full Name          :   "<<c.name;
      	cout<<"\n\n";
      	cout<<"\t\t\t\t";
      	cout<<"Father's Name      :   "<<c.father_name;
      	cout<<"\n\n";
      	cout<<"\t\t\t\t";
      	cout<<"Mother's Name      :   "<<c.mother_name;
      	cout<<"\n\n";
      	cout<<"\t\t\t\t";
      	cout<<"Enrolled Semester  :   "<<c.semester;
      	cout<<"\n\n";
      	cout<<"\t\t\t\t";
      	cout<<"Program            :   "<<c.program;
      	cout<<"\n\n";
      	cout<<"\t\t\t\t";
      	cout<<"Address            :   "<<c.address;
      	cout<<"\n\n";
      	cout<<"\t\t\t\t";
      	cout<<"Email Address      :   "<<c.email;
      	cout<<"\n\n";
      	cout<<"\t\t\t\t";
      	cout<<"Date of Birth      :   "<<c.dob;
      	cout<<"\n\n";
      	cout<<"\t\t\t\t";
      	cout<<"Phone No.          :   "<<c.mobile;
      	cout<<"\n\n";
      	cout<<"\t\t\t\t";
      	cout<<"Blood Group        :   "<<c.bg;
	  }

	  void empty()
      {
        strcpy(c.ID," ");
        strcpy(c.batch," ");
        strcpy(c.name," ");
        strcpy(c.father_name," ");
        strcpy(c.mother_name," ");
        strcpy(c.semester," ");
        strcpy(c.program," ");
        strcpy(c.address," ");
        strcpy(c.email," ");
        strcpy(c.dob," ");
        strcpy(c.mobile," ");
        strcpy(c.bg," ");
      }

      void rec()
       {
         cout<<" ";
         cout<<"\n";
         cout<<"\t\t\t\t";
         cout<<"\n";
         cout<<"\t\t\t\t";
         cout<<"\n";
         cout<<"\t\t\t\t";
         cout<<"\n";
         cout<<"\n\n\n\n";
         cout<<"\t\t\t\t";
         cout<<"Enter The Information Below: \n\n";
         cout<<"\t\t\t\t";
         cout<<"ID                 :  "<<c.ID;
         cout<<"\n\n";
         cout<<"\t\t\t\t";
         cout<<"Batch              :  ";
         fflush(stdin);
         cin.getline(c.batch,10);
         cout<<"\n\n";
         cout<<"\t\t\t\t";
         cout<<"Full Name          :  ";
         fflush(stdin);
         cin.getline(c.name,30);
         cout<<"\n\n";
         cout<<"\t\t\t\t";
         cout<<"Father's Name      :  ";
         fflush(stdin);
         cin.getline(c.father_name,30);
         cout<<"\n\n";
         cout<<"\t\t\t\t";
         cout<<"Mother's Name      :  ";
         fflush(stdin);
         cin.getline(c.mother_name,30);
         cout<<"\n\n";
         cout<<"\t\t\t\t";
         cout<<"Enrolled Semester  :  ";
         fflush(stdin);
         cin.getline(c.semester,10);
         cout<<"\n\n";
         cout<<"\t\t\t\t";
         cout<<"Program            :  ";
         fflush(stdin);
         cin.getline(c.program,45);
         cout<<"\n\n";
         cout<<"\t\t\t\t";
         cout<<"Address            :  ";
         fflush(stdin);
         cin.getline(c.address,50);
         cout<<"\n\n";
         cout<<"\t\t\t\t";
         cout<<"Email Address      :  ";
         fflush(stdin);
         cin.getline(c.email,30);
         cout<<"\n\n";
         cout<<"\t\t\t\t";
         cout<<"Date of Birth      :  ";
         fflush(stdin);
         cin.getline(c.dob,15);
         cout<<"\n\n";
         cout<<"\t\t\t\t";
         cout<<"Phone No.          :  ";
         fflush(stdin);
         cin.getline(c.mobile,15);
         cout<<"\n\n";
         cout<<"\t\t\t\t";
         cout<<"Blood Group        :  ";
         fflush(stdin);
         cin.getline(c.bg,15);
         fflush(stdin);
	   }

};

int main()
{
	system ("cls");

	fp=fopen("users.txt","rb+");
    if (fp == NULL)
    {
        fp = fopen("users.txt","wb+");
        if (fp==NULL)
        {
            puts("Cannot open file");
            return 0;
        }
    }

	student obj;
	obj.mainpage();
	obj.logscreen();
	return 0;
}

