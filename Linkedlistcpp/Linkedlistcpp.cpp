#include <iostream>
#include "Header.h"
extern linkedList;
extern initptr;
extern initptr& init(void);
extern void append(linkedList);
int main()
{
    linkedList* lL = new linkedList;
    append(*lL);
    std::cout << "helloworld";
}
