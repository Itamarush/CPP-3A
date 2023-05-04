#include "Fraction.hpp"

namespace ariel{

    Fraction::Fraction(int numerator , int denominator)
    {
        this-> numerator = numerator;
        this-> numerator = denominator;

    }

    Fraction::Fraction()
    {
        this-> numerator = 0;
        this-> numerator = 1;
    }

    Fraction::Fraction(float num)
    {
        this->numerator = 0;
    };
    
    int Fraction::getNum() const
    {
        return 1;
    }
    int Fraction::getDen() const
    {
        return 1;
    }


     
    bool operator>(const Fraction& frac1, float num)
    {
        return false;
    };

    bool operator>=(const Fraction& frac1,const Fraction& frac2)
    {
        return false;
    };
    ostream& operator<<(ostream& ostr, const Fraction& frac)
    {
        return ostr;
    }

    Fraction operator+(const Fraction& frac1, const Fraction& frac2)
    {
        return Fraction(1,1);
    };

    Fraction operator+(const Fraction &frac1, float num)
    {
        return Fraction(1,1);
    };

    Fraction operator-(const Fraction& frac1 , const Fraction& frac2)
    {
        return Fraction(1,1);
    };

    Fraction operator-(const Fraction& frac1 , int num)
    {
        return Fraction(1,1);
    };

    Fraction operator*(const Fraction& fraction, float value)
    {
        return Fraction(1,1);
    };

    Fraction operator*(float value, const Fraction& fraction)
    {
        return Fraction(1,1);
    };

    Fraction operator/(const Fraction& fraction, float value)
    {
        return Fraction(1,1);
    };

    Fraction operator/(float value, const Fraction& fraction)
    {
        return Fraction(1,1);
    };

    // Fraction operator/(const Fraction& other) const
    // { 
    // return Fraction();
    // };

    Fraction Fraction::operator++()
    {
        return Fraction(1,1);
    };

    Fraction Fraction::operator++(int num)
    {
        return Fraction(1,1);
    };

    Fraction Fraction::operator--()
    {
        return Fraction(1,1);
    };

    Fraction Fraction::operator--(int num)
    {
        return Fraction(1,1);
    };

    Fraction Fraction::operator/(const Fraction& other) const
    {
        return Fraction(1,1);        
    };

    Fraction Fraction::operator*(const Fraction& other) const
    {
        return Fraction(1,1);
    };
}
