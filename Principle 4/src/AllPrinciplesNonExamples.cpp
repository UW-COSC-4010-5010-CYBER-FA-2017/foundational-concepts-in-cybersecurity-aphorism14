// Russell Todd
// Cybersecurity
// Principle 1 (Domain Separation)		Non Example  a
// Principle 2 (Process Isolation)		Non Example  a
// Principle 3 (Resource Encapsulation) Non Example  a
// Principle 4 (Least Privilege)		Non Example  a
// Principle 5 (Modularity)				Non Example  a
// Principle 6 (Layering)				Non Example  a
// Principle 7 (Abstraction)			Non Example  a
// Principle 8 (Data Hiding)			Non Example  a
// Principle 9 (Simplicity)				Non Example  a
// Principle 10 (Minimization)			Non Example  a

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
using namespace std;

// Main. Absolutely everything is in here. Good luck reading this non-example mess. As this is supposed to be terrible code, all commenting has been removed.
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

				cout << "\nNice try, Wheatley." << endl;

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
						cout << "\nI tried to sue the airport for misplacing my luggage..." << endl;
						cout << ".\n.\n.\n" << endl;
						cout << "I lost my case....\n" << endl;

						shameIterator += 1;
						cout << "My shame level is: " << shameIterator << endl << endl;
						break;
					}
					case 2:
					{
						cout << "\nR.I.P. Mr. Boiling Water...." << endl;
						cout << ".\n.\n.\n" << endl;
						cout << "You will be mist....\n" << endl;

						shameIterator += 1;
						cout << "My shame level is: " << shameIterator << endl << endl;
						break;
					}
					case 3:
					{
						cout << "\nWhat is the best thing about living in Switzerland?" << endl;
						cout << ".\n.\n.\n" << endl;
						cout << "Well the flag is a big plus....\n" << endl;

						shameIterator += 1;
						cout << "My shame level is: " << shameIterator << endl << endl;
						break;
					}
					case 4:
					{
						cout << "\nWhat's the difference between a hippo and a Zippo?" << endl;
						cout << ".\n.\n.\n" << endl;
						cout << "One is really heavy and the other is a little lighter....\n" << endl;

						shameIterator += 1;
						cout << "My shame level is: " << shameIterator << endl << endl;
						break;
					}
					}
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
		}
	}
}
