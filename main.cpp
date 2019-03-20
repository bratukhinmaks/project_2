//
// Created by MacBook Pro on 2019-03-11.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include "complex.cpp"
#include "fifo.cpp"

using namespace std;

int main()
{
    fifo *baza = new fifo;
    baza->addNumber(12,14);
    baza->addNumber(4,5);
    baza->addNumber(13,16);
    baza->addNumber(4,9);
    baza->addNumber(1,2);
    baza->addNumber(21,-3);


    baza->showFifo();

    cout << "-----------" << endl;

    baza->deleteNumber(3);
    baza->deleteNumber(5);
    baza->deleteNumber(1);

    baza->showFifo();

    delete (baza);

    complexNumber *s1= new complexNumber(2,5);
    complexNumber *s2= new complexNumber(14,9);
    complexNumber *s3= new complexNumber(0,0);
    *s3=*s2+*s1;
    cout << "-----------" << endl;
    cout<< *s3<<endl;
    if (*s2==*s1) {
        cout << "the same value" << endl;
    }
    if(*s2!=*s1){
        cout << "different value" << endl;
    }

    cout << "-----------" << endl;
    cout << *s2<<endl ;

    return 0;
}

