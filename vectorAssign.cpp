#include <iostream>
using namespace std;
#include<vector>

/**
 * 
 * vector赋值操作：给vector进行赋值
 * vector& operator=(const vector &vec) //重载等号操作符
 * assign(beg,end) //将[beg,end)区间中的数据拷贝赋值给本身
 * assign(n,elem); //将n个elem拷贝赋值给本身
 * 
 */

 void printVector(vector<int> &v){
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << (*it) << " ";
    }
    cout << endl;
}

 void test01(){
    vector<int> v1;
    for(int i = 0; i<10; i++){
        v1.push_back(i);
    }
    printVector(v1);

    //赋值行为，不是指向同一地址，独立的副本
    vector<int> v2 = v1;
    v2.push_back(100);
    printVector(v1);

 }
 int main(){
    test01();
    system("pause");
    return 0;
 }