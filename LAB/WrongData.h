#pragma once
#include "iostream"

class WrongData : public std::exception {
public:
    explicit WrongData(std::string p, std::string l);
    std::string return_error();
private:
    std::string path;
    std::string line;
};