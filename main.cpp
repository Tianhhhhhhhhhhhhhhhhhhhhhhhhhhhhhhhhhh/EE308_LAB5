#include <iostream>
#include "Grade12.h"
#include "Grade34.h"

using namespace std;

int main() {
    int grade, repeat, score = 0;
    double question[3];
    cout << "Please enter your grade?" << endl;
    cin >> grade;
    cout << "Please enter the number of questions?" << endl;
    cin >> repeat;
    for (int i = 0; i < repeat; ++i) {
        switch (grade) {
            case 1:
            case 2:
                if (Grade12(question)) score += 1;
                break;
            case 3:
            case 4:
                if (Grade34(question)) score += 1;
                break;
            case 5:
            case 6:
                break;
            default:
                cout << "Please input correct grade!" << endl;
        }
    }
    cout << "End!";
    if (score == repeat) {
        cout << "All right, that's great!";
    } else {
        cout << "Wrong question";
    }
    cout << "Your score is " << score << endl;
    return 0;
}
