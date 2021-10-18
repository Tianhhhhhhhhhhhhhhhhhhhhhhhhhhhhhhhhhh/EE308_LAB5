#include "Grade34.h"
#include <iostream>

using namespace std;

bool Grade34(double arr[3]) {
    int caseNum = arr[2];
    double firstNum = arr[0];
    double secondNum = arr[1];
    double result, userResult;
    switch (caseNum) {
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
            result = result1 / 100.0;
            cout << firstNum << " / " << secondNum << " = ?" << endl;
            break;
    }
    cin >> userResult;

    if (userResult == result) {
        return true;
    } else {
        return false;
    }
}