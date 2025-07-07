#include <iostream>
using namespace std;
#include <deque>

/**
 * deque插入和删除
 * 两端插入操作：
 * push_back(elem) //在容器尾部添加一个元素
 * push_front(elem) //在容器头部插入一个数据
 * pop_back() //删除容器最后一个数据
 * pop_front() //删除容器第一个数据
 * 
 * 指定位置操作：
 * insert(pos,elem) //在pos位置插入一个elem元素的拷贝，返回新数据的位置
 * insert(pos,n,elem) // 在pos位置插入n个elem数据，无返回值
 * insert(pos,beg,end) // 在pos位置插入[beg,end)区间的数据，无返回值
 * clear() //清空容器的所有数据
 * erase(beg,end) //删除[beg,end)区间的数据，返回下一个数据的位置
 * erase(pos) // 删除pos位置的数据，返回下一个数据的位置
 * 
 */

 void printDeque(deque<int> &v){
    for(deque<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << (*it) << " ";
    }
    cout << endl;
}

 void test01(){
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(30);
    d1.push_front(40);
    printDeque(d1);

    //尾删
    d1.pop_back();

    //头删
    d1.pop_front();
 }

 void test02(){
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(30);
    d1.push_front(40);
    printDeque(d1);

    //insert加入
    auto posIterator = d1.insert(d1.begin(),1000);
    std::cout << "插入的位置索引: " << (posIterator - d1.begin()) << std::endl; 
    d1.insert(d1.begin(),2,10000);

    //按照区间进行插入
    deque<int> d2;
    d2.push_back(1);
    d2.push_back(2);
    d2.push_back(3);
    d1.insert(d1.begin(),d2.begin(),d2.end());
    printDeque(d1);
 }

void test03(){
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(30);
    d1.push_front(40);
    printDeque(d1);

    //删除
    deque<int>::iterator it = d1.begin();
    it++;
    d1.erase(it);
    printDeque(d1);

    //删除区间
    d1.erase(it,d1.end());
    printDeque(d1);

    //清空容器
    d1.clear();


}

 int main(){
    // test01();
    test02();
    system("pause");
    return 0;
 }