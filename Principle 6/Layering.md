Layering 
Layering in computer security implements multiple layers of computer security, each one having to be conquered before moving to the next.

In the exemplar, in order to access the super secret information, you have to have admin info and you have to then use that info to figure out what the password is to access the super secret info. The security is layered.

```
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
```

In the non example, we've done away with that those layers of security and any can access the super secret info.

```
				cout << "\nTo access the super secret information, you need no additional credentials. Welcome to Equifax." << endl;
				cout << superSecretBlackmail << endl;

```

Relevant Image:

Layers of security. Layers of city walls. 

![](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-aphorism14/blob/master/Principle%206/1444433152-1dbb8c934ed43875d918ac1a1fdd1328.png)
