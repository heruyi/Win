#include "pch.h"
#include "GrsBaseInfoImpl.h"

void GrsBaseInfoImpl::setRegCountry(char *_regCountry) {
	regCountry = string(_regCountry);
}

void GrsBaseInfoImpl::setSerCountry(string &_serCountry) {
	serCountry = string(_serCountry);
}

string  GrsBaseInfoImpl::GetSerCountry() {
	return serCountry;
}