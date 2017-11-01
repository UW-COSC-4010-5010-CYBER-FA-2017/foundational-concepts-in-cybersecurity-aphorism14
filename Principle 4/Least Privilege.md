Least Privilege 
The principle of least privilege says to allow the minimum number of privileges necessary to accomplish the task.

In the exemplar, Users only have the privileges necessary to access what they need. They can't use admin functionality because they don't need it.

```
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
```


In the non example, users are free to use admin functions if they want. They have privileges greater than what they need.

```
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
```

Relevant Image:

If you are not authorized, you don't need to be in here and we'll keep you out.

![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-aphorism14/blob/master/Principle%204/authorized-personnel-only-blog.jpg)
