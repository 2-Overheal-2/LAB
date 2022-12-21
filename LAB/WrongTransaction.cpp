#include "WrongTransaction.h"
WrongTransaction::WrongTransaction(Field map) : field(map) {}

Field WrongTransaction::rollback() {
    return field;
}