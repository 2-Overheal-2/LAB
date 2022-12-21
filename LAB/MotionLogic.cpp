#include "MotionLogic.h"
void MotionLogic::start(int dir, Field& field, ISubject* i, Player* player,WrongTransaction *w) {
	int x, y;
	std::vector < std::vector < Cell* >> cells= field.matrix();
	switch (dir) {
	case UP:
		y = field.currentPlayerY();
		if (y == 0) {
			y = field.get_size() - 1;
		}
		else {
			y = field.currentPlayerY() - 1;
		}
		if (cells.at(y).at(field.currentPlayerX())->getType() != WALL) {
			field.movePlayerY(y);
		}
		else {
			y = field.currentPlayerY();
			i->prefex("[WAR]", new CommandNoMove());
		}
		break;
	case DOWN:
		y = field.currentPlayerY();
		if (y == field.get_size() - 1) {
			y = 0;
		}
		else {
			y = field.currentPlayerY() + 1;
		}
		if (cells.at(y).at(field.currentPlayerX())->getType() != WALL) {
			field.movePlayerY(y);
		}
		else {
			y = field.currentPlayerY();
			i->prefex("[WAR]", new CommandNoMove());
		}
		break;
	case LEFT:
		x = field.currentPlayerX();
		if (x == 0) {
			x = field.get_size() - 1;
		}
		else {
			x = field.currentPlayerX() - 1;
		}
		if (cells.at(field.currentPlayerY()).at(x)->getType() != WALL) {
			field.movePlayerX(x);
		}
		else {
			x = field.currentPlayerX();
			i->prefex("[WAR]", new CommandNoMove());
		}
		break;
	case RIGHT:
		x = field.currentPlayerX();
		if (x == field.get_size() - 1) {
			x = 0;
		}
		else {
			x = field.currentPlayerX() + 1;
		}
		if (cells.at(field.currentPlayerY()).at(x)->getType() != WALL) {
			field.movePlayerX(x);
		}
		else {
			x = field.currentPlayerX();
			i->prefex("[WAR]", new CommandNoMove());
		}
		break;
	case SAVE: {
        try {
            SaveData data = SaveData(&field, player);
            data.save_cells("cells.txt");
            data.save_characteristics("char.txt");
            data.save_position("position.txt");
        }
        catch (WrongData e){
            std::cout<<e.what();
            field=&w->rollback();
            player=&w->rollback_player();
        }
        catch (WrongWriteFile e){
            std::cout<<e.what();
            field=&w->rollback();
            player=&w->rollback_player();
        }
		break;
	}
	case LOAD: {
        try{
		LoadData load = LoadData(&field, player);
		load.load_cells("cells.txt");
		load.load_characteristic("char.txt");
		load.load_position("position.txt");
        }
        catch (WrongData e){
        std::cout<<e.what();
        field=&w->rollback_field();
        player=&w->rollback_player();
    }
        catch (WrongReadFile e){
            std::cout<<e.what();
            field=&w->rollback();
            player=&w->rollback_player();
    }
		break;
	}
	}

}