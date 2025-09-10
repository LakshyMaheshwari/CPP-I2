#include<iostream>
using namespace std;

// Friend function of two different classes

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
    friend void swap(A&, B&);
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
    friend void swap(A&, B&);
};

void swap(A &x, B &y){
    int temp;
    temp = x.a;
    x.a = y.b;
    y.b = temp;
}

int main(){
    A obja;
    B objb;

    obja.set();
    objb.set();
    obja.display();
    objb.display();
    swap(obja, objb);
    obja.display();
    objb.display();

    return 0;
}

