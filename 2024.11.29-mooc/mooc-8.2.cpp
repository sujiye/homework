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

        void pr(){
             cout << num << "," << name << ","<< age << "," << grade << endl;
        }
};

class Graduate:public Student{
    public:
        string subject;
        Graduate() : Student(){
            cout << "construction" << endl;
            cin >> subject;
        }
        ~Graduate(){
            cout << num << "," << name << ","<< age << "," << grade << endl;
        }
        void pr(){
            cout << num << "," << name << "," << subject << endl;
        }
};

int main(){
    Student stud;
    Graduate grad;

    return 0;
}
