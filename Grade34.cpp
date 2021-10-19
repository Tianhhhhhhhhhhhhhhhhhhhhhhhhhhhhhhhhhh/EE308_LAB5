#include "Grade34.h"
#include <iostream>

using namespace std;

//此函数用来进行整数的加减乘除运算
bool Grade34(double arr[3]) { //接收到的array三位分别是随机出来的两个数字和运算符号，0123对应加减乘除
    int caseNum = arr[2];
    double firstNum = arr[0];
    double secondNum = arr[1];
    double result, userResult; //正确的结果和用户输入的结果对比
    switch (caseNum) { //case 0,1,2,3 分别对应加减乘除
        case 0:
            result = firstNum + secondNum;
            cout << firstNum << " + " << secondNum << " = ?" << endl;
            break;
        case 1:
            result = firstNum - secondNum;
            cout << firstNum << " - " << secondNum << " = ?" << endl;
            break;
        case 2:
            result = firstNum * secondNum;
            cout << firstNum << " * " << secondNum << " = ?" << endl;
            break;
        case 3:
            result = firstNum / secondNum;
            int result1 = result * 100 + 0.5;
            result = result1 / 100.0;  // 取小数点后两位，并四舍五入
            cout << firstNum << " / " << secondNum << " = ?" << endl;
            break;
    }
    cin >> userResult; // 让用户输入答案

    if (userResult == result) {
        return true; // 答案正确返回1
    } else {
        return false; // 答案错误返回0
    }
}