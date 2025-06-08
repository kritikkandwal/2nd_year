// template = these are predefined writen file that we can use directly


//1)


#include<iostream>
using namespace std;
template<class T>
T sum(T a,T b){
    return a+b;
}
int sum(int a,int b){
    return a-b;
}
int main(){
    int a=sum(10,9);
    cout<<a;
    float b=sum<float>(10.5,9.6);
    cout<<endl<<b;
}


//2)  FUNCTION TEMPLATE


#include<iostream>
using namespace std;
template<class T1,class T2>
T2 sum(T1 a,T2 b){
    return a+b;
}
int main(){
    double a=sum<int,double>(10,9.65);
    cout<<a;
    return 0;
}


//3) CLASS TEMPLATE


#include<iostream>
using namespace std;
template<class T>
class A{
    private:
    T a;
    public:
    A(T a){
        this->a=a;
    }
    void display(){
        cout<<a<<endl;
    }
};
int main(){
    A <string>obj1("KRITIK");
    obj1.display();
    A <double>obj2(20.32);
    obj2.display();
    A <int>obj3(45);
    obj3.display();
    return 0;
}


