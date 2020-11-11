/**
 * Write a full class definition for a class named `Counter`, and
 * containing the following members:
 * - A data member `counter` of type int
 * - A constructor that accepts no arguments and initializes the `counter`
 * data member to 0
 * - A function called `increment` that accepts no parameters and returns
 * no value. `increment` adds one to the counter data member
 * - A function called `getValue` that accepts no parameters. It returns
 * the value of the instance variable `counter`
 */

class Counter
{
	private:
		int counter;
	public:
		Counter() { counter = 0; }
		void increment() { counter++; }
		int getValue() { return counter; }
};