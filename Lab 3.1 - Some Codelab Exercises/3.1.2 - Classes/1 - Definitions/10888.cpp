/**
 * Write the interface (.h file) of a class `Averager` containing:
 * - A data member named `sum` of type integer
 * - A data member named `count` of type integer
 * - A constructor accepting no parameters
 * - A function named `getSum` that accepts no parameters and
 * returns an integer
 * - A function named `add` that accepts an integer parameter and
 * returns no value
 * - A function named `getCount` that accepts no parameters and
 * returns an integer
 * - A function named `getAverage` that accepts no parameters and
 * returns a double
 */

class Averager
{
	private:
		int sum;
		int count;
	public:
		Averager();
		int getSum();
		void add(int n);
		int getCount();
		double getAverage();
};