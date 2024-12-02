#ifndef INFOLOG_H
#define INFOLOG_H

#include "Log.h"

// Klasa reprezentująca log typu "info"
class InfoLog : public Log {
private:
    std::string message;  // Wiadomość logu
public:
    // Konstruktor ustawia wiadomość z prefiksem "INFO"
    InfoLog(const std::string& msg) : message("INFO: " + msg) {}

    // Zwraca wiadomość logu
    std::string getMessage() const override {
        return message;
    }
};

#endif // INFOLOG_H
