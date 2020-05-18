#pragma once
#include <string>
#include<vector>
using namespace std;
class Client
{
private:
	string username;
	string password;
public:
	Client();
	Client(string u, string p);
	Client(const Client& c);
	Client& operator=(const Client &c);
	~Client();
	void setUsername(string);
	void setPassword(string);
	string getUsername() const;
	string getPassword() const;
	bool operator==(const Client& a);
	friend istream& operator >>(istream& is, Client& c)
	{
		is >> c.username >> c.password;
		return is;
	}
	friend ostream& operator <<(ostream& os, Client& c);
};