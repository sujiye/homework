#include <iostream>
#include <string>
using namespace std;

// 定义Document类，作为基类
class Document {
private:
    // 文档名称成员变量
    string name;
public:
    // 构造函数，用于初始化name
    Document(string name) {
        this->name = name;
    }
    // 获取文档名称的函数
    string getName()
    {
        return name;
    }
};

// 从Document类派生出Book类，继承其属性和行为
class Book : public Document {
private:
    // 新增的表示页数的成员变量
    int pagecount;
public:
    // 构造函数，初始化文档名称和页数
    Book (string name, int pagecount) : Document(name) {
        this->pagecount = pagecount;
    }
    // 获取页数的函数
    int getPageCount()
    {
        return pagecount;
    }
};


int main() {
    Book myBook("C++ Primer", 500);
    cout << myBook.getName() << endl;
    cout << myBook.getPageCount() << endl;
    return 0;
}
