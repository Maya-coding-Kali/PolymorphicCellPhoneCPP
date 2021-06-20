#pragma once
#include "Service.h"
class Calendar : public Service
{
private:
	char* Date;
	int day;
	int month;
	int year;
	bool Checkyear(int);
	bool Checkmonth(int);
	bool Checkday(int);
public:
	Calendar();

	char* NewEvent();
	char* ModifyEvent();
	char* DeleteEvent();
	void SetDate(int, int, int);
	int GetDate();
	char* ServiceName();
	char* Can();
};


