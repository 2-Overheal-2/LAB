#include "LoggerFile.h"
void LoggerFile::print() {
    if (out.is_open()) {
        out << *this;
    }
    else
        std::cout << "Не работает";
}
LoggerFile::LoggerFile(Message* m1) :Logger(m1) {
    out.open("log.txt", std::ios::out);
}

LoggerFile::~LoggerFile() {
    out.seekp(0, std::ios::beg);
    out.close();
}