#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

class Account {
private:
    string accountNumber;
    double balance;

public:
    Account(string a = "", double b = 0.0) {
        if (a == "") {
            accountNumber = to_string(rand() % 90000 + 10000);
        } else {
            accountNumber = a;
        }
        balance = b;
    }
    void getdata() {
        cout << "Enter balance for account " << accountNumber << ": ";
        cin >> balance;
    }
    Account operator+(const Account& obj) {
        double newBalance = this->balance + obj.balance;
        string newID = "Combined_" + this->accountNumber + "_" + obj.accountNumber;
        return Account(newID, newBalance);
    }

    void display() {
        cout << "Account Number: " << accountNumber << " | Balance: $" << balance << endl;
    }
};

int main() {
    srand(time(0));
	
    Account a; 
    cout << "---- Account 1 (Randomly Generated) ----" << endl;
    a.getdata();


    Account b;
    cout << "\n---- Account 2 (Randomly Generated) ----" << endl;
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
