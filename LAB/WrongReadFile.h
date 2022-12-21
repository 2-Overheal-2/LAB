#pragma once
#include "iostream"
class WrongReadFile : public std::exception {
public:
    explicit WrongReadFile(std::string p);
    std::string return_error();
private:
    std::string path;
};