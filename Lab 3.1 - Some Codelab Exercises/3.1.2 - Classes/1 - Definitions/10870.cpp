/**
 * Write the interface (.h file) of a class `Counter` containing:
 * - An instance variable `counter` of type int
 * - A constructor that accepts no arguments
 * - A function called `increment` that accepts no parameters and
 * returns no value
 * - A function called `getValue` that accepts no parameters
 */

// Basically the same as 10854, without the initialization of counter
class Counter
{
    private:
        int counter;

    public:
        Counter();
        void increment();
        int getValue();
};