#ifndef AIRLINE_H
#define AIRLINE_H

#include <vector>
#include "Fligth.h"
#include "Passenger.h"
#include "Ticket.h"
#include "Exceptions.h"

using namespace std;

class Airline
{
private:
    vector<Flight*> flights;
    vector<Passenger*> passengers;
    vector<Ticket*> tickets;

public:
    void addFlight(Flight* f);
    void addPassenger(Passenger* p);
    void addTicket(Ticket* t);

    void displayFlights();
    void displayPassengers();
    void bookTicket(Ticket* t);
    
    void displayTickets();

};

#endif
