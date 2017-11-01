Modularity 
Modular programming is a software design technique that emphasizes separating the functionality of a program into independent modules.


In the exemplar, almost every task is made into its own function. You would be able to freely use that function wherever you wanted. 

```
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
```

In the non example, we've done away with all those modular functions. Now, everything is in main. Not modular at all.

```
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

				
				cout << "\nAdmins may access both Admin info and User info, while Users may only access User info.\nPlease enter an information request command: " << endl;
				cout << "Options are: 'AdminInfo' or 'UserInfo'" << endl;

				string input;
				cin >> input;

				
				if (input == "AdminInfo")
				{
					cout << "\nInformation available to you: \n" << AdminInfo << endl;
				}
				else if (input == "UserInfo")
				{
					cout << "\nInformation available to you: \n" << userInfo << endl;
				}
				else
				{
					cout << "Invalid entry. Please try again." << endl;
				}
```

Relevant Image:

Nothing is more modular than legos.

![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-aphorism14/blob/master/Principle%205/lego_photo_via_shutterstock.jpg)
