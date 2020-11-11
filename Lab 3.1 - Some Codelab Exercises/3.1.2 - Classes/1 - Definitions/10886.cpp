/**
 * Write the interface (.h file) of a class `Accumulator` containing:
 * - A data member named `sum` of type integer
 * - A constructor accepting an integer parameter
 * - A function named `getSum` that accepts no parameters and
 * returns an integer
 * - A function name `add` that accepts an integer parameter and
 * returns no value
 */

class Accumulator
{
	private:
		int sum;
	public:
		Accumulator(int n);
		int getSum();
		void add(int n);
};