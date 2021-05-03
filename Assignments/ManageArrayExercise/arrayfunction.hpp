#ifndef INTEGERARRAY_H      //if not defined
#define INTEGERARRAY_H      // defined this keyword

class IntegerArray
{
    private:
        int numbers[10];   // int array w/ the capacity 10
        int length = 0;         // the number of elements

    public:             
        int getLength() ;    
        void fillUp(void); 
        void sortAsc(void);   
        int getLastelm(void);   
        void removeLastelm(void);
        void appendElement(int v);   
        void printAll(void) const;                  
};
#endif