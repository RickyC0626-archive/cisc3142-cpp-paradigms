/**
 * Write a full class definition for a class named `Counter`, and
 * containing the following members:
 * - A data member `counter` of type int
 * - A constructor that takes one `int` argument and assigns its
 * value to `counter`
 * - A function called `increment` that accepts no parameters and returns
 * no value. `increment` adds one to the `counter` data member
 * - A function called `decrement` that accepts no parameters and returns
 * no value. `decrement` subtracts one to the `counter` data member
 * - A function called `getValue` that accepts no parameters. It returns
 * the value of the instance variable `counter`
 */

class Counter
{
	private:
		int counter;
	public:
		Counter(int i) { counter = i; }
		void increment() { counter++; }
		void decrement() { counter--; }
		int getValue() { return counter; }
};