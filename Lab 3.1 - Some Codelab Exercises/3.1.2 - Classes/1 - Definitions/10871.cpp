/**
 * Write the implementation (.cpp file) of the `Counter` class from
 * the previous exercise. Here is the full specification of the class.
 * 
 * The class contains:
 * - A data member `counter` of type int
 * - A constructor that accepts no arguments and initializes the `counter`
 * data member to 0
 * - A function called `increment` that accepts no parameters and returns
 * no value. `increment` adds one to the counter data member
 * - A function called `getValue` that accepts no parameters. It returns
 * the value of the instance variable `counter`
 */

Counter::Counter() { counter = 0; }
void Counter::increment() { counter++; }
int Counter::getValue() { return counter; }