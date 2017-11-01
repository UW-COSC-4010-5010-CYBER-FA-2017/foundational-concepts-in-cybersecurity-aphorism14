Principle 1 is Domain Separation

Means to keep domains separated. What a domain is can be a fairly loose concept. An example would be an Admin area that is separate from the User area.

In the exemplar, there are areas and information that only Admins can access that are restricted to Users.

Ex:

	if (input == "AdminInfo" && program.checkPriv())
	{
		program.adminAccess(input);
	}

In the non-example, although the statements impy there is a division between Admins and Users, all the checks have been removed. That means that there is no longer a division between the Admin section and Users.

Ex:

	if (input == "AdminInfo")
	{
		cout << "\nInformation available to you: \n" << AdminInfo << endl;
	}

Related Gif:

![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-aphorism14/blob/master/Principle%201/Principle1finished.gif)
