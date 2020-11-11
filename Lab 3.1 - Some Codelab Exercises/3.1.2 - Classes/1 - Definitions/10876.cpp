/**
 * Write the interface (.h file) of a class `Counter` containing:
 * - A data member `counter` of type `int`
 * - A data member named `limit` of type `int`
 * - A static `int` data member named `nCounters`
 * - A constructor that takes two `int` arguments
 * - A function called `increment` that accepts no parameters and
 * returns no value
 * - A function called `decrement` that accepts no parameters and
 * returns no value
 * - A function called `getValue` that accepts no parameters and
 * returns an `int`
 * - A static function named `getNCounters` that accepts no parameters
 * and returns an `int`
 */

class Counter
{
	private:
		int counter;
		int limit;
		static int nCounters;
	public:
		Counter(int c, int l);
		void increment();
		void decrement();
		int getValue();
		static int getNCounters();
};