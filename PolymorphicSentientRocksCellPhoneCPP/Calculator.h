#pragma once
#include "Service.h"
class Calculator : public Service
{

public:
	Calculator();
	double Add(double, double);
	double Sub(double, double);
	double Mult(double, double);
	double Div(double, double);
	char* ServiceName();
	char* Can();
};


