#include "libraries.h"
#include "book.cpp"

void writeRecord();
void display_book();
int main(){
    char op;
    Book s;
    do{
        cout<<"\n\n\t\t1. Input Book Records"<<endl;
        cout<<"\n\t\t2. Show Book Records"<<endl;
        cout<<"\n\t\t3. Exit"<<endl;
        cout<<"\n\t\t Enter your choice [1-3] :";
        cin>>op;
        switch(op){
            case '1':
            s.inputData();
            break;

        }
    }while (op!=3);

}


    


