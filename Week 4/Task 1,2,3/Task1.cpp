#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

class Account {
private:
    int accountNumber;
    double balance;

public:
	int getrandom(){
			return rand() % 1000;
		}
    Account(int a = 0 ,double b = 0.0) {
    	int i=
        accountNumber = getrandom() % 90000 + 10000;
        balance = b;
    }
    void getdata() {
        cout << "Enter balance for account " << accountNumber << ": ";
        cin >> balance;
    }
    Account operator+(const Account& obj) {
        double newBalance = this->balance + obj.balance;
        int newID =this->accountNumber + obj.accountNumber;
        return Account(newID, newBalance);
    }

    void display() {
        cout << "Account Number: " << accountNumber<<endl;
		cout << "Balance: $" << balance << endl;
    }
};

int main() {
    srand(time(0));
	
    Account a; 
    cout << "---- Account 1----" << endl;
    a.getdata();


    Account b;
    cout << "\n---- Account 2 ----" << endl;
    b.getdata();
    Account c = a + b;

    cout << "\n--- Summary ---" << endl;
    a.display();
    b.display();
    cout << "---------------------------------------" << endl;
    cout << "Combined Account Details:" << endl;
    c.display();

    return 0;
}
