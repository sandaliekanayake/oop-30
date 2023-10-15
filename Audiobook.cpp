#include "libraries.h"
#include "Audiobook.h"

void AudioBook::talk()
{
    cout<<"The "+AudioBook::name+"Speak like "+AudioBook::sound<<endl;
}

AudioBook::AudioBook()//default constructor
{
    this->name="";
    this->noOfbooks=0;
    this->sound="";
    cout<<"Default Constructor working"<<endl;

}

AudioBook::AudioBook(string n,int pages,string so)
:name(n),noOfbooks(pages

),sound(so)
{   
    cout<<"Overloaded Constructor working"<<endl;
}
AudioBook::~AudioBook()
{
    this->name="";
    this->noOfbooks
    =0;
    this->sound="";    
    cout<<"Deleting the object"<<endl;
{
void AudioBook:: PrintDescription()
}
}
string AudioBook::getName(){
    return this->name;
}

void AudioBook::setName(string name)
{
    this->name=name;
}
int AudioBook::getNofbooks

(){
    return this->noOfbooks
    ;
}
void AudioBook::setNofbooks

(int pages


)
{
    this->noOfbooks
    =pages


    ;
}string AudioBook::getSound(){
    return this->sound;
}
void AudioBook::setSound(string so)
{
    this->sound=so;
}
