/**
 * Write the interface (.h file) of a class `Accumulator` containing:
 * - A data member named `sum` of type integer
 * - A constructor accepting no parameters
 * - A function named `getSum` that accepts no parameters and
 * returns an integer
 * - A function named `add` that accepts an integer parameter and
 * returns no value
 */

class Accumulator
{
	private:
		int sum;
	public:
		Accumulator();
		int getSum();
		void add(int n);
};