//
// Created by MacBook Pro on 2019-03-20.
//

#ifndef PROJECT_2_FIFO_H
#define PROJECT_2_FIFO_H
struct fifo{
public:
    complexNumber *first;  // wskaźnik na początek listy
    void addNumber (int RealPart, int ImagaryPart);
    void deleteNumber (int nr);
    void showFifo ();
    fifo();
};
#endif //PROJECT_2_FIFO_H
