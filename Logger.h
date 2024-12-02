#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <vector>
#include <memory>  // Dla std::unique_ptr i std::shared_ptr
#include "Log.h"

class Logger {
private:
    static std::unique_ptr<Logger> instance;  // Wskaźnik do jedynej instancji Loggera
    std::vector<std::shared_ptr<Log>> logs;   // Kontener przechowujący logi

    // Prywatny konstruktor uniemożliwia tworzenie obiektów z tej klasy z zewnątrz
    Logger() {}

public:
    // Statyczna metoda zwracająca jedyną instancję klasy Logger (Singleton)
    static Logger* getInstance() {
        if (instance == nullptr) {
            instance = std::unique_ptr<Logger>(new Logger());
        }
        return instance.get();
    }

    // Dodaje nowy log do listy logów
    void logMessage(const std::string& type, const std::string& message);

    // Wyświetla wszystkie zapisane logi
    void displayLogs();
};

#endif // LOGGER_H

