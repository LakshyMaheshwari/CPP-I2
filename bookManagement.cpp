#include<iostream>
#include<cstring>

using namespace std;

class Book {
    int bid;
    char bnm[15];
    int bprice;

    public:
        void setData();
        void setData(int);
        void setData(int, char *, int);
        void display();

        int getID() {
            return bid;
        }

        char* getName() {
            return bnm;
        }

        int getPrice() {
            return bprice;
        }
};

void Book::setData(int a, char *b, int c){
    bid = a;
    strcpy(bnm, b);
    bprice = c;
}
void Book::setData(){
    cout<<"\nBook ID: ";
    cin>>bid;
    cout<<"\nBook Name: ";
    cin>>bnm;
    cout<<"\nBook Price: ";
    cin>>bprice;
}

void Book::setData(int a){
    bid = a;
    cout<<"\nBook Name";
    cin>>bnm;
    cout<<"\nPrice";
    cin>>bprice;
}

void Book::display(){
    cout<<"\nBook ID"<<bid;
    cout<<"\nName:"<<bnm;
    cout<<"\nPrice:"<<bprice;
}


/*int main() {
    Book b1, b2;
    b1.setData();
    b1.display();

    b2.setData(102);
    cout<<"\nID:"<<b2.getID();
    cout<<"\nName:"<<b2.getName();
    cout<<"\nPrice:"<<b2.getPrice();

    return 0;
}*/

/*int main(){
    Book obj;
    Book *ptr;
    ptr = &obj;
    ptr->setData();
    ptr->display();

    int id = ptr->getID();
    ptr->setData(id);
    ptr->display();

    return 0;
}*/

//Use of New Operator
/*int main(){
    Book *ptr;
    ptr = new Book;
    ptr->setData();
    ptr->display();

    int id = ptr->getID();
    ptr->setData(id);
    ptr->display();

    delete ptr;

    return 0;
}*/


int main(){
    Book b[5];
    int i; 
    for(i=0;i<5;i++)
        b[i].setData(i+1);

    for(i=0;i<5;i++)
        b[i].display();

        cout<<"\n Enter Book id to search";
        int id;
        cin>>id;

        for(i=0;i<5;i++){
            if(b[i].getID()==id)
               break;
        
        }
        if(i==5)
           cout<<"\n Not found";
        else
            b[i].display();
}


  