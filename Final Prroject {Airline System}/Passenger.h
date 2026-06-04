#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>
using namespace std;

class Passenger
{
private:
    string passengerID;
    string name;
    string phone;
    string email;

public:
    Passenger(string id, string n, string p, string e);

    virtual double getRefundPercentage() = 0;

    virtual void displayDetails();

    virtual ~Passenger() {}
};

class EconomyPassenger : public Passenger
{
private:
    int baggageAllowance;

public:
    EconomyPassenger(string id, string n, string p, string e, int baggage);

    double getRefundPercentage() override;

    void displayDetails() override;
};

class BusinessPassenger : public Passenger
{
private:
    int baggageAllowance;

public:
    BusinessPassenger(string id, string n, string p, string e, int baggage);

    double getRefundPercentage() override;

    void displayDetails() override;
};

class FirstClassPassenger : public Passenger
{
private:
    int baggageAllowance;

public:
    FirstClassPassenger(string id, string n, string p, string e, int baggage);

    double getRefundPercentage() override;

    void displayDetails() override;
};

#endif
