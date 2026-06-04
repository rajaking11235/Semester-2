#include "Ticket.h"
#include <iostream>

using namespace std;

Ticket::Ticket(string id,  string num,   double FP,  bool Act,  Flight* f,  Passenger* p)
{
    ticketID = id;
    seatNumber = num;
    farePaid = FP;
    active = Act;

    flight = f;
    passenger = p;
}

bool Ticket::operator==(const Ticket& other)
{
    return ticketID == other.ticketID;
}


ostream& operator<<(ostream& out,
                    Ticket& t)
{
    t.displayDetails();

    return out;
}
void Ticket::displayDetails()
{
    cout << "Ticket ID: " << ticketID << endl;
    cout << "Seat Number: " << seatNumber << endl;
    cout << "Fare Paid: " << farePaid << endl;
	cout << "Active: " << active << endl;
}
