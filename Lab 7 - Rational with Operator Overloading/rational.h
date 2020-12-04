#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
    private:
        int num, denom;

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
        Rational operator -() const;

        /**
         * Returns the inverse (reciprocal) of the rational number
         *
         * @return the inverse of the rational number
         */
        Rational inv() const;

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
        Rational &operator +=(const Rational &r);

        /**
         * Subtracts the Rational argument from the receiver in place
         *
         * @param r the Rational to be subtracted
         * @return the reference to the difference of the two Rationals
         */
        Rational &operator -=(const Rational &r);

        /**
         * Multiplies the Rational argument with the receiver in place
         *
         * @param r the Rational to be multiplied
         * @return the reference to the product of the two Rationals
         */
        Rational &operator *=(const Rational &r);

        /**
         * Divides the receiver by the Rational argument in place
         *
         * @param r the Rational to divide by
         * @return the reference to the quotient of the two Rationals
         */
        Rational &operator /=(const Rational &r);

        /**
         * Prints the string representation of the Rational. 
         * If denominator is 1 then only numerator is printed.
         */
        void print(std::ostream &os) const;
};

/**
 * Sum of the two Rational arguments
 *
 * @param r1 first Rational operand
 * @param r2 second Rational operand
 * @return the Rational that is the sum of the two operands
 */
Rational operator +(const Rational &r1, const Rational &r2);

/**
 * Difference between the two Rational arguments
 *
 * @param r1 first Rational operand
 * @param r2 second Rational operand
 * @return the Rational that is the difference between the two operands
 */
Rational operator -(const Rational &r1, const Rational &r2);

/**
 * Product of the two Rational arguments
 *
 * @param r1 first Rational operand
 * @param r2 second Rational operand
 * @return the Rational that is the product of the two operands
 */
Rational operator *(const Rational &r1, const Rational &r2);

/**
 * Quotient of the two Rational arguments
 *
 * @param r1 first Rational operand
 * @param r2 second Rational operand
 * @return the Rational that is the quotient of the two operands
 */
Rational operator /(const Rational &r1, const Rational &r2);

bool operator ==(const Rational &r1, const Rational &r2);

std::ostream &operator <<(std::ostream &os, const Rational &r);

#endif