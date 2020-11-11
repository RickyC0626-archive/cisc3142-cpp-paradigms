/**
 * Write a full class deifinition for a class named `GasTank`, and
 * containing the following members:
 * - A data member named `amount` of type double
 * - A constructor that accepts no parameters. The constructor
 * initializes the data member `amount` to 0
 * - A function named `addGas` that accepts a parameter of type
 * double and returns no value. The value of the `amount` instance
 * variable is increased by the value of the parameter.
 * - A function named `useGas` that accepts a parameter of type
 * double and returns no value. The value of the `amount` data member
 * is decreased by the value of the parameter.
 * - A function named `getGasLevel` that accepts no parameters.
 * `getGasLevel` returns the value of the `amount` data member.
 */

class GasTank
{
	private:
		double amount;
	public:
		GasTank() { amount = 0; }
		void addGas(double d) { amount += d; }
		void useGas(double d) { amount -= d; }
		double getGasLevel() { return amount; }
};