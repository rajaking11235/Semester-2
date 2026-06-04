#include "Airline.h"
#include "Exceptions.h"
#include <iostream>
#include <algorithm>

using namespace std;

void Airline::addFlight(Flight* f)
{
    flights.push_back(f);
}

void Airline::addPassenger(Passenger* p)
{
    passengers.push_back(p);
}

void Airline::addTicket(Ticket* t)
{
    tickets.push_back(t);
}

void Airline::bookTicket(Ticket* t)
{
	  if(tickets.size() >= 3)
    {
        throw FlightFullException();
    }
    tickets.push_back(t);

    cout
    << "Booking Successful!"
    << endl;
}

void Airline::displayFlights()
{
    for(int i = 0; i < flights.size(); i++)
    {
    	cout << "\n---------------------\n";
    	
        flights[i]->displayDetails();
    }
}

void Airline::displayPassengers()
{
    for(int i = 0; i < passengers.size(); i++)
    {
    	cout << "\n---------------------\n";
    	
        passengers[i]->displayDetails();
    }
}

void Airline::displayTickets()
{
	cout << "\n---------------------\n";
    if(tickets.size() > 0)
    {
        cout << "Ticket Found" << endl;
    }

    for(int i = 0; i < tickets.size(); i++)
    {
    \
        tickets[i]->displayDetails();
    }
}


