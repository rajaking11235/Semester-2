#include <iostream>
#include <string>
using namespace std;
class person
{
	public:
		string name;
		string address;
		float heigth;
		void setData(string a, string b, float c)
		{
			name=a;
			address=b;
			heigth=c;
		}
		void display()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Address:"<<address<<endl;
			cout<<"Heigth:"<<heigth<<endl;	
		}
};
class student:public person
{
	public:
		int rollno;
		float gpa;
		string section;
		
		void getData()
		{
			cout<<"Enter Your Rollno"<<endl;
			cin>>rollno;
			cout<<"Enter your GPA"<<endl;
			cin>>gpa;
			cout<<"Enter your class name"<<endl;
			cin>>section;
		}
		void display()
		{
			person::display();
			cout<<"Roll NO:"<<rollno<<endl;
			cout<<"GPA:"<<gpa<<endl;
			cout<<"Class:"<<section<<endl;
		}
};
class BS:public student
{
	public:
		string courses;
		int CH;
	void getData()
	{
		cout<<"Enter your Courses"<<endl;
		cin>>courses;
		cout<<"Enter your Cerdit Hours"<<endl;
		cin>>CH;
	}	
	void display()
	{
		student::display();
		cout<<"Courses:"<<courses<<endl;
		cout<<"Cerdit Hours:"<<CH<<endl;
	}
};
int main()
{
	student s;
	s.setData("Ali","ty",6);
	s.getData();
	s.display();
	
	BS b;
	b.getData();
	b.display();
	
}


