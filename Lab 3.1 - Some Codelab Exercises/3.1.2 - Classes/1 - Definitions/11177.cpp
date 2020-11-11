/**
 * Write a full class definition for a class named `Counter`, and
 * containing the following members:
 * - A data member `counter` of type `int`
 * - A data member named `counterID` of type `int`
 * - A static `int` data member named `nCounters` which is
 * initialized to 0
 * - A constructor that takes an `int` argument and assigns its value
 * to `counter`. It also adds one to the static variable `nCounters`
 * and assigns the (new) value of `nCounters` to `counterID`
 * - A function called `increment` that accepts no parameters and
 * returns no value. `increment` adds one to the instance variable `counter`
 * - A function called `decrement` that accepts no parameters and
 * returns no value. `decrement` adds one to the instance variable `counter`
 * - A function called `getValue` that accepts no parameters. It
 * returns the value of the instance variable `counter`
 * - A function called `getCounterID` that accepts no parameters and
 * returns an `int`. `getCounterID` returns the value of the data member
 * `counterID`.
 */

class Counter
{
	private:
		int counter;
		int counterID;
		static int nCounters;
	public:
		Counter(int c) { counter = c; counterID = ++nCounters; }
		void increment() { counter++; }
		void decrement() { counter--; }
		int getValue() { return counter; }
		int getCounterID() { return counterID; }
};

int Counter::nCounters = 0;