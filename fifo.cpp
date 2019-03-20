//
// Created by MacBook Pro on 2019-03-20.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include "fifo.h"

using namespace std;

fifo::fifo()  {
    first = 0;       // konstruktor
}

void fifo::showFifo()
{
    // wskaznik na pierszy element listy
    complexNumber *temp = first;

    // przewijamy wskazniki na nastepne elementy
    while (temp)
    {
        cout  << temp->RealPart << "+"  << temp->ImagaryPart <<"i" << endl;
        temp=temp->next;
    }
}

void fifo::deleteNumber (int nr)
{
    // jezeli to pierwszy element listy
    if (nr==1)
    {
        complexNumber *temp = first;
        first = temp->next; //poczatek listy, 1 el. wskazuje na 2 el. itd..
    }

    // jeżeli nie jest to pierwszy element
    if (nr>=2)
    {
        int j = 1;

        // do usuniecia srodkowego elemetnu potrzebujemy wskaznika na osobe n-1
        // wskaznik *wsk bedzie wskaznikiem na osobe poprzedzajaca osobe usuwana
        complexNumber *temp = first;

        while (temp)
        {
            // sprawdzamy czy wskaznik jest na osobie n-1 niz usuwana
            if ((j+1)==nr) break;

            // jezeli nie to przewijamy petle do przodu
            temp = temp->next;
            j++;
        }

        // wskaznik *temp wskazuje teraz na osobe n-1
        // nadpisujemy wkaznik osoby n na osobe n+1
        // bezpowrotnie tracimy osobe n-ta

        // dodatkowo sprawdzamy czy aby nie jest to ostatni element
        // wtedy nalezy wyzerowac ostatni wskaznik
        if (temp->next->next==0)
            temp->next = 0;

            // jezeli nie byl to ostatni element
        else
            temp->next = temp->next->next;
    }
}

void fifo::addNumber( int RealPart,int ImagaryPart)
{
    complexNumber *newer = new complexNumber(0,0);    // tworzy nowy element listy

    // wypełniamy naszymi danymi
    newer->RealPart = RealPart;
    newer->ImagaryPart = ImagaryPart;

    if (first==0) // sprawdzamy czy to pierwszy element listy
    {
        // jeżeli tak to nowy element jest teraz początkiem listy
        first = newer;
    }

    else
    {
        // w przeciwnym wypadku wędrujemy na koniec listy
        complexNumber *temp = first;

        while (temp->next)
        {

            temp = temp->next;
        }

        temp->next = newer;
        newer->next = 0;
    }
}