#include <iostream>
using namespace std;
#include <string>
//字符串的查找和替换
/**
 * string& replace(int pos,int n,const string& str)//替换从pos开始n个字符为字符串str
 * string& replace(int pos,int n,const char* s)//替换从pos开始n个字符为字符串s
 * 
 * 
 * 
 * 
 */


//1、查找find是从左往右查找
void test01(){
    string str1 = "abcdefgde";
    int index = str1.find("de");
    if(index == -1){
        cout << "未找到字符串";
        return ;
    }
    cout << "index=" << index << endl;
}

//rfind是从右往左查找
void test2(){
     string str1 = "abcdefgde";
    int index = str1.rfind("de");
    if(index == -1){
        cout << "未找到字符串";
        return ;
    }
    cout << "index=" << index << endl;
}

//替换
void test03(){
    string str1 = "abcdefg";
    //从1号位置起3个字符替换为“1111”
    str1.replace(1,3,"1111");
    cout << str1;
}

int main(){
    
    system("pause");
    return 0;
}