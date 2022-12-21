#include "LogMenu.h"

void LogMenu::set_levels(std::vector<ObserverLevel*>* levels) {
    std::cout << "Enter loggers, example:[INF],[GAM],[WAR].In case of an unrecognized command, there will be no logging." << '\n';
    std::string s;
    std::getline(std::cin, s);
    int d = s.find(',');
    if (d != -1) {
        std::string s1 = s.substr(0, d);
        set_level(s1, levels);
        std::string s2 = s.substr(d + 1);
        int f = s2.find(',');
        if (f != -1) {
            std::string s3 = s2.substr(f + 1);
            set_level(s3, levels);
            s2 = s2.substr(0, f);
            set_level(s2, levels);
        }
        else
        {
            set_level(s2, levels);
        }
    }
    else {
        set_level(s, levels);

    }
    for (size_t i = 0; i < levels->size(); i++)
        if ((*levels)[i]->get_level() == "[INF]") {
            std::swap((*levels)[levels->size() - 1], (*levels)[i]);
        }
}
void LogMenu::set_level(std::string s, std::vector<ObserverLevel*>* levels) {
    if (s == "[INF]")
        levels->push_back(new LevelInfo());
    else
        if (s == "[GAM]")
            levels->push_back(new LevelGame());
        else
            if (s == "[WAR]")
                levels->push_back(new LevelWarning());
}
void LogMenu::set_loggers(std::vector<Logger*>& l) {
    std::cout << "Enter C - in case you want to get logs in console, else enter F if you want to get them in fil.Example:CF\n";
    std::string s;
    std::getline(std::cin, s);
    if (s == "CF" || s == "FC") {
        l.push_back(new LoggerConsole(nullptr));
        l.push_back(new LoggerFile(nullptr));
    }
    else
        if (s == "F")
            l.push_back(new LoggerFile(nullptr));
        else
            if (s == "C")
                l.push_back(new LoggerConsole(nullptr));

}