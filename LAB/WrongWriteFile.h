#pragma once
#include "iostream"

class WrongWriteFile : public std::exception {
public:
    explicit WrongWriteFile(std::string p);
    std::string return_error();
private:
    std::string path;
};