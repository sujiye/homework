#include <iostream>
using namespace std;

struct Student
{
    int num;
    string name;
    int age;
    double score;
};

int main()
{
    Student stu1 = {2021001,"Lili",19,89.5};

    Student stu2;
    cin >> stu2.num >> stu2.name >> stu2.age >> stu2.score;
    
    cout << stu2.num << "," << stu2.name << ",~~~" << endl;
    cout << stu1.num << "," << stu1.name << ",~~~" << endl;

 
    return 0;
}
