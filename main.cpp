#include <iostream>
#include <string>
using namespace std;

#include "Logger.h"
using namespace yazi::utility;


int main()
{
    // 初始化日志对象
    Logger::instance()->open("./main.log");

    debug("log");

    return 0;
}
