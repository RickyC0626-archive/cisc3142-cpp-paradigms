/**
 * Write the implementation (.cpp file) of the `Counter` class from
 * the previous exercise. Here is the full specification of the class.
 * 
 * The class contains:
 * - A data member `counter` of type int
 * - A constructor that takes one `int` argument and assigns its value
 * to `counter`
 * - A function called `increment` that accepts no parameters and returns
 * no value. `increment` adds one to the counter data member
 * - A function called `decrement` that accepts no parameters and returns
 * no value. `decrement` adds one to the counter data member
 * - A function called `getValue` that accepts no parameters. It returns
 * the value of the instance variable `counter`
 */

Counter::Counter(int n) { counter = n; }
void Counter::increment() { counter++; }
void Counter::decrement() { counter--; }
int Counter::getValue() { return counter; }