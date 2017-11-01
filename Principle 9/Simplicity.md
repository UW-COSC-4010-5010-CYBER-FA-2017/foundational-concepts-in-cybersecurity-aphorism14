Simplicity 
When designing a product, hardware of software, simplicity should be a goal. All unnecessary complexity has been removed.

In the exemplar, all the code is in a simplified, easy to understand layout with defined functions and commenting.

```
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

In the exemplar, everything is just dumped into main with a bunch of if-else chains and switch statements. Also there are no comments so all together, this code is anything but simplified.

```
int main()
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

				
				if (adminPriv == true | adminPriv == false)
				{
					
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
						newInfo.push_back(newString);
					}
					else if (z == 2)
					{
						for (vector<string>::const_iterator i = newInfo.begin(); i != newInfo.end(); ++i)
						{
							cout << *i << ", ";
						}
					}
					else
					{
						cout << "Invalid Input." << endl;
					}
				}
				else if (adminPriv == false | adminPriv == true)
				{
					cout << "\nAs a user, you may read information previously entered by Admins." << endl;
					cout << "Do you want to view the information? Please enter 'Y' or 'N'" << endl;

					string a;
					cin >> a;
					if (a == "Y" | a == "y")
					{
						for (vector<string>::const_iterator i = newInfo.begin(); i != newInfo.end(); ++i)
						{
							cout << *i << ", ";
						}
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

				cout << "\nTo access the super secret information, you need no additional credentials. Welcome to Equifax." << endl;
				cout << superSecretBlackmail << endl;


			}
		}
		case 2:
		{
			int shameIterator = 0;
			bool ashamed = false;
			
			while (true)
			{
				cout << "\nWould you like to hear a joke?!?!?!?" << endl;
				cout << "Enter 'Yes' or 'NO'" << endl;

				string regret;
				cin >> regret;

				if (regret == "Yes")
				{
					srand(time(NULL));

					int jokeNum = rand() % 5;

					
					if (shameIterator == 7)
					{
						cout << "\nSorry, I am too ashamed to continue. Please go do something else.\n" << endl;
						break;
					}

					
					switch (jokeNum)
					{
					case 0:
					{
						cout << "\nI lost my job at the bank on my very first day." << endl;
						cout << "A woman asked me to check her balance, so..." << endl;
						cout << ".\n.\n.\n" << endl;
						cout << "I pushed her over....\n" << endl;

						shameIterator += 1;
						cout << "My shame level is: " << shameIterator << endl << endl;
						break;
					}
					case 1:
					{
```

Relevant Image:

I'd much rather figure out the top string (code) than the bottom one even if they are basically doing the same thing.

![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-aphorism14/blob/master/Principle%209/532572642.jpg)
