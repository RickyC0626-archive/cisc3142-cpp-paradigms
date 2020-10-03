/**
 * Provides basic support for rational numbers
 */
public class Rational
{
    private Integer num, denom;

    /**
     * Creates a new Rational with numerator num and denominator denom
     *
     * @param num Numerator of the new Rational
     * @param denom Denominator of the new Rational
     */
    Rational(Integer num, Integer denom)
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
    Rational(Integer num) { this(num, 1); }

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
    public Integer getNumerator() { return this.num; }

    /**
     * Getter method for Rational denominator
     *
     * @return the denominator of this Rational
     */
    public Integer getDenominator() { return this.denom; }
}