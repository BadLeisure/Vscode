#include <iostream>
using namespace std;
#include <deque>
#include <algorithm> //标准算法头文件

/**
 * deque的排序操作：利用算法实现对deque容器进行排序
 * sort(iterator beg, iterator end) //对beg和end区间内元素进行排序
 * 
 * 
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
    d1.push_back(30);
    d1.push_front(100);
    d1.push_front(200);
    d1.push_front(300);
    printDeque(d1);

    //进行排序,对于支持随机访问的迭代器的容器，都可以使用sort算法，默认从小到大排序
    sort(d1.begin(),d1.end());
    cout << "排序后的结果:"<< endl;
    printDeque(d1);

 }


int main(){
    test01();
    system("pause");
    return 0;
}