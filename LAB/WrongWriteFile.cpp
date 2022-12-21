#include "WrongWriteFile.h"

std::string WrongWriteFile::return_error() {
    return "Ошибка при открытии файла на запись:" + path;
}
WrongWriteFile::WrongWriteFile(std::string p) :path(p) {}