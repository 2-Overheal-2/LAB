#include "WrongData.h"

std::string WrongData::return_error() {
    return "������������ ������ � �����:" + path + "\n������:" + line;
}
WrongData::WrongData(std::string p, std::string l) :path(p), line(l) {
}