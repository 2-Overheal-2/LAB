#include "WrongReadFile.h"
WrongReadFile::WrongReadFile(std::string p) :path(p) {}
std::string WrongReadFile::return_error() {
    return "������ ��� �������� ����� �� ������:" + path;
}
