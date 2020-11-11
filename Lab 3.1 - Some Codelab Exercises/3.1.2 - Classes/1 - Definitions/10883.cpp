/**
 * Write the implementation (.cpp file) of the `Acc2` class of
 * the previous exercise. The full specification of the class is:
 * - A data member named `sum` of type integer
 * - A constructor that accepts no parameters. The constructor
 * initializes the data member `sum` to 0
 * - A function named `getSum` that accepts no parameters and
 * returns an integer. `getSum` returns the value of `sum`
 */

Acc2::Acc2() { sum = 0; }
int Acc2::getSum() { return sum; }