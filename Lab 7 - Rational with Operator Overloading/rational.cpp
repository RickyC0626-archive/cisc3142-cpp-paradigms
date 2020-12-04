#include "rational.h"
#include "rational_exception.h"
#include "gcd.h"

void normalize(int &num, int &denom)
{
    int g = gcd(num, denom);
    num /= g;
    denom /= g;
}

Rational::Rational(int num, int denom)
{
    if(denom == 0) throw RationalException("Denominator cannot be 0");

    normalize(num, denom);

    Rational::num = num;
    Rational::denom = denom;
}

int Rational::getNumerator() const { return num; }
int Rational::getDenominator() const { return denom; }

Rational Rational::operator-() const { return Rational(num * -1, denom); }
Rational Rational::inv() const { return Rational(denom, num); }

int Rational::compareTo(const Rational &r) const
{
    int lhs = num * r.getDenominator();
    int rhs = denom * r.getNumerator();
    return lhs < rhs ? -1 : (lhs > rhs ? 1 : 0);
}

Rational &Rational::operator+=(const Rational &r)
{
    int commonDenom = denom * r.getDenominator();
    int newNum1 = num * r.getDenominator();
    int newNum2 = r.getNumerator() * denom;

    num = newNum1 + newNum2;
    denom = commonDenom;
    normalize(num, denom);
    
    return *this;
}

Rational &Rational::operator-=(const Rational &r) { return *this += -r; }

Rational &Rational::operator*=(const Rational &r)
{
    num *= r.getNumerator();
    denom *= r.getDenominator();
    normalize(num, denom);

    return *this;
}

Rational &Rational::operator/=(const Rational &r) { return *this *= r.inv(); }

Rational operator+(const Rational &r1, const Rational &r2)
{
    Rational newR(r1.getNumerator(), r1.getDenominator());
    return newR += r2;
}

Rational operator-(const Rational &r1, const Rational &r2)
{
    Rational newR(r1.getNumerator(), r1.getDenominator());
    return newR -= r2;
}

Rational operator*(const Rational &r1, const Rational &r2)
{
    Rational newR(r1.getNumerator(), r1.getDenominator());
    return newR *= r2;
}

Rational operator/(const Rational &r1, const Rational &r2)
{
    Rational newR(r1.getNumerator(), r1.getDenominator());
    return newR /= r2;
}

bool operator ==(const Rational &r1, const Rational &r2)
{
    return r1.compareTo(r2) == 0;
}

std::ostream &operator <<(std::ostream &os, const Rational &r)
{
    r.print(os);
    return os;
}

void Rational::print(std::ostream &os) const
{
    if(denom == 1) os << num;
    else os << num << "/" << denom;
}