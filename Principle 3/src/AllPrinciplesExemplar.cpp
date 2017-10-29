// Russell Todd
// Cybersecurity
// Principle 1 (Domain Separation)		Exemplar 
// Principle 2 (Process Isolation)		Exemplar
// Principle 3 (Resource Encapsulation) Exemplar
// Principle 4 (Least Privilege)		Exemplar
// Principle 5 (Modularity)				Exemplar
// Principle 6 (Layering)				Exemplar
// Principle 7 (Abstraction)			Exemplar
// Principle 8 (Data Hiding)			Exemplar
// Principle 9 (Simplicity)				Exemplar
// Principle 10 (Minimization)			Exemplar

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
using namespace std;

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

// Asks operator what info they desire to access. Access may be allowed or denied depending on operator privilege status.
void infoRequest(Authority program)
{
	cout << "\nAdmins may access both Admin info and User info, while Users may only access User info.\nPlease enter an information request command: " << endl;
	cout << "Options are: 'AdminInfo' or 'UserInfo'" << endl;

	string input;
	cin >> input;

	// If the operator wants AdminInfo, they must pass the privilege check. Anyone can acquire UserInfo.
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

// Asks operator if they want to read from the "database" or write to it. Only Admins may write, while either Admins or Users can read what has been written.
void dataReadWrite(Authority program)
{
	// Presents different choices depending on whether operator has Admin privileges.
	if (program.checkPriv() == true)
	{
		// Admin can choose to read database or write new info into it.
		cout << "\nAs an admin, you may both enter new information \nand read previously entered information" << endl;
		cout << "To enter new information, enter '1'. To view information, enter '2'." << endl;
		int z;
		cin >> z;
		if (z == 1)
		{
			cout << "You may now enter new information. Limit yourself to a single continous string. \nPlease write your input below: " << endl;
			string newString;
			cin >> newString;
			cout << "You entered: " << newString << endl;
			program.setNewInfo(newString);
		}
		else if (z == 2)
		{
			program.printInfo();
		}
		else
		{
			cout << "Invalid Input." << endl;
		}
	}
	else if (program.checkPriv() == false)
	{
		// User can only choose whether they want to read from database.
		cout << "\nAs a user, you may read information previously entered by Admins." << endl;
		cout << "Do you want to view the information? Please enter 'Y' or 'N'" << endl;

		string a;
		cin >> a;
		if (a == "Y" | a == "y")
		{
			program.printInfo();
		}
		else if (a == "N" | a == "n")
		{
			;
		}
		else
		{
			cout << "Invalid Input." << endl;
		}
	}

}

void superSecret(Authority program)
{
	cout << "\nTo access the super secret information, enter the secondary password." << endl;
	cout << "Hint: Only Admins can view the password. To enter spaces, use '_'." << endl;
	cout << "Please enter the secondary password now: " << endl;

	string secondaryPassword;
	cin >> secondaryPassword;

	if (secondaryPassword == "cake_is_a_lie")
	{
		program.returnSecret();
	}
	else
	{
		cout << "\nNice try, Wheatley." << endl;
	}
}

// Launches the work sim.
void launchWorkSim()
{
	// Instantiate Authority object. Our "program".
	Authority program;

	// Loop for easy iteration and testing both operator settings.
	while (true)
	{
		// Calls function to "log in" operator.
		program.login();

		// Calls function to allow operator to request information.
		infoRequest(program);

		// Calls function to all operator to read or write "data" to a "database" depending on operator credentials.
		dataReadWrite(program);

		// Calls function that allows operator to enter secondary password to access super secret information.
		superSecret(program);

		// Logs operator out.
		program.logout();
	}
}

// Launches Shamebot (aka pun generator)
void launchShamebot()
{
	// Instanstiate ShameBot
	PunGenerator ShameBot;
	// Loops 
	while (true)
	{
		cout << "\nWould you like to hear a joke?!?!?!?" << endl;
		cout << "Enter 'Yes' or 'NO'" << endl;

		string regret;
		cin >> regret;

		if (regret == "Yes")
		{
			ShameBot.tellBadPun();
		}
		else if (regret == "NO")
		{
			cout << "Oh thank goodness." << endl;
			break;
		}
		else
		{
			cout << "Invalid input. If you wish to escape this purgatory, try entering 'NO' next time." << endl;
		}
	}
}

// Asks operater which program they want to launch.
void chooseProgram()
{
	while (true)
	{
		cout << "\n\nEnter '1' to log in as User or Admin on work partition." << endl;
		cout << "Enter '2' to tickle your funny bone." << endl;
		cout << "Please enter '1' or '2' now:" << endl;

		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			launchWorkSim();
		}
		case 2:
		{
			launchShamebot();
		}
		}
	}
}


// Main
int main()
{
	// Choose the program.
	chooseProgram();
}
