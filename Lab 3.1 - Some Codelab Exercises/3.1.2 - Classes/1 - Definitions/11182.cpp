/**
 * Write a full class definition for a class named `Averager`, and
 * containing the following members:
 * - A data member named `sum` of type integer
 * - A data member named `count` of type integer
 * - A constructor with no parameters. The constructor initializes
 * the data members `sum` and the data member `count` to 0.
 * - A function named `getSum` that accepts no parameters and
 * returns an integer. `getSum` returns the value of `sum`.
 * - A function named `add` that accepts an integer parameter and
 * returns no value. `add` increases the value of `sum` by the value
 * of the parameter, and increments the value of `count` by one.
 * - A function named `getCount` that accepts no parameters and
 * returns an integer. `getCount` returns the value of the `count`
 * data member, that is, the number of values added to `sum`.
 * - A function named `getAverage` that accepts no parameters and
 * returns a double. `getAverage` returns the average of the values
 * added to `sum`. The value returned should be a value of type
 * double (and therefore you must cast the data members to double
 * prior to performing the division).
 */

class Averager
{
	private:
		int sum;
		int count;
	public:
		Averager() { sum = 0; count = 0; }
		int getSum() { return sum; }
		void add(int n) { sum += n; count++; }
		int getCount() { return count; }
		double getAverage() { return (double) sum / (double) count; }
};