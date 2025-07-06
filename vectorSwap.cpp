#include <iostream>
using namespace std;
#include <vector>

/**
 * vector互换容器实现两个容器内元素进行互换
 * swap(vec) //将vec与本身的元素互换
 */

 void printVector(vector<int> &v){
    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout << endl;
 }


void test01(){
    vector<int> v1;
    for(int i = 0; i < 10; i++){
        v1.push_back(i);
    }
    printVector(v1);

    vector<int> v2;
    for(int i = 10; i > 0; i--){
        v2.push_back(i);
    }
    printVector(v2);

    //swap交换后,两个容器内元素互换
    v1.swap(v2);
    printVector(v1);
    printVector(v2);

}

//实际用途 巧用swap可以收缩内存空间
void test02(){
    vector<int> v;
     for(int i = 0; i < 10000; i++){
        v.push_back(i);
    }
    cout << "容量为:" << v.capacity();
    cout << "大小为:" << v.size();

    //重新指定大小
    v.resize(3);
    cout << "resize后容量为:" << v.capacity();
    cout << "resize后大小为:" << v.size();

    //vector<int> (v) 匿名对象
    vector<int> (v).swap(v);
    cout << "swap后容量为:" << v.capacity();
    cout << "swap后大小为:" << v.size();

}

 int main(){
    test01();
    system("pause");
    return 0;
 }