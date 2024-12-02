#include <iostream>
using namespace std;
class Employee{
    public:
        Employee(int num, string name, int salary,int start_time[3]){
            this->name = name;
            this->num = num;
            this->salary = salary;
            this->start_time[0] = start_time[0];
            this->start_time[1] = start_time[1];
            this->start_time[2] = start_time[2];
        }
        void print(int time){
            cout << name << " " << time * salary << endl;
        }
    public:
        int* getStartTime() {
            return start_time;
        }
    private:
        string name;
        int num;
        int salary;
        int start_time[3];
};
int main(){
    int start_time1[3] = {2000, 10, 23}, start_time2[3] = {2008, 1, 20};
    int start_time3[3] = {2003, 7, 3}, start_time4[3] = {2015, 4, 10}, start_time5[3] = {2016, 3, 16};
    Employee e1(1, "wang", 5000, start_time1);
    Employee e2(2, "liu", 4500, start_time2);
    Employee e3(3, "huo", 3800, start_time3);
    Employee e4(4, "ma", 5300, start_time4);
    Employee e5(5, "meng", 6000, start_time5);
    int number, year, month;
    cin >> number >> year >> month;
    int time1, time2, time3, time4, time5;
    switch(number){
        case 1:
            time1 = (year - e1.getStartTime()[0]) * 12 + month - e1.getStartTime()[1];
            e1.print(time1);
            break;
        case 2:
            time2 = (year - e2.getStartTime()[0]) * 12 + month - e2.getStartTime()[1];
            e2.print(time2);
            break;
        case 3:
            time3 = (year - e3.getStartTime()[0]) * 12 + month - e3.getStartTime()[1];
            e3.print(time3);
            break;
        case 4:
            time4 = (year - e4.getStartTime()[0]) * 12 + month - e4.getStartTime()[1];
            e4.print(time4);
            break;
        case 5:
            time5 = (year - e5.getStartTime()[0]) * 12 + month - e5.getStartTime()[1];
            e5.print(time5);
            break;
    }
    return 0;
}
