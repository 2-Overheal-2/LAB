#include "WrongData.h"

std::string WrongData::return_error() {
    return "Неккоректные данные в файле:" + path + "\nстроке:" + line;
}
WrongData::WrongData(std::string p, std::string l) :path(p), line(l) {
}