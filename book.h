#include "book.cpp"
#include "libraries.h"

void writeRecord(){
    Book s;
    ofstream outFile("Book.data", ios:: binary| ios::app);
    s.inputData();
    outFile.write(reinterpret_cast<char *>(&s),sizeof(Book));
    outFile.close();
}