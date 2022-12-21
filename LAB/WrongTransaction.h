#pragma once
#include "Field.h"

class WrongTransaction {
public:
    explicit WrongTransaction(Field map);
    Field rollback();
private:
    Field field;
};