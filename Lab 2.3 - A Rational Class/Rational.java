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
        this.num = num;
        this.denom = denom;
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
     * @param r Rational to compare to
     * @return true if equal, false if unequal
     */
    public boolean equals(Rational r)
    {
        return (this.num == r.getNumerator() && this.denom == r.getDenominator());
    }
}