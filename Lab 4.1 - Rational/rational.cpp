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

Rational Rational::neg() const { return Rational(num * -1, denom); }
Rational Rational::inv() const { return Rational(denom, num); }

bool Rational::equals(const Rational &r) const { return this->compareTo(r) == 0; }

int Rational::compareTo(const Rational &r) const
{
    int lhs = num * r.getDenominator();
    int rhs = denom * r.getNumerator();
    return lhs < rhs ? -1 : (lhs > rhs ? 1 : 0);
}

Rational &Rational::addInPlace(const Rational &r)
{
    int commonDenom = denom * r.getDenominator();
    int newNum1 = num * r.getDenominator();
    int newNum2 = r.getNumerator() * denom;

    num = newNum1 + newNum2;
    denom = commonDenom;
    normalize(num, denom);
    
    return *this;
}

Rational &Rational::subInPlace(const Rational &r) { return addInPlace(r.neg()); }

Rational &Rational::mulInPlace(const Rational &r)
{
    num *= r.getNumerator();
    denom *= r.getDenominator();
    normalize(num, denom);

    return *this;
}

Rational &Rational::divInPlace(const Rational &r) { return mulInPlace(r.inv()); }

Rational Rational::add(const Rational &r) const
{ 
    Rational newR(num, denom);
    return newR.addInPlace(r);
}

Rational Rational::sub(const Rational &r) const
{
    Rational newR(num, denom);
    return newR.subInPlace(r);
}

Rational Rational::mul(const Rational &r) const
{
    Rational newR(num, denom);
    return newR.mulInPlace(r);
}

Rational Rational::div(const Rational &r) const
{
    Rational newR(num, denom);
    return newR.divInPlace(r);
}

void Rational::print(std::ostream &os) const
{
    if(denom == 1) os << num;
    else os << num << "/" << denom;
}