#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

/**
 * Provides basic support for rational numbers
 */
class Rational
{
    private:
        int num, denom;

        /**
         * Converts the rational number to simplest form
         */
        void normalize();
    public:
        /**
         * Creates a new Rational with numerator num and denominator denom. 
         * Default numerator is 0, and default denominator is 1.
         *
         * @param num Numerator of the new Rational
         * @param denom Denominator of the new Rational
         */
        Rational(int num = 0, int denom = 1);

        /**
         * Getter method for Rational numerator
         *
         * @return the numerator of this Rational
         */
        int getNumerator() const;

        /**
         * Getter method for Rational denominator
         *
         * @return the denominator of this Rational
         */
        int getDenominator() const;

        /**
         * Returns the negation of the rational number (multiplied by -1)
         *
         * @return the negation of the rational number
         */
        Rational neg() const;

        /**
         * Returns the inverse (reciprocal) of the rational number
         *
         * @return the inverse of the rational number
         */
        Rational inv() const;

        /**
         * Returns true if the Rational argument and Rational receiver are equal
         *
         * @param r the Rational to be compared
         * @return true if equal, false if unequal
         */
        bool equals(const Rational &r) const;

        /**
         * Compares two Rational objects numerically
         *
         * @param r the Rational to be compared
         * @return -1 if receiver is less than argument, 0 if equal, 1 if greater
         */
        int compareTo(const Rational &r) const;

        /**
         * Adds the Rational argument to the receiver in place
         *
         * @param r the Rational to be added
         * @return the reference to the sum of the two Rationals
         */
        Rational &addInPlace(const Rational &r);

        /**
         * Subtracts the Rational argument from the receiver in place
         *
         * @param r the Rational to be subtracted
         * @return the reference to the difference of the two Rationals
         */
        Rational &subInPlace(const Rational &r);

        /**
         * Multiplies the Rational argument with the receiver in place
         *
         * @param r the Rational to be multiplied
         * @return the reference to the product of the two Rationals
         */
        Rational &mulInPlace(const Rational &r);

        /**
         * Divides the receiver by the Rational argument in place
         *
         * @param r the Rational to divide by
         * @return the reference to the quotient of the two Rationals
         */
        Rational &divInPlace(const Rational &r);

        /**
         * Adds the Rational argument to the receiver, then returns the sum
         *
         * @param r the Rational to be added
         * @return the sum of the two Rationals
         */
        Rational add(const Rational &r) const;

        /**
         * Subtracts the Rational argument from the receiver, then returns the difference
         *
         * @param r the Rational to be subtracted
         * @return the difference of the two Rationals
         */
        Rational sub(const Rational &r) const;

        /**
         * Multiplies the Rational argument with the receiver, then returns the product
         *
         * @param r the Rational to be multiplied
         * @return the product of the two Rationals
         */
        Rational mul(const Rational &r) const;

        /**
         * Divides the receiver by the Rational argument, then returns the quotient
         *
         * @param r the Rational to divide by
         * @return the quotient of the two Rationals
         */
        Rational div(const Rational &r) const;

        void print(std::ostream &os) const;
};

inline std::ostream &operator << (std::ostream &os, const Rational &r)
{
    r.print(os);
    return os;
}

#endif