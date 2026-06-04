#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <exception>

class FlightFullException : public std::exception
{
public:

    const char* what() const throw()
    {
        return "Flight is full!";
    }
};

class InvalidCancellationException :
public std::exception
{
public:

    const char* what() const throw()
    {
        return "Invalid cancellation!";
    }
};

#endif
