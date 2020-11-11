/**
 * Write the interface (.h file) of a class `Counter` containing:
 * - An instance variable `counter` of type int
 * - A constructor that takes one int argument
 * - A function called `increment` that accepts no parameters and
 * returns no value
 * - A function called `decrement` that accepts no parameters and
 * returns no value
 * - A function called `getValue` that accepts no parameters and
 * returns an int
 */

class Counter
{
    private:
        int counter;

    public:
        Counter(int n);
        void increment();
        void decrement();
        int getValue();
};