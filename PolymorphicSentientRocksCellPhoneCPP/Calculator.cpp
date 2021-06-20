#include "pch.h"
#include "Service.h"
#include "Calculator.h"
#include <iostream>

Calculator::Calculator()
{

}
double Calculator::Add(double x, double y)
{
	
	return x + y;

}
double Calculator::Sub(double x, double y)
{

	return x - y;

}
double Calculator::Mult(double x, double y)
{

	return x * y;

}
double Calculator::Div(double x, double y)
{

		return x / y;

}
char* Calculator::ServiceName()
{
	return (char*)"Calculator";
}
char* Calculator::Can()
{
	return (char*)"Add, Subtruct, Multiply, Divide ";
}