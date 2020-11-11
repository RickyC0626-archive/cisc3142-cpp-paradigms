/**
 * Assume the existence of a `BankAccount` class.
 * 
 * Define a derived class, `SavingsAccount` that contains two instance
 * variables: the first a double, named `interestRate`, and the second
 * an integer named `interestType`. The value of the `interestRate` variable
 * can be `1` for simple interest and `2` for compound interest. There is also
 * a constructor that accepts two parameters: a double that is used to
 * initialize the `interestRate` variable, and a string that you may assume
 * will contain either "Simple", or "Compound", and which should be used to
 * initialize the `interestType` variable appropriately. There should also be
 * a pair of functions `getInterestRate` and `getInterestType` that return the
 * values of the corresponding data members (as double and int respectively).
 */

class SavingsAccount : BankAccount
{
	private:
		double interestRate;
		int interestType;
	public:
		SavingsAccount(double, string);
		double getInterestRate() { return interestRate; }
		int getInterestType() { return interestType; }
};

SavingsAccount::SavingsAccount(double ir, string type)
{
	interestRate = ir;
			
	if(type == "Simple") interestType = 1;
	else if(type == "Compound") interestType = 2;
}