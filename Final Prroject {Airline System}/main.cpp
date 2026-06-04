#include "Fligth.h"
#include "Passenger.h"
#include "Ticket.h"
#include "Airline.h"
#include <exception>
#include <iostream>
int main()
{
	cout<<"----FLIGHTS----\n"<<endl;
	
	cout<<"----DOMESTIC FLIGHTS----\n"<<endl;
    
	DomesticFlight d1("PK101", "Lahore", "Karachi", 300.90);
    d1.displayDetails();
	
	cout<<"\n"<<endl;
	cout<<"----INTERNATIONAL FLIGHTS----\n"<<endl;
    
	InternationalFlight i1("PK101", "Pakistan", "Tokoyo", true, 1290.00, "Japan");
    i1.displayDetails();
    
    cout<<"\n"<<endl;
	cout<<"----CHARTER FLIGHTS----\n"<<endl;
	
	CharterFlight c1("PK101", "Lahore", "Karachi", "national", 12300.90);
    c1.displayDetails();
    
    cout<<"\n"<<endl;
    cout << "----PASSENGERS---- \n" << endl;
    
	
	cout << "----ECONOMY PASSENGERS----\n " << endl;
 	EconomyPassenger p1( "E001",   "Ali",   "03001234567",   "ali@gmail.com",   20);
	p1.displayDetails();
    
    cout<<"\n"<<endl;
	cout << "----BUSSINESS CLASS PASSENGERS----\n " << endl;
    BusinessPassenger B1( "B001",   "USMAN",   "0390179273",   "usman@gmail.com",   60);
	B1.displayDetails();
	
	cout<<"\n"<<endl;
	cout << "----FIRST CLASS PASSENGERS----\n " << endl;
	FirstClassPassenger F1( "F001",   "Khan",   "03001234567",   "khan@gmail.com",   90);
	F1.displayDetails();
	
	cout<<"\n"<<endl;
    cout << "----TICKETS----\n " << endl;
	
	Ticket t1("1234egbgf", "139A",  1200.0,   true,  &d1,   &p1);
    t1.displayDetails();
    
    cout<<"\n"<<endl;
	cout<<"----AIRLINE STORED DATA----\n"<<endl;  

	Airline airline;  

	cout << "\nAIRLINE FLIGHTS\n";

	airline.addFlight(&d1);
	airline.addFlight(&i1);
	airline.addFlight(&c1);
	
	airline.displayFlights();

cout << "\nAIRLINE PASSENGERS\n";

	airline.addPassenger(&p1);
	airline.addPassenger(&B1);
	airline.addPassenger(&F1);
	
	airline.displayPassengers();

cout << "\nAIRLINE TICKETS\n";

	airline.bookTicket(&t1);
	airline.bookTicket(&t1);
	
	try
	{
    	airline.bookTicket(&t1);
	}
	catch(const exception& e)
	{
	    cout << e.what() << endl;
	}

	airline.displayTickets();
    return 0;
}
