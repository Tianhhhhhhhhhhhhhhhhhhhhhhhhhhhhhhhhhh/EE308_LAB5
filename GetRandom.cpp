#include <cstdlib>
#include <ctime>
#include "GetRandom.h"

using namespace std;

void getRandom(int grade, double arr[3]) {
    //定义随机数种子
    srand(time(NULL));
//根据不同的输入年级生成计算题的两个组成数
    if (grade == 1 || grade == 2) {
        arr[0] = rand() % 101;
        arr[1] = rand() % 101;
        arr[2] = rand() % 2;
    } else if (grade == 3 || grade == 4) {
        arr[0] = rand() % 101;
        arr[1] = rand() % 101;
        arr[2] = rand() % 4;
    } else if (grade == 5 || grade == 6) {
        arr[0] = 100 * rand() / double(RAND_MAX);
        arr[1] = 100 * rand() / double(RAND_MAX);
        arr[2] = rand() % 4;
    }

}
