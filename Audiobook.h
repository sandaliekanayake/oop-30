#include "libraries.h"

Book *tempBook;

void AudioBook::setNofpages
(double size)
{
    this->noOfpages
    = size ;   
} 
double AudioBook::getNofpages
()
{
    return this->noOfpages
    ;
}

AudioBook::AudioBook(string name,int noOfpages
,string sound,double noOfpages
):Book(name,noOfpages
,sound)
{
    this->noOfpages
    =noOfpages
    ;
}
Book AudioBook::getBookDetails(string name,int noOfpages
,string sound)
{
    tempBook=new Book(); 
    cout<<this->noOfpages
    <<endl;
    return *tempBook;
}
void AudioBook::talk() 
{
    cout<<"The AudioBook is talking "<<this->noOfpages
    <<" Of book ";
}

AudioBook::~AudioBook()
{
    delete tempBook;
    cout<<"Destructor has been called"<<endl;
}

