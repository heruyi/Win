#pragma once
#include"GrsBaseInfo.h"
#include<string>
using std::string;

class GrsBaseInfoImpl : GrsBaseInfo
{

public:
	GrsBaseInfoImpl() {};
	~GrsBaseInfoImpl() {};
	void setSerCountry(string &_serCountry);
	void setRegCountry(char* _regCountry);
	string GetSerCountry();

private:
	string regCountry;
	string serCountry;

};

