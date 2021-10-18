#include <iostream>
#include <cmath>
#include "Grade12.h"

using namespace std;

bool Grade12(double arr[3]) {
    int firstnum = arr[0];
    int secondnum = arr[1];
    int casenum = arr[2];
    int ans, userans;

    if (casenum == 0) {
        ans = firstnum + secondnum;
        cout << firstnum << " + " << secondnum << " = ?" << endl;
        cin >> userans;

        if (ans == userans) {
            return true;
        } else {
            return false;
        }

    }

    if (casenum == 1) {
        ans = firstnum - secondnum;
        cout << firstnum << " - " << secondnum << " = ?" << endl;
        cin >> userans;

        if (ans == userans) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}
