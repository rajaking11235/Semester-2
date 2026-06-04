#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <string>

using namespace std;

class Flight
{
private:
    string flightNumber;
    string origin;
    string destination;

public:
    Flight(string fn, string org, string dest);

    virtual double calculateBaseFare() = 0;

    virtual void displayDetails();
    friend ostream& operator<<(ostream& out, Flight& f);
};


class DomesticFlight : public Flight
{
	private:
   		double domesticTax;

	public:
    	DomesticFlight(string fn, string org, string dest, double tax);

    double calculateBaseFare();
	
	void displayDetails() override;
};



class InternationalFlight : public Flight
{
private:
    bool visaRequired;
    double internationalTax;
    string destinationCountry;

public:
    InternationalFlight(string fn, string org, string dest,  bool visa,  double tax, string country);

    double calculateBaseFare();
    
    void displayDetails() override;
};

class CharterFlight : public Flight
{
private:
    string contractHolder;
    double charterFee;

public:
    CharterFlight(string fn, string org, string dest, string holder, double fee);

    double calculateBaseFare();
    
    void displayDetails() override;
};



#endif
