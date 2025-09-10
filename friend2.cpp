#include<iostream>
using namespace std;

// Member function of one class as friend function of another class

class B; //Forward Declaration

class A{
    int a;

    public:

        void set(){
            cout<<"\nA a:";
            cin>>a;
        }

        void display(){
            cout<<"\nA a:"<<a;
        }
    void swap(B&);
};


class B{
    int b;

    public:
        void set(){
            cout<<"\nB b:";
            cin>>b;
        }

        void display(){
            cout<<"\nB b:"<<b;
        }
    friend void A :: swap(B&);
};

void A:: swap(B &y){
    int temp = a;
    a = y.b;
    y.b = temp;
}

int main(){
    A obja;
    B objb;

    obja.set();
    objb.set();
    obja.display();
    objb.display();
    //swap(obja, objb);
    obja.swap(objb);
    obja.display();
    objb.display();

    return 0;
}

