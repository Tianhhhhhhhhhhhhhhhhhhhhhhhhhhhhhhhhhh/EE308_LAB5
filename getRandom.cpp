#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//array [第一个随机数，第二个随机数，加减乘除的等级（0，1，2，3）对应加减乘除 ]
void getRandom(int grade, double arr[3]);

int main() {
    srand(int(time(0)));
    return 0;
}

void getRandom(int grade, double arr[3]) {
    //定义默认随机数引擎

    if (grade == 1) {
        arr[0] = rand() % 101;
        arr[1] = rand() % 101;
        arr[2] = rand() % 2;
    } else if (grade == 2) {

        arr[0] = rand() % 101;
        arr[1] = rand() % 101;
        arr[2] = rand() % 4;
    } else if (grade == 3) {

        arr[0] = 100 * rand() / double(RAND_MAX);
        arr[1] = 100 * rand() / double(RAND_MAX);
        arr[2] = rand() % 4;
    }

}
