#include <iostream>
#include <string>
using namespace std;

#include "Logger.h"
using namespace yazi::utility;

int main()
{
    const string & filename = "./main.log";
    Logger::instance()->open(filename);
    Logger::instance()->max(1024 * 1024);
    Logger::instance()->level(Logger::DEBUG);

    debug("my name is %s, my age is %d", "yazi-log", 30);
    return 0;
}
