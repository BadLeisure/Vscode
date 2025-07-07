#include <iostream>
using namespace std;
#include <deque>

/**
 * 对deque中的数据的存取操作
 * at(int idx)  // 返回索引idx所指的数据
 * operator[] //返回索引idx所指的数据
 * front() //返回容器中第一个元素
 * back() //返回容器最后一个元素
 */


void test01(){
    deque<int> d1;
    for(int i = 0; i < 10; i ++){
        d1.push_back(i);
    }
    //利用中括号的方式访问vector元素
     for(int i = 0; i < 10; i ++){
        cout << d1[i] << " ";
    }
    cout << endl;

    //利用成员函数at方式访问元素
    for(int i = 0; i < 10; i ++){
        cout << d1.at(i)  << " ";
    }
        cout << endl;   

    //获取第一个元素
    cout << "第一个元素是 " << d1.front() << endl;

    //获取最后一个元素
    cout << "最后一个元素是 " << d1.back() << endl;
}


int main(){
    test01();
    system("pause");
    return 0;
}