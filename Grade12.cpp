#include <iostream>
#include "Grade12.h"

using namespace std;

bool Grade12(double arr[3]) {
    int firstNum = arr[0];
    int secondNum = arr[1];
    int caseNum = arr[2];
    int ans, useRes;

    if (caseNum == 0) {
        ans = firstNum + secondNum;
        cout << firstNum << " + " << secondNum << " = ?" << endl;
        cin >> useRes;

        if (ans == useRes) {
            return true;
        } else {
            return false;
        }
    }

    if (caseNum == 1) {
        ans = firstNum - secondNum;
        cout << firstNum << " - " << secondNum << " = ?" << endl;
        cin >> useRes;

        if (ans == useRes) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}
