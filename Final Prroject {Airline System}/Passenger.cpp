#include "Passenger.h"
#include <iostream>

using namespace std;

Passenger::Passenger(string id, string n, string p, string e)
{
    passengerID = id;
    name = n;
    phone = p;
    email = e;
}

void Passenger::displayDetails()
{
    cout << "Passenger ID: " << passengerID << endl;
    cout << "Name: " << name << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;
}

EconomyPassenger::EconomyPassenger(
    string id,
    string n,
    string p,
    string e,
    int baggage
)
: Passenger(id,n,p,e)
{
    baggageAllowance = baggage;
}

double EconomyPassenger::getRefundPercentage()
{
    return 50;
}

void EconomyPassenger::displayDetails()
{
    Passenger::displayDetails();

    cout << "Passenger Type: Economy" << endl;
    cout << "Baggage Allowance: "
         << baggageAllowance
         << " kg" << endl;

    cout << "Refund Percentage: "
         << getRefundPercentage()
         << "%" << endl;
}

BusinessPassenger::BusinessPassenger(
    string id,
    string n,
    string p,
    string e,
    int baggage
)
: Passenger(id,n,p,e)
{
    baggageAllowance = baggage;
}

double BusinessPassenger::getRefundPercentage()
{
    return 75;
}

void BusinessPassenger::displayDetails()
{
    Passenger::displayDetails();

    cout << "Passenger Type: Business" << endl;
    cout << "Baggage Allowance: "
         << baggageAllowance
         << " kg" << endl;

    cout << "Refund Percentage: "
         << getRefundPercentage()
         << "%" << endl;
}

//firstclass


FirstClassPassenger::FirstClassPassenger(
    string id,
    string n,
    string p,
    string e,
    int baggage
)
: Passenger(id,n,p,e)
{
    baggageAllowance = baggage;
}

double FirstClassPassenger::getRefundPercentage()
{
    return 90;
}

void FirstClassPassenger::displayDetails()
{
    Passenger::displayDetails();

    cout << "Passenger Type: First Class" << endl;
    cout << "Baggage Allowance: "
         << baggageAllowance
         << " kg" << endl;

    cout << "Refund Percentage: "
         << getRefundPercentage()
         << "%" << endl;
}


