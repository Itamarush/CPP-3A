#pragma once
#include <iostream>
using namespace std;

namespace ariel
{
    class Fraction{

    public:
    int numerator;
    int denominator;
    
    Fraction();
    Fraction(int numerator, int denominator);
    Fraction(float num);
    
    int getNum() const;
    int getDen() const;

    friend bool operator>(const Fraction& frac1, float num);    
    friend bool operator>=(const Fraction& frac1,const Fraction& frac2);
    friend ostream& operator<<(ostream& ostr, const Fraction& frac);
    friend Fraction operator+(const Fraction& frac1, const Fraction& frac2);
    friend Fraction operator+(const Fraction &frac1, float num);
    friend Fraction operator-(const Fraction& frac1 , const Fraction& frac2);
    friend Fraction operator-(const Fraction& frac1 , int num);
    friend Fraction operator*(const Fraction& fraction, float value);
    friend Fraction operator*(float value, const Fraction& fraction);
    friend Fraction operator/(const Fraction& fraction, float value);
    friend Fraction operator/(float value, const Fraction& fraction);
    Fraction operator/(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator++();
    Fraction operator++(int num);
    Fraction operator--();
    Fraction operator--(int num);

    };

}
   

