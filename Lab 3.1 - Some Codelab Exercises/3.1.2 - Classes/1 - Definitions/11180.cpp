/**
 * Write a full class definition for a class `Accumulator`, and
 * containing the following members:
 * - A data member named `sum` of type integer
 * - A constructor that accepts no parameters. The constructor
 * intializes the data member `sum` to 0
 * - A function named `getSum` that accepts no parameters and
 * returns an integer, `getSum` returns the value of `sum`
 * - A function name `add` that accepts an integer parameter and
 * returns no value, `add` increases the value of `sum` by the
 * value of the parameter
 */

class Accumulator
{
	private:
		int sum;
	public:
		Accumulator() { sum = 0; }
		int getSum() { return sum; }
		void add(int n) { sum += n; }
};