#include <iostream>
#include "linkedList.h"
extern linkedList;
extern initptr;
extern initptr& init(void);
extern void append(linkedList);
int main()
{
    linkedList* lL = new linkedList;
    append(*lL);
}

