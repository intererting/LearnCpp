#include "utils.h"

/**
 * Human human("yuliyang");
 * changeClassValue(human);
 * printf("%s", human.name.c_str());
 */
void changeClassValue(Human &human) {
    human.name = "after change";
}

/**
 * 遍历string
 */
void foreachString(std::string &value) {
    for (decltype(value.size()) index = 0;
         index != value.size() && !isspace(value[index]);
         index++) {
        value[index] = toupper(value[index]);
    }
}

/**
 * 迭代器string
 */
void iterString(const std::string &value) {
    for (auto it = value.begin();
         it != value.end(); it += 2) {
        printf("%c", *it);
    }
}

void iterArray(int *a) {
}

/**
 * 返回数组的函数
 */
int *returnArray() {
    static int a[] = {1, 2, 3};
    return a;
}

//{}init
//int a{3};
//string b{"haha"};
//printf("%d", a);

