Minimization 

The goal of minimization is to simplify and decrease the number of ways that software can be exploited. This can include turning off ports that are not needed,reduce the amount of code running, use the concept of least privilege and turn off unneeded features.

In the exemplar, we utilize the concept of least privilege to showcase minimization. We also have more strict control over the flow of the program and what surfaces the operator has access to.

```

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
```

In the non example, nothing has been minimized. We've done away with least privilege and all surfaces are always available.

```
cout << "\nAdmins may access both Admin info and User info, while Users may only access User info.\n
Please enter an information request command: " << endl;
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

![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-aphorism14/blob/master/Principle%2010/maxresdefault.jpg)
