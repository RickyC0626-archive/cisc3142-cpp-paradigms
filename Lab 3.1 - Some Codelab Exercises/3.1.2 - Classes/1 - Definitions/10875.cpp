/**
 * Write the implementation (.cpp file) of the `Counter` class from
 * the previous exercise. Here is the full specification of the class.
 * 
 * The class contains:
 * - A data member `counter` of type int
 * - A data member named `limit` of type int
 * - A constructor that takes two int arguments and assigns the
 * first one to `counter` and the second one to `limit`
 * - A function called `increment` that accepts no parameters and
 * returns no value. If the data member `counter` is less than
 * `limit`, `increment` just adds one to the instance variable `counter`.
 * - A function called `decrement` that accepts no parameters and
 * returns no value. If `counter` is greater than zero, `decrement`
 * subtracts one from the `counter`.
 * - A function called `getValue` that accepts no parameters. It
 * returns the value of the instance variable `counter`.
 */

Counter::Counter(int c, int l) 
{ 
	counter = c;
	limit = l;
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