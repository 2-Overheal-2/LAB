#include "Field.h"
Field::Field(){
    size = 9;
    for (int i = 0; i < size; i++) {
        mat.emplace_back(std::vector<Cell*>());
        for (int j = 0; j < size; j++) {
            mat.back().emplace_back(new Cell(SPACE));
        }
    }
};

Field::~Field() {
    for (auto row : mat) {
        for (auto elem : row)
            delete elem;
    }
}

Field::Field(const Field& obj)
{
    this->size = obj.size;
    this->playerX = obj.playerX;
    this->playerY = obj.playerY;
    for (int i=0;i<obj.size;i++)
        for (int j=0;j<obj.size;j++)
            this->mat[i][j]=obj.mat[i][j];
    this->cell=obj.cell;
}
Field& Field::operator=(const Field& obj)
{
    for (auto row : this->mat) {
        for (auto elem : row)
            delete elem;
    }
    this->size = obj.size;
    this->playerX = obj.playerX;
    this->playerY = obj.playerY;
    this->cell=obj.cell;
    for (int i=0;i<obj.size;i++)
        for (int j=0;j<obj.size;j++)
            this->mat[i][j]=obj.mat[i][j];
    return *this;
}
Field::Field(Field&& obj)
{
    std::swap(this->size, obj.size);
    std::swap(this->playerX, obj.playerX);
    std::swap(this->playerY, obj.playerY);
    for (int i=0;i<obj.size;i++)
        for (int j=0;j<obj.size;j++)
            std::swap(this->mat[i][j], obj.mat[i][j]);
    std::swap(this->cell,obj.cell);
}

Field& Field::operator=(Field&& obj)
{
    if (this != &obj) {
        std::swap(this->size, obj.size);
        std::swap(this->playerX, obj.playerX);
        std::swap(this->playerY, obj.playerY);
        for (int i=0;i<obj.size;i++)
            for (int j=0;j<obj.size;j++)
                std::swap(this->mat[i][j], obj.mat[i][j]);
        std::swap(this->cell,obj.cell);
    }
    return *this;
}


int Field::get_size() {
    return size;
}

std::vector<std::vector<Cell*>> Field::matrix()
{
    return mat;
}

int Field::currentPlayerX()
{
    return playerX;
}

int Field::currentPlayerY()
{
    return playerY;
}

void Field::movePlayerX(int distance)
{
    playerX = distance;
}

void Field::movePlayerY(int distance)
{
    playerY = distance;
}
void Field::set_size(int value) {
    size = value;
}
//void Field::set_field(std::vector<std::vector<Cell> > new_field) { 
//    mat = new_field;
//}