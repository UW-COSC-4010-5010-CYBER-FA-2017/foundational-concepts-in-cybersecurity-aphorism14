Data Hiding 

Data hiding is the technique that does not allow certain aspects of an object to be observed or accessed. Data and information hiding keeps the programmer from having complete access to data structures. It allows access to only what is necessary.

In the exemplar we use classes to hide our data. The rest of the program is unaware of private class variables and data structures. 

```
class Authority
{
public:
	//Public Variables
	string userInfo = "cake";

	//Public Methods

	// "Logs user in". Basically sets the operator's access privilege.
	void login()
	{
		// Ask for Admin login or User login.
		string status;
		cout << "\nPlease enter your user status: " << endl;
		cout << "Options are: 'Admin' or 'User'" << endl;

		// Accept input.
		cin >> status;
		cout << "\nYou have entered: " << status << endl;

		if (status == "Admin")
		{
			cout << "\nWelcome, GLaDOS.\n" << endl;
			adminPriv = true;
		}
		else if (status == "User")
		{
			cout << "\nWelcome, Chell.\n" << endl;
		}
		else
		{
			cout << "Invalid entry. Please exit and try again." << endl;
		}
	}

	// "Logs user out". Resets the operator's access privilege.
	void logout()
	{
		adminPriv = false;
	}

	// Prints out some information the Admin & User setting has access to.
	void userAccess(string input)
	{
		cout << "\nInformation available to you: \n" << userInfo << endl;
	}

	// Prints out some information that only the Admin setting has access to.
	void adminAccess(string input)
	{
		cout << "\nInformation available to you: \n" << AdminInfo << endl;
	}

	// Returns whether the operator has Admin credentials or not.
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
		else
		{
			;
		}
	}

	// Adds new information to this hyper-simplified databank.
	void setNewInfo(string input)
	{
		newInfo.push_back(input);
	};

	// Prints out the contents of our "databank".
	void printInfo()
	{
		for (vector<string>::const_iterator i = newInfo.begin(); i != newInfo.end(); ++i)
		{
			cout << *i << ", ";
		}
	}

	void returnSecret()
	{
		cout << "\nAccess Granted." << endl;
		cout << "\n" << superSecretBlackmail << "\n" << endl;
	}

// Private variables & storage
private:
	bool adminPriv = false;
	string AdminInfo = "cake is a lie";
	string superSecretBlackmail = "GLaDOS is Caroline.";

	vector <string> newInfo;
};
```

In the non example there are no classes to hide data in so everything is in main and can be seen.
```
		switch (choice)
		{
		case 1:
		{
			while (true)
			{
				string userInfo = "cake";
				bool adminPriv = false;
				string AdminInfo = "cake is a lie";
				string superSecretBlackmail = "GLaDOS is Caroline.";

				vector <string> newInfo;

				string status;
				cout << "\nPlease enter your user status: " << endl;
				cout << "Options are: 'Admin' or 'User'" << endl;

				
				cin >> status;
				cout << "\nYou have entered: " << status << endl;

```

Relevant Image:

Only what is already in the safe or knows the method to open the safe knows what is in safe.

![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-aphorism14/blob/master/Principle%208/download.jpg)
