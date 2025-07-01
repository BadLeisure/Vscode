#include <iostream>
using namespace std;
#include <string>

/**
 * 字符串比较是按字符的ASCII码进行对比
 * =返回0
 * >返回1
 * <返回-1
 *
 * 函数原型：int compare(const string &s)    int compare(const char* s)
 */


 void test01(){

    string str1 = "hello";
    string str2 = "hello";
    if(str1.compare(str2) == 0){
        cout << "str1 与 str2 相等" << endl;
    }else if(str1.compare(str2) > 0){
        cout << "str1 大于 str2"  << endl;
    }else{
        cout << "str1小于 str2"  << endl;

    }
 }


 int main(){
    test01();
    system("pause");
    return 0;
 }