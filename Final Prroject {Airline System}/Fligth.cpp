#include "Fligth.h"
#include <iostream>

using namespace std;

Flight::Flight(string fn, string org, string dest)
{
    flightNumber = fn;
    origin = org;
    destination = dest;
}
void Flight::displayDetails()
{
    cout << "Flight Number: " << flightNumber << endl;
    cout << "Origin: " << origin << endl;
    cout << "Destination: " << destination << endl;
    cout << "Base Fare: " << calculateBaseFare()<<endl;
}
DomesticFlight::DomesticFlight(string fn, string org, string dest, double tax): Flight(fn, org, dest)
{
    domesticTax = tax;
}
double DomesticFlight::calculateBaseFare()
{
    return 5000 + domesticTax;
}
void DomesticFlight::displayDetails()
{
    Flight::displayDetails();

    cout << "Domestic Tax: "
         << domesticTax
         << endl;
}


InternationalFlight::InternationalFlight(string fn, string org, string dest, bool visa, double tax, string country): Flight(fn, org, dest)
{
    visaRequired = visa;
    internationalTax = tax;
    destinationCountry=country;
	}

double InternationalFlight::calculateBaseFare()
{
    return 15000 + internationalTax;
}

void InternationalFlight::displayDetails()
{
    Flight::displayDetails();

    cout << "Visa Required: ";

    if(visaRequired)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "International Tax: " << internationalTax << endl;
    cout << "Destination Country: "  << destinationCountry <<endl;
}
// CharterFlight Constructor
CharterFlight::CharterFlight(string fn, string org, string dest, string holder, double fee): Flight(fn, org, dest)
{
    contractHolder = holder;
    charterFee = fee;
}

// CharterFlight Fare Calculation
double CharterFlight::calculateBaseFare()
{
    return 30000 + charterFee;
}
void CharterFlight::displayDetails()
{
    Flight::displayDetails();

    cout << "Contract Holder: " << contractHolder << endl;

    cout << "Charter Fee: " << charterFee << endl;
}


ostream& operator<<(ostream& out, Flight& f)
{
    f.displayDetails();
    return out;
}

