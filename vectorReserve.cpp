#include <iostream>
using namespace std;
#include <vector>

/**
 * vector预留空间
 * 减少vector在动态扩展容量时的扩展次数
 * 动态扩展都做了什么？1、开辟空间 2、拷贝数据 3、释放原有空间
 * 
 * reserve(int len) //容器预留len个元素长度，预留位置不初始化，元素不可访问
 */


 void test01(){
    vector<int> v;
    //利用reserve预留空间
    v.reserve(100000);
    int number = 0; // 统计开辟次数
    int *p = NULL;

    for(int i = 0 ; i < 100000; i++){
        v.push_back(i);
        //空间不够用了会扩展空间重新分配内存
        if(p!=&v[0]){
            p = &v[0];
            number++; 
        }

    }

    cout << "number = " << number << endl;

 }

 int main(){
    test01();
    system("pause");
    return 0;
 }