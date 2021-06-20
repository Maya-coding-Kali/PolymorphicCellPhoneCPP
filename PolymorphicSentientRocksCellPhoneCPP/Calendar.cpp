#include "pch.h"
#include "Service.h"
#include "Calendar.h"
#include <iostream>
#include <string> 
using namespace std;
Calendar::Calendar()
{
	Date = (char*) "";
	day = 0;
	month = 0;
	year = 0;
}

char* Calendar::NewEvent()
{
	return (char*)"Your Event has been added!";
}

char* Calendar::ModifyEvent()
{
	return (char*)"Your Event has been Changed!";
}
char* Calendar::DeleteEvent()
{
	return (char*)"Your Event has been Deleted!";
}


void Calendar::SetDate(int Vyear, int Vmonth, int Vday)
{
	if (Checkyear(Vyear))
	{
		year = Vyear;
	}
	else
	{
		year = 0;
	}
	if (Checkmonth(Vmonth))
	{
		month = Vmonth;
	}
	else
	{
		month = 0;
	}
	if (Checkday(Vday))
	{
		day = Vday;
	}
	else
	{
		day = 0;
	}
}
bool Calendar::Checkyear(int Vyear)
{
	if (Vyear < 2020 || Vyear > 2100)
	{
		return false;
	}
	return true;
}
bool Calendar::Checkmonth(int Vmonth)
{
	if (Vmonth < 1 || Vmonth > 12)
	{
		return false;
	}
	return true;
}
bool Calendar::Checkday(int Vday)
{
	if (month == 2)
	{
		if ((year % 400 == 0 || year % 100 != 0) && (year % 4 == 0))
		{
			if (Vday < 1 || Vday >29)
			{
				return false;
			}
		}
		else
		{
			if (Vday < 1 || Vday >28)
			{
				return false;
			}
		}
	}
	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		&& (Vday < 1 || Vday >31))
	{
		return false;
	}
	if ((month == 4 || month == 6 || month == 9 || month == 11)
		&& (Vday < 1 || Vday >30))
	{
		return false;
	}

	return true;
}

int Calendar::GetDate()
{
	auto s1 = std::to_string(year);
	auto s2 = std::to_string(month);
	auto s3 = std::to_string(day);
	string Date = s1 + s2 + s3;
	
	return year;
}
char* Calendar::ServiceName()
{
	return (char*)"Calendar";
}
char* Calendar::Can()
{
	return (char*)"Adds, Modifies and Deletes Calendar events";
}