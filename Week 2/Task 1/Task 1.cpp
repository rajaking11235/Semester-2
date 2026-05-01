#include<iostream>
#include<string>
using namespace std;

//creating a class
class student
{

//creating private class		
	private:
		string name;
		int rollno;
		float gpa;
	public:	

//creating functions

	void SetData()
	{
		cout<<"Enter your name"<<endl;
		cin>>name;
		cout<<"Enter your rollno"<<endl;
		cin>>rollno;
		cout<<"Enter your GPA"<<endl;
		cin>>gpa;
	}
	void Display()
	{
		cout<<name<<endl;
		cout<<rollno<<endl;
		cout<<gpa<<endl;
	}

};

int main()
{
	student s1;
	s1.SetData();
	s1.Display();
}
