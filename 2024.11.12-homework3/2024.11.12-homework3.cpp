#include<iostream>
using namespace std;

struct Contact
{
    string name;
    string phone;
    string email;
    void print(Contact c)
    {
        cout << c.name << "," << c.phone << "," << c.email << endl;
    }
};

void add_contact(Contact con[], int num)
{
    if (num >= 100)
    {
        cout << "联系人已满" << endl;
        return;
    }
    else
    {
        cout << "联系人未满" << endl;
    }
    cout << "请输入联系人信息" << endl;
    cout << "姓名：";
    cin >> con[num].name;
    cout << "电话：";
    cin >> con[num].phone;
    cout << "邮箱：";
    cin >> con[num].email;
    num++;
}

void delete_contact(Contact con[], int num)
{
    string name;
    cout << "请输入要删除的联系人姓名" << endl;
    cin >> name;
    for (int i = 0; i < num; i++)
    {
        if (con[i].name == name)
        {
            for (int j = i; j < num - 1; j++)
            {
                con[j] = con[j + 1];
            }
            num--;
            cout << "删除成功" << endl;
            return;
        }
    }
    cout << "未找到该联系人" << endl;
}

void edit_contact(Contact con[], int num)
{
    string name;
    cout << "请输入要修改的联系人姓名" << endl;
    cin >> name;
    for (int i = 0; i < num; i++)
    {
        if (con[i].name == name)
        {
            cout << "请输入新的联系人信息" << endl;
            cout << "姓名：";
            cin >> con[i].name;
            cout << "电话：";
            cin >> con[i].phone;
            cout << "邮箱：";
            cin >> con[i].email;
            cout << "修改成功" << endl;
            return;
        }
    }
    cout << "未找到该联系人" << endl;
}

void find_contact(Contact con[], int num)
{
    string name;
    cout << "请输入要查找的联系人姓名" << endl;
    cin >> name;
    for (int i = 0; i < num; i++)
    {
        if (con[i].name == name)
        {
            con[i].print(con[i]);
            return;
        }
    }
    cout << "未找到该联系人" << endl;
}

int main() 
{
    Contact con[100] = {{"张三", "123456789", "1111@qq.com"}, {"李四", "987654321", "2222@qq.com"}, {"李华", "123456723", "3333@qq.com"}, {"赵强", "981651221", "4444@qq.com"}};
    int num = 4;
    while (true)
    {
        cout << "1.增加联系人" << endl;
        cout << "2.删除联系人" << endl;  
        cout << "3.修改联系人" << endl;
        cout << "4.查找联系人" << endl;
        cout << "0.退出" << endl;

        int choice;
        cin >> choice;
        if (choice == 0)
        {
            break;
        }
        switch (choice)
        {
        case 1:
            add_contact(con, num);
            num++;
            break;

        case 2:
            delete_contact(con, num);
            num--;
            break;

        case 3:
            edit_contact(con, num);
            break;

        case 4:
            find_contact(con, num);
            break;
        
        default:
            break;
        }
        
    }
    return 0;
}
