#include <iostream>
using namespace std;
#include <vector>

/**
 * empty() //判断容器是否为空
 * capacity() //容器的容量
 * size() //返回容器中元素的个数
 * resize(int num)  //重新指定容器的长度为num，若容易变长，则以默认值填充新位置，若容器变短，则末尾超出容器长度的元素被删除
 * resize(int num,elem)  //重新指定容器的长度为num，若容易变长，则以elem值填充新位置，若容器变短，则末尾超出容器长度的元素被删除
 */


void printVector(vector<int> &v){
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << (*it) << " ";
    }
    cout << endl;
}

 void test01(){

    vector<int> v1;
    for(int i = 0; i < 10; i++){
        v1.push_back(i);
    }
    printVector(v1);

    //判断容器是否为空
    if(v1.empty()){
        cout << "v1为空" << endl;
    }else{
        cout << "v1不为空" << endl;
        //判断容器容量和大小
        int capacity = v1.capacity();
        cout << "v1容量为:" << capacity << endl;
        int size = v1.size();
        cout << "v1大小为:" << size << endl;
    }

    

    //使用resize函数重新指定大小
    v1.resize(15);
    printVector(v1);
    v1.resize(8);
    printVector(v1);



 }
 int main(){
    test01();
    system("pause");
    return 0;
 }