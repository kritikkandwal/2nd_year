#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float cgpa;
};
int main(){
    Student s1;
    s1.name="kritik";
    s1.rno=32;
    s1.cgpa=7.0;

    Student s2;
    s2.name="abhay";
    s2.rno=36;
    s2.cgpa=77.8;

    Student s3;
    cin>>s3.name;
    cin>>s3.rno;
    cin>>s3.cgpa;

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.cgpa<<endl;
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.cgpa<<endl;
}