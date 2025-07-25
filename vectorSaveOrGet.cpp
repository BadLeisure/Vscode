#include <iostream>
using namespace std;
#include <vector>
/**
 * 数据存取
 * at(int idx)  // 返回索引idx所指的数据
 * operator[] //返回索引idx所指的数据
 * front() //返回容器中第一个元素
 * back() //返回容器最后一个元素
 */

void test01(){
    vector<int> v1;
    for(int i = 0; i < 10; i ++){
        v1.push_back(i);
    }
    //利用中括号的方式访问vector元素
     for(int i = 0; i < 10; i ++){
        cout << v1[i] << " ";
    }
    cout << endl;

    //利用成员函数at方式访问元素
    for(int i = 0; i < 10; i ++){
        cout << v1.at(i)  << " ";
    }
        cout << endl;   

    //获取第一个元素
    cout << "第一个元素是" << v1.front();

    //获取最后一个元素
    cout << "最后一个元素是" << v1.back();

}

 int main(){
    test01();
    system("pause");
    return 0;
 }