#include<iostream>
#include<string>
using namespace std;
struct student{
		string first_Name;
	string last_Name;
	int rollno;
	int marks;
	
	//display function
	void diplayStudentInfo()
	{
		cout<<"Name : "<<first_Name<<" "<<last_Name<<endl;
		cout<<"Roll NO: "<<rollno<<endl;
		cout<<"Marks : "<<marks<<endl;
	}
};

int main()
{
	student s1;
	/*student s[3];
	for(int i=0; i<3; i++)
	{
		cout<<" Enter data of student "<<i+1<<endl;
		cout<<"First Name: "<<endl;
		cin>>s[i].first_Name;
		cout<<"Last Name: "<<endl;
		cin>>s[i].last_Name;
		cout<<"Roll NO: "<<endl;
		cin>>s[i].rollno;
	}
	
	    for(int i = 0; i <3; i++)
    {
    	cout<<"----Data of student "<<i+1<<"----"<<endl;
        s[i].diplayStudentInfo();
    }*/
    s1.first_Name="qweefet";
	student *studentPtr= &s1;
	cout<<"diplaying using pointer \n"<<studentPtr->first_Name<<endl;
	cout<<studentPtr->last_Name<<endl;
	cout<<studentPtr->marks<<endl;
	
}
