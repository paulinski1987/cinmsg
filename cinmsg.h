#ifndef CINMSG_H_INCLUDED
#define CINMSG_H_INCLUDED
#include <iostream>
// Function headers for std::cin + prompt function. See cinmsg.cpp
// for full definitions and usage.
// Paul Banks Dec 12 2020.

int intmsg(std::string x, int y);
int intmsg(std::string x);

std::string strmsg(std::string x, int y);
std::string strmsg(std::string x);

float fltmsg(std::string x, int y);
float fltmsg(std::string x);

double dblmsg(std::string x, int y);
double dblmsg(std::string x);

long lngmsg(std::string x, int y);
long lngmsg(std::string x);

int intmsg(std::string x, int y)
{
    int z;
    std::cout << x;
	if (y == 1)
		std::cout << std::endl;
    std::cin >> z;

    return z;
}

int intmsg(std::string x)
{
    int z;
    std::cout << x;
    std::cin >> z;

    return z;
}

std::string strmsg(std::string x, int y)
{
    std::string z;
    std::cout << x;
	if (y == 1)
		std::cout << std::endl;
    std::getline(std::cin, z);

    return z;
}
std::string strmsg(std::string x)
{
    std::string z;
    std::cout << x;
    std::getline(std::cin, z);

    return z;
}

float fltmsg(std::string x, int y)
{
    float z;
    std::cout << x;
	if (y == 1)
		std::cout << std::endl;
    std::cin >> z;

    return z;
}
float fltmsg(std::string x)
{
    float z;
    std::cout << x;
    std::cin >> z;

    return z;
}

double dblmsg(std::string x, int y)
{
    double z;
    std::cout << x;
	if (y == 1)
		std::cout << std::endl;
    std::cin >> z;

    return z;
}
double dblmsg(std::string x)
{
    double z;
    std::cout << x;
    std::cin >> z;

    return z;
}

long lngmsg(std::string x, int y)
{
    long z;
    std::cout << x;
	if (y == 1)
		std::cout << std::endl;
    std::cin >> z;

    return z;
}
long lngmsg(std::string x)
{
    long z;
    std::cout << x;
    std::cin >> z;

    return z;
}


#endif // CINMSG_H_INCLUDED
