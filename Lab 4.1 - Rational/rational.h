#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
    public:
        Rational add(const Rational &r) const;
        Rational &addInPlace(const Rational &r);
        Rational neg() const;
        void print(std::ostream &os) const;
    private:
};

inline std::ostream &operator << (std::ostream &os, const Rational &r)
{
    r.print(os);
    return os;
}

#endif