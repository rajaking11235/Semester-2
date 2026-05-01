#include<iostream>
#include <string>
using namespace std;

class student1
{
	public:
			int rollno;
			string name;
			float gpa;
		student1()
		{
			rollno=12;
			name= "Ali";
			gpa=4.67;
		}
		void display()
		{
			cout<<"Roll no:"<<rollno<<"\n"<<"Name:"<<name<<"\n"<<"GPA:"<<gpa<<endl;
		}
};
class student2
{
	public:
			int rollno;
			string name;
			float gpa;
		student2(int a, string b, float c)
		{
			rollno=a;
			name=b;
			gpa=c;
		}
		void display()
		{
			cout<<"Roll no:"<<rollno<<"\n"<<"Name:"<<name<<"\n"<<"GPA:"<<gpa<<endl;
		}
};
class teacher
{
	public:
			int empId;
			string name;
			float rating;
		teacher(int a, string b, float c)
		{
			empId=a;
			name=b;
			rating=c;
		}
		void display()
		{
			cout<<"Employer Id:"<<empId<<"\n"<<"Name:"<<name<<"\n"<<"Rating:"<<rating<<endl;
		}
};


int main()
{
//student1 class object
	cout<<"Student 1"<<endl;
	student1 s1;
	s1.display();
//student2 class object	
	cout<<"Student 2"<<endl;
	student2 s2(13,"Ahmed",2.87);
	s2.display();
//teacher class object	
	cout<<"Teacher"<<endl;
	teacher s3(4,"Mustafa",8);
	s3.display();
}
