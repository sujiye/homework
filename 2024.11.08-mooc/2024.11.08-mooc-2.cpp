#include <iostream>
using namespace std;

struct Student
{
    int num;
    string name;
    int age;
    double score;
    
    void print(Student stu)
    {
        cout << stu.num << "," << stu.name << "," << stu.age << "," << stu.score << endl;
    }

};

int main()
{
    Student student = {2021001, "Lili", 19, 89.5};
    cout << student.num << "," << student.name << "," << student.age << "," << student.score << endl;
    
    student.print(student);
 
    return 0;
}
