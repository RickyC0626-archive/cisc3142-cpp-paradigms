/**
 * Provides basic support for rational numbers
 */
public class Rational
{
    private int num, denom;

    /**
     * Creates a new Rational with numerator num and denominator denom
     *
     * @param num Numerator of the new Rational
     * @param denom Denominator of the new Rational
     */
    Rational(int num, int denom)
    {
        if(denom == 0) throw new RationalException("Denominator cannot be 0");

        int gcd = gcd(num, denom);
        this.num = num / gcd;
        this.denom = denom / gcd;
    }

    /**
     * Creates a new Rational with only a numerator, denominator defaults to 1
     *
     * @param num Numerator of the new Rational
     */
    Rational(int num) { this(num, 1); }

    /**
     * Creates a new Rational with value of 0
     */
    Rational() { this(0, 1); }

    /**
     * Copy constructor for creating a new Rational from a Rational
     *
     * @param r Rational to be copied
     */
    Rational(Rational r) { this(r.getNumerator(), r.getDenominator()); }

    /**
     * Getter method for Rational numerator
     *
     * @return the numerator of this Rational
     */
    public int getNumerator() { return this.num; }

    /**
     * Getter method for Rational denominator
     *
     * @return the denominator of this Rational
     */
    public int getDenominator() { return this.denom; }

    /**
     * Returns the string representation of the Rational.
     * If denominator is 1 then only numerator is returned.
     *
     * @return the string value of the rational number in the form num/denom
     */
    public String toString()
    {
        if(this.denom == 1) return String.valueOf(this.num);
        return this.num + "/" + this.denom;
    }

    /**
     * Returns the negation of the rational number (multiplied by -1)
     *
     * @return the negation of the rational number
     */
    public Rational negate() { return new Rational(this.num * -1, this.denom); }

    /**
     * Returns the inverse (reciprocal) of the rational number
     *
     * @return the inverse of the rational number
     */
    public Rational inverse() { return new Rational(this.denom, this.num); }

    /**
     * Returns true if the Rational argument and Rational receiver are equal
     *
     * @param r the Rational to be compared
     * @return true if equal, false if unequal
     */
    public boolean equals(Rational r)
    {
        return (this.num == r.getNumerator() && this.denom == r.getDenominator());
    }

    /**
     * Compares two Rational objects numerically
     *
     * @param r the Rational to be compared
     * @return -1 if receiver is less than argument, 0 if equal, 1 if greater
     */
    public int compareTo(Rational r)
    {
        int lhs = this.num * r.getDenominator();
        int rhs = this.denom * r.getNumerator();
        return Integer.compare(lhs, rhs);
    }

    /**
     * Finds the GCD of num and denom using Euclid's algorithm
     * <link>https://en.wikipedia.org/wiki/Greatest_common_divisor#Calculation</link>
     *
     * @param num the numerator of the Rational
     * @param denom the denominator of the Rational
     * @return the greatest common factor
     */
    private int gcd(int num, int denom)
    {
        if(denom == 0) return num;
        return gcd(denom, num % denom);
    }
}