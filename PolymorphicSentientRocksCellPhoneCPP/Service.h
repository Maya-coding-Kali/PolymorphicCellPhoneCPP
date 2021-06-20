#pragma once
class Service
{
protected:
	char* Name;
	char* Provider;
	
public:
	Service();
	char* GetName();
	void SetName(char*);
	virtual char* ServiceName() = 0;
	virtual void SetProvider(char*);
	virtual char* GetProvider();
	virtual bool UseKeyBoard();
	virtual char* Can() = 0;
	virtual void Print();
	
};