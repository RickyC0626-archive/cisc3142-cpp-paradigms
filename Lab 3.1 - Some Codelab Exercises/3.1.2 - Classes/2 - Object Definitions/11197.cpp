/**
 * Objects of the `BankAccount` class require a name (string) and a
 * social security number (string) be specified (in that order) upon
 * creation.
 * 
 * Declare two strings corresponding to a name and a social security
 * number and read values into them from standard input (in that order).
 * 
 * Use these values to define an object of type `BankAccount` named `newAccount`.
 */

std::string name, ss;
cin >> name >> ss;

BankAccount newAccount(name, ss);