#include<iostream>
#include<string>
using namespace std;
struct person
{
	int age;
	string first_name;
	string last_name;
	int salary;
	void display()
	{
		cout<<"Name : "<<first_name<<" "<<last_name<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Salary : "<<salary<<endl;
	}
};
int main()
{
	//array
	person p[2];
	for(int i=0 ; i<2 ; i++){
		
 		cout << "Enter data for person " << i+1 << endl;

        cout << "First Name: ";
        cin >> p[i].first_name;

        cout << "Last Name: ";
        cin >> p[i].last_name;

        cout << "Age: ";
        cin >> p[i].age;

        cout << "Salary: ";
        cin >> p[i].salary;
    }

    // Display using loop
    cout << "\n--- Data ---\n";
    for(int i = 0; i < 2; i++)
    {
        p[i].display();
    }

}
