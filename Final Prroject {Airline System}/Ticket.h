#ifndef TICKET_H
#define TICKET_H


#include <iostream>
#include <string>

using namespace std;

class Ticket
{
	private:
		string ticketID;
		string seatNumber;

		double farePaid;
		bool active;

		Flight* flight;
		Passenger* passenger;
	public:
		Ticket(string id, string num, double FP, bool Act, Flight* f, Passenger* p);
		
		 bool operator==(const Ticket& other);
		
		friend ostream& operator<<(ostream& out,   Ticket& t);
		void displayDetails();
		
};
#endif
