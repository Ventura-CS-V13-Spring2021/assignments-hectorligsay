#ifndef INTEGERARRAY_H      //if not defined
#define INTEGERARRAY_H      // defined this keyword

class IntegerArray
{
  private:
    int numbers[10];    //holds array up to 10 elements
    int length = 0 ;

  public:
    int getLength(void);  // gets current length
    void sortArray(int flag); // if flag = 0, ascend else descend
    void fillUp(void);      // fills randnums 0-99
    void getPrimenumbers(void) const ;
    void printAll(void) const ;
};
#endif