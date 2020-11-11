/**
 * Write the implementation (.cpp file) of the `Accumulator` class of
 * the previous exercise. The full specification of the class is:
 * - A data member named `sum` of type integer
 * - A constructor that accepts no parameters. The constructor initializes
 * the data member `sum` to 0
 * - A function named `getSum` that accepts no parameters and returns an
 * integer. `getSum` returns the value of `sum`
 * - A function named `add` that accepts an integer parameter and returns
 * no value. `add` increases the value of `sum` by the value of the parameter
 */

Accumulator::Accumulator() { sum = 0; }
int Accumulator::getSum() { return sum; }
void Accumulator::add(int n) { sum += n; }