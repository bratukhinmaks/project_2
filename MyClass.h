//
// Created by MacBook Pro on 2019-03-11.
//

#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H
using namespace std;
#include <iostream>

class complexNumber {
public:
    int RealPart;
    int ImagaryPart;
    complexNumber * next;
    complexNumber(int RealPart,int ImagaryPart){
        this->  RealPart= RealPart;
        this->ImagaryPart =ImagaryPart;// konstruktor
        next = 0;
    };
    // konstruktor
    complexNumber operator +( const complexNumber & a );
    complexNumber operator -( const complexNumber & a );
    bool operator ==( const complexNumber & a );
    bool operator !=( const complexNumber & a );
    complexNumber & operator +=( const complexNumber & a  );
    complexNumber & operator -=( const complexNumber & a  );
    friend ostream& operator << ( ostream& zespol, const complexNumber & a ){
            return zespol << a.RealPart << "+" << a.ImagaryPart  << "i"<<endl;
    }
};
struct fifo{
public:
    complexNumber *first;  // wskaźnik na początek listy
    void addNumber (int RealPart, int ImagaryPart);
    void deleteNumber (int nr);
    void showFifo ();
    fifo();
};

#endif //PROJECT_2_MAIN_H
