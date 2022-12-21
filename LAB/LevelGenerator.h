#pragma once
#include "Field.h"
#include "RuleEnemiesSpawn.h"
#include "RuleHealSpawn.h"
#include "RulePlayerSpawn.h"
#include "RuleWallsSpawn.h"
#include <iostream>
#include <exception>

template <typename ... Rules>
class LevelGenerator {
public:
    Field* get_map();
    template<typename RuleType>
    void establish(Field*);
};


template<typename... Rules>
Field* LevelGenerator<Rules...>::get_map() {
    Field* field;
    field = new Field;
    (establish<Rules>(field), ...);
    return field;
}
template<typename ...Rules>
template<typename RuleType>
void LevelGenerator<Rules...>::establish(Field* field)
{
    RuleType obj;
    obj.establish(field);
}