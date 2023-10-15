#include "libraries.h"
#include"collection.h"


class Bookshop
{
    public:
    
        Bookshop();//default constructor
        Bookshop(string n,int Books,string so);
        
        ~Bookshop();//destructor
        string getName();
        void setName(string name);
        int getNofBooks();
        void setNofBooks(int getNofBooks);//setter 
        string getSound();
        void setSound(string sound);
    protected:
        string type;
        string name;
        int noOfBooks;
        string sound;

};
