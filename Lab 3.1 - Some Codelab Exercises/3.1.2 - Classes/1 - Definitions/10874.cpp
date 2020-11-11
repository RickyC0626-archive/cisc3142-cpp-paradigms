/**
 * Write the interface (.h file) of a class `Counter` containing:
 * - A data member `counter` of type int
 * - A data member named `limit` of type int
 * - A constructor that takes two int arguments
 * - A function called `increment` that accepts no parameters and
 * returns no value
 * - A function called `decrement` that accepts no parameters and
 * returns no value
 * - A function called `getValue` that accepts no parameters and
 * returns an int
 */

class Counter
{
	private:
		int counter;
		int limit;
	public:
		Counter(int a, int b);
		void increment();
		void decrement();
		int getValue();
};