#include <iostream>
using namespace std;
#include <string>

/**
 * 对字符串进行插入和删除
 * string& insert(int pos,const char* s) //从pos位置插入字符串
 * string& insert(int pos,const string& s) //从pos位置插入字符串
 * string& insert(int pos,int n, char c) //在指定位置插入n个字符c
 * string& erase(int pos,int n) //删除从pos开始的n个字符
 * 
 */

 void test01(){
    string str1 = "hello";
    str1.insert(1,"111");
    cout << str1 << endl;
    
    str1.erase(1,3);
    cout << str1 << endl;

 }


int main(){

    test01();
    system("pause");
    return 0;
}