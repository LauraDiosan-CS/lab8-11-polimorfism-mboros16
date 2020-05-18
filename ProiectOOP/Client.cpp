#include "Client.h"


Client::Client()
{
	this->username = "";
	this->password = "";
}

Client::Client(string u, string p)
{
	this->username = u;
	this->password = p;
}
Client::Client(const Client & c)
{
	this->password = c.password;
	this->username = c.username;
}Client & Client::operator=(const Client &c)
{
	if (this != &c) {
		this->setUsername(c.username);
		this->setPassword(c.password);
	}
	return*this;
}

Client::~Client()
{
	this->username = "";
	this->password = "";
}

void Client::setUsername(string u)
{
	this->username = u;
}

void Client::setPassword(string p)
{
	this->password = p;
}

string Client::getUsername() const
{
	return this->username;
}

string Client::getPassword() const
{
	return this->password;
}

bool Client::operator==(const Client & a)
{
	if (this->password == a.password && this->username == a.username) return true;
	else return false;
}

ostream & operator<<(ostream & os, Client & c)
{
	os << c.username << " " << c.password;
	return os;
}