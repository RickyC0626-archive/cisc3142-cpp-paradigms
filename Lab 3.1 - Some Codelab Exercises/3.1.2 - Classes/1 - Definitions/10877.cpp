/**
 * Write the implementation (.cpp file) of the `Counter` class of
 * the previous exercise. The full specification of the class is:
 * - A data member `counter` of type `int`
 * - A data member named `limit` of type `int`
 * - A static `int` data member named `nCounters` which is
 * initialized to 0
 * - A constructor that takes two `int` arguments and assigns the
 * first one to `counter` and the second one to `limit`. It also
 * adds one to the static variable `nCounters`.
 * - A function called `increment` that accepts no parameters and
 * returns no value. If the data member `counter` is less than `limit`,
 * `increment` just adds one to the instance variable `counter`.
 * - A function called `decrement` that accepts no parameters and
 * returns no value. If `counter` is greater than zero, `decrement`
 * subtracts one from the `counter`.
 * - A function called `getValue` that accepts no parameters. It
 * returns an the value of the instance variable `counter`.
 * - A static function named `getNCounters` that accepts no parameters
 * and returns an `int`. `getNCounters` returns the value of the static
 * variable `nCounters`.
 */

Counter::Counter(int c, int l)
{
	counter = c;
	limit = l;
	nCounters++;
}

void Counter::increment() 
{
	if(counter < limit) counter++;
}

void Counter::decrement()
{
	if(counter > 0) counter--;
}

int Counter::getValue() { return counter; }

int Counter::nCounters = 0;
int Counter::getNCounters() { return nCounters; }