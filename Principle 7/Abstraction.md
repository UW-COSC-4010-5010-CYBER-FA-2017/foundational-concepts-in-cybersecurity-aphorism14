Abstraction 

The goal in abstraction, from a computer security viewpoint is to remove any clutter that can distract and possibly be used in an incorrect way. Abstraction only provides the essential details of what is being modeled and provide the minimum information necessary to accomplish the task.

In the exemplar, the operator only has the minimum information needed for their credentials and only the controls they need are accessable. They don't need to know how the whole program works, they just respond to the program's query.

They can only view.
```
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
```

In the non example, the operator has way more information than they need for their job and can use any control there is. Nothing has been abstracted away.

They can access either piece of information by just asking for it.
```
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

All the other buttons have been abstracted away. Have fun with your one button.

![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-aphorism14/blob/master/Principle%207/one-button-nes.jpg)
