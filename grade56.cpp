#include <iostream>
#include "Grade56.h"

using namespace std;

bool Grade56(double arr[3]) {
    int case_num = arr[2];

    int num1 = arr[0] * 100;
    double r_num1 = num1 / 100.0;
    int num2 = arr[1] * 100;
    double r_num2 = num2 / 100.0;
    int ans;
    double result;

    switch (case_num) {
        case 0:
            cout << r_num1 << " + " << r_num2 << " =?" << endl;
            result = r_num1 + r_num2;
            break;
        case 1:
            cout << r_num1 << " - " << r_num2 << " =?" << endl;
            result = r_num1 - r_num2;
            break;
        case 2:
            cout << r_num1 << " * " << r_num2 << " =?" << endl;
            ans = r_num1 * r_num2 * 100 + 0.5;
            result = ans / 100.0;
            break;
        case 3:
            cout << r_num1 << " / " << r_num2 << " =?" << endl;
            ans = (r_num1 / r_num2) * 100 + 0.5;
            result = ans / 100.0;
            break;
        default:
            break;
    }

    double input, solution;
    cout << "please input your answer here:" << endl;
    cin >> input;
    ans = input * 100;
    solution = ans / 100.0;


    if (result == solution) {
        return true;
    } else {
        return false;
    }
}