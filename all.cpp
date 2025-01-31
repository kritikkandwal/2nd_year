/*
polymorphsim is of 2 type
1)compile time->operator_overloading->method_overloading
2)run time->method overriding->virtual function
*/

//OPERATOR OVERLOADING

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int b=20;
//     string c="kritik";
//     string d="kandwal";
//     int z=a+b;
//     string h=c+d;
//     cout<<z<<endl;
//     cout<<h;
// }

//FUNCTION OVERLOADING

// 1)

// #include<iostream>
// using namespace std;
// void sum(int a,int b){
//     cout<<a+b<<endl;
// }
// void sum(float a,float b){
//     cout<<a+b<<endl;
// }
// void sum(string a,string b){
//     cout<<a+b<<endl;
// }
// int main(){
//     sum(1,2);
//     sum(1.23f,6.23f);
//     sum("kritik","sum");
// }

// 2)

// #include<iostream>
// using namespace std;
// void sum(int a,int b,int c){
//     cout<<a+b+c<<endl;
// }
// void sum(int a,int b){
//     cout<<a+b<<endl;
// }
// void sum(int a,int b,int c,int d){
//     cout<<a+b+c+d<<endl;
// }
// int main(){
//     sum(1,2);
//     sum(4,5,6);
//     sum(4,5,8,9);
// }

//3)

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void add(int a,int b){
//         cout<<a+b;
//     }
//     void add(string a,string b){
//         cout<<a+b;
//     }
// };


// int main(){
// A obj;
// obj.add(1,2);
// cout<<endl;
// obj.add("KRITIK","KANDWAL");
// cout<<endl;
// }


//METHOD OVERIDING


//1)

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     void print(){
//         cout<<"hlw lodu";
//     }
// };
// class B: public A{
//     public:
//     void print(){
//         cout<<"hlw jhatu";
//     }
// };
// int main(){
// B obj;
// obj.A::print();   ------->  "scope resolution"
// }


// VIRTUAL FUNATION  it's like overriding only but we are just telling compiler what is happening


// #include<iostream>
// using namespace std;
// class base{
//     public:
//     virtual void display(){
//         cout<<"i am base class";
//     }
// };
// class derived:public base{
//     public:
//     void display(){
//         cout<<"i am derived";
//     }
// };
// int main(){
//     derived obj;
//     base *b = & obj;
//     b->display();
//     return 0;
// }


//2) PURE VIRTUAL FUNCTION 
//means it is must to write something in derived class


// #include<iostream>
// using namespace std;
// class base{
//     public:
//     virtual void display()=0;
// };
// class derived:public base{
//     public:
//     void display(){
//         cout<<"i am derived";
//     }
// };
// int main(){
//     derived obj;
//     base *b = & obj;
//     b->display();
//     return 0;
// }


//VIRTUAL DESTRUCTOR



using namespace std;
#include<iostream>
class base{
    public:
    base(){
        cout<<"base class constructor"<<endl;
    }
    virtual ~base(){
        cout<<"base class destuctor"<<endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"derived class constructor"<<endl;
    }
    ~derived(){
        cout<<"derived class destuctor"<<endl;
    }
};
int main(){
    derived * o=new derived();
    base * obj=o;
    delete obj;
    return 0;
}