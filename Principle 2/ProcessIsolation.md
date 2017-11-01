Process Isolation 
Means to keep processes, which are again a loose concept, isolated from each other. Unrelated systems shouldn't affect each other.

In the exemplar the joke telling part is separated in several ways from the Admin/User part. The Pun Generator and Authority classes meanage each
function, keeping their code and variables separate. 

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
class PunGenerator
{
public:
	void tellBadPun()
	{
		// Seed random
		srand(time(NULL));
		int jokeNum = rand() % 5;
		// Shamebot's pun tolerance is only so high.
		if (shameIterator == 7)
		{
			cout << "\nSorry, I am too ashamed to continue. Please go do something else.\n" << endl;
			return;
		}
		// Choose randomly between 5 jokes.
		switch (jokeNum)
		{
		case 0:
		{
			cout << "\nI lost my job at the bank on my very first day." << endl;
			cout << "A woman asked me to check her balance, so..." << endl;
			cout << ".\n.\n.\n" << endl;
			cout << "I pushed her over....\n" << endl;
			shameIterator +=1;
			cout << "My shame level is: " << shameIterator << endl << endl;
			break;
		}
		case 1:
		{
			cout << "\nI tried to sue the airport for misplacing my luggage..." << endl;
			cout << ".\n.\n.\n" << endl;
			cout << "I lost my case....\n" << endl;
			shameIterator +=1;
			cout << "My shame level is: " << shameIterator << endl << endl;
			break;
		}
		case 2:
		{
			cout << "\nR.I.P. Mr. Boiling Water...." << endl;
			cout << ".\n.\n.\n" << endl;
			cout << "You will be mist....\n" << endl;
			shameIterator +=1;
			cout << "My shame level is: " << shameIterator << endl << endl;
			break;
		}
		case 3:
		{
			cout << "\nWhat is the best thing about living in Switzerland?" << endl;
			cout << ".\n.\n.\n" << endl;
			cout << "Well the flag is a big plus....\n" << endl;
			shameIterator +=1;
			cout << "My shame level is: " << shameIterator << endl << endl;
			break;
		}
		case 4:
		{
			cout << "\nWhat's the difference between a hippo and a Zippo?" << endl;
			cout << ".\n.\n.\n" << endl;
			cout << "One is really heavy and the other is a little lighter....\n" << endl;
			shameIterator +=1;
			cout << "My shame level is: " << shameIterator << endl << endl;
			break;
		}
		}
	}

private:
	int shameIterator = 0;
	bool ashamed = false;
};

```

In the non example, there are no divisions between the code and resources of the joke teller and the Admin/User part. 
Their code, like variables, are now free to interact with each other. With this small program they currently don't (also don't so that 
everything will compile and be tested), but in much larger systems it would become more difficult to keep these separate systems from
interacting because they are both in the same chunk of code in main().

I would include a code snippet, but it would be massive. I'm sure you'll see what I mean when view the full code.


Related Image:

![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-aphorism14/blob/master/Principle%202/Docker-Teardown-05-(Process-Isolation).png)
