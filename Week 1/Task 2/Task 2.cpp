#include<iostream>
#include<string>
using namespace std;
struct Student{
	string first_Name;
	string last_Name;
	int rollno;
	int marks;
	
	//display function
	void diplayStudentInfo()
	{
		cout<<"----Data----"<<endl;
		cout<<"Name : "<<first_Name<<" "<<last_Name<<endl;
		cout<<"Roll NO: "<<rollno<<endl;
		cout<<"Marks : "<<marks<<endl;
	}
};

int main()
{
	Student s1;
	s1.first_Name="AWAIS";
	s1.last_Name="NISAR";
	s1.marks=890;
	s1.rollno=13;
	s1.diplayStudentInfo();
}
