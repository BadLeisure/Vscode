#include <string>

#include <iostream>
using namespace std;

/**
 * string是C++风格的字符串，而string本质上是一个类
 * string 和 char*的区别：
 * char*是一个指针
 * string是一个类，类内部封装了char *,管理这个字符串，是一个char*型的容器
 * 
 * 特点：string类内部封装了很多成员方法：
 * 例如：查找find、拷贝copy、删除delete、替换replace、插入insert
 * string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责
 * 
 * 
 */

 //string的构造函数
 void test01(){

    string s1 = "abcd";//默认构造一个字符串
    const char * str = "Helloworld";
    string s2(str);
    cout << s1 << " 分隔符 " << s2 << endl;

    string s3(s2);
    cout << s3 << endl;

    string s4(10,'a');
    cout << s4 << endl;


 }

 int main(){

    test01();
    system("pause");
    return 0;
 }