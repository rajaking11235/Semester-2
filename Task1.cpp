#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

class Account{
	private:
		string accountNumber;
		double balance;
	public:
		Account(string a="", double b=0){
			accountNumber=a;
			balance=b;
		}
		void getdata(){
			cout<<"Enter your Account number: "<<endl;
			cin>>accountNumber;
			cout<<"Enter your balance: "<<endl;
			cin>>balance;
		}
		int getrandom(){
			return rand() % 1000;
		}
		Account operator+(const Account& obj)
		{
			Account k;
			k.balance=this->balance + obj.balance;
			k.accountNumber = "COMBINED" + getrandom();
			return k;
		}
		void deposit(double amount){
			if(amount > 0){
				balance += amount;
			}
		}
		void withdraw(double amount){
			if(amount > 0 && amount <= balance){
				balance -= amount;
			}
		}
		void display(){
			cout<<"Account Number :"<<accountNumber<<endl;
			cout<<"Balance :"<<balance<<endl;
		}
};
int main()
{
	srand(time(0));
	Account a;
	cout<<"----Account 1----"<<endl;
	a.getdata();
	a.display();
	Account b("5466567",456);
	cout<<"----Account 2----"<<endl;
	b.display();
	Account c= a + b;
	cout<<"----Combined Account----"<<endl;
	c.display();
}
