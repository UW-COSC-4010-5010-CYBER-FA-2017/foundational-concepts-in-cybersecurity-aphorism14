Resource Encapsulation 

Encapsulation is an object oriented concept where all data and functions required to use the resource are packaged into a single self-contained component. The goal is to only allow access or manipulation of the resource in the way the designer intended.

In the exemplar, we have a class for the joke part and a class for the Admin/User part. Each class contains a set of variables. Certain variables of class Authority can only be changed using class methods.

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

For the non example, there are no classes. All of the resources are dumped into main and are accessable by a lot more things.

```
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

Keep your resources separated like food in a bento box.

![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-aphorism14/blob/master/Principle%203/shokado-bento.jpg)
