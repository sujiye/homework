#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        int num;
        string name;
        int age;
        double grade;

        Student() : num(2021001), name("Lili"), age(19), grade(89.5) {}

        ~Student(){
            cout << num << "," << name << ",~~~" << endl;;
        }
};

class Graduate:public Student{
    public:
        string subject;
        void fun(){
            cout << "construction" << endl;
            cin >> subject;
        } 
        ~Graduate(){
            cout << num << "," << name << ","<< subject << ",~~~" << endl;
        }
};

int main(){
    Student stud;
    Graduate grad;
    grad.fun();

    return 0;
}
