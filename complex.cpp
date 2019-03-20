//
// Created by MacBook Pro on 2019-03-20.
//

#include "complex.h"
#include <iostream>
#include <string>
#include <cstdlib>


complexNumber complexNumber::operator +( const complexNumber & a )
{
    return complexNumber( this->RealPart + a.RealPart, this-> ImagaryPart + a.ImagaryPart );
}
complexNumber complexNumber::operator -( const complexNumber & a )
{
    return complexNumber( this->RealPart - a.RealPart, this-> ImagaryPart - a.ImagaryPart );
}
bool complexNumber::operator ==( const complexNumber & a )
{
    if(( this->RealPart == a.RealPart ) &&( this->ImagaryPart == a.ImagaryPart ) )
        return true;
    else
        return false;

}
bool complexNumber::operator !=( const complexNumber & a )
{
    if(( this->RealPart != a.RealPart ) ||( this->ImagaryPart != a.ImagaryPart ) )
        return true;
    else
        return false;

}
complexNumber & complexNumber::operator +=( const complexNumber & a  )
{
    this->RealPart += a.RealPart;
    this->ImagaryPart += a.ImagaryPart;
    return * this;
}
complexNumber & complexNumber::operator -=( const complexNumber & a  )
{
    this->RealPart -= a.RealPart;
    this->ImagaryPart -= a.ImagaryPart;
    return * this;
}

