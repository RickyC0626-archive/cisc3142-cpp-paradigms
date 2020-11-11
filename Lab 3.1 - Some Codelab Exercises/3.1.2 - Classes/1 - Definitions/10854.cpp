/**
 * Write the interface (.h file) of a class `Counter` containing:
 * - An instance variable `counter` of type int, initialized to 0
 * - A function called `increment` that adds one to the instance
 * variable `counter`. It does not accept parameters or return a value
 * - A function called `getValue` that doesn't accept any parameters.
 * It returns the value of the instance variable `counter`.
 * - A default constructor
 */

class Counter
{
    private:
        int counter = 0;

    public:
        Counter();
        void increment();
        int getValue();
};