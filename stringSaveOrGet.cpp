#include <iostream>
using namespace std;
#include <string>

/**
 * string中单个字符存取方式有两种
 * 1、char& operator[](int n) 通过[]取字符
 * 2、char& at(int n)  通过at方法取字符
 */


 void test01(){

    string str1 = "helloworld";

    //通过[]访问单个字符
    for(int i = 0; i < str1.size();i++){
        cout << str1[i] << " " ;
    }
    cout << endl;

    //通过at方法访问
    for(int i = 0; i < str1.size();i++){
        cout << str1.at(i) << " " ;
    }
    cout << endl;
    cout << str1 << endl;

    str1[0] = 'x';
    cout << str1 << endl;
    str1[1] = 'x';
    cout << str1 << endl;


 }



int main(){
    test01();
    system("pause");
    return 0;
}