#include "WrongWriteFile.h"

std::string WrongWriteFile::return_error() {
    return "������ ��� �������� ����� �� ������:" + path;
}
WrongWriteFile::WrongWriteFile(std::string p) :path(p) {}