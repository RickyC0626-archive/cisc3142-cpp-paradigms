/**
 * Write a full class definition for a class named `Counter`, and
 * containing the following members:
 * - A data member `counter` of type int
 * - A data member named `limit` of type int
 * - A static `int` data member named `nCounters` which is initialized
 * to 0
 * - A constructor that takes two `int` arguments and assigns the
 * first one to `counter` and the second one to `limit`. It also adds
 * one to the static variable `nCounters`
 * - A member function called `increment` that accepts no parameters and returns
 * no value. If the data member `counter is less than `limit`, `increment`
 * just adds one to the instance variable `counter`.
 * - A member function called `decrement` that accepts no parameters and returns
 * no value. If `counter is greater than 0, `decrement` subtracts one
 * from the counter.
 * - A member function called `getValue` that accepts no parameters. It returns
 * the value of the instance variable `counter`
 * - A static function named `getNCounters` that accepts no parameters and
 * returns an `int`. `getNCounters` returns the value of the static variable
 * `nCounters`.
 */

class Counter
{
	private:
		int counter;
		int limit;
		static int nCounters;
	public:
		Counter(int c, int l) { counter = c; limit = l; nCounters++; }
		void increment() { if(counter < limit) counter++; }
		void decrement() { if(counter > 0) counter--; }
		int getValue() { return counter; }
		static int getNCounters() { return nCounters; }
};

int Counter::nCounters = 0;