#include<iostream>
#include<string>
using namespace std;

class student
{
//defining public 
	public:
		string name;
		int rollno;
		float gpa;
		string subjects;
//defining function
	void display()
	{
		cout<<name<<endl;
		cout<<rollno<<endl;
		cout<<gpa<<endl;
		cout<<subjects<<endl;
	}
		
};

int main()
{
	student s1;
	s1.name="Ali";
	s1.subjects="css,html";
	s1.gpa=3.98;
	s1.rollno=12;
	s1.display();
}
