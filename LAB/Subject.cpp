#include "Subject.h"

Subject::Subject(std::vector<ObserverLevel*>lvl, std::vector<Logger*>lg): level(lvl), log(lg){}

void Subject::notify() {
	for (auto elem1 : this->level) {
		Message* m = elem1->update();
		if (m) {
			for (auto elem2 : this->log) {
				elem2->set_message(m);
				elem2->print();
			}
		}
	}
}
void Subject::prefex(std::string prefex, Commands* command) {
	for (size_t i = 0; i < level.size(); i++)
		if (level[i]->get_level() == prefex) {
			level[i]->set_command(command);
			return;
		}

}
