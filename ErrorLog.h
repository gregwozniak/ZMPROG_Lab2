#ifndef ERRORLOG_H
#define ERRORLOG_H

#include "Log.h"

// Klasa reprezentująca log typu "error"
class ErrorLog : public Log {
private:
    std::string message;  // Wiadomość logu
public:
    // Konstruktor ustawia wiadomość z prefiksem "ERROR"
    ErrorLog(const std::string& msg) : message("ERROR: " + msg) {}

    // Zwraca wiadomość logu
    std::string getMessage() const override {
        return message;
    }
};

#endif // ERRORLOG_H


