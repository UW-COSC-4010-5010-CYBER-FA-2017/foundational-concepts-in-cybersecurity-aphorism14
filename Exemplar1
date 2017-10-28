// Russell Todd
// Cybersecurity
// Principle 1 Exemplar
// Domain Separation
#include <iostream>
#include <string>
using namespace std;

class Authority
{


public:
	string userInfo = "cake";

	void login(string status)
	{
		if (status == "Admin")
		{
			cout << "Welcome, Glados." << endl;
			adminPriv = true;
		}
		else if (status == "User")
		{
			cout << "Welcome, Chell." << endl;
		}
		else
		{
			cout << "Invalid entry. Please try again." << endl;
		}
	}

	void userAccess(string input)
	{
		cout << "Information available to you: \n" << userInfo << endl;
	}

	void adminAccess(string input)
	{
		cout << "Information available to you: \n" << AdminInfo << endl;
	}

	bool checkPriv()
	{
		if (adminPriv == false)
		{
			return false;
		}
		else if (adminPriv == true)
		{
			return true;
		}
	}

private:
	bool adminPriv = false;
	string AdminInfo = "cake is a lie";
};

int main()
{
	Authority program;

	string status;
	cout << "Please enter your status: " << endl;
	cout << "Options are: 'Admin' or 'User'" << endl;

	cin >> status;

	cout << "You have entered: " << status << endl;

	program.login(status);

	cout << "Please enter a command: " << endl;
	cout << "Options are: 'AdminInfo' or 'UserInfo'" << endl;

	string input;
	cin >> input;

	if (input == "AdminInfo" && program.checkPriv())
	{
		program.adminAccess(input);
	}
	else if (input == "UserInfo")
	{
		program.userAccess(input);
	}
	else
	{
		cout << "Invalid entry. Please try again." << endl;
	}
}
