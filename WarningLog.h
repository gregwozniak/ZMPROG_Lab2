#ifndef WARNINGLOG_H
#define WARNINGLOG_H

#include "Log.h"

// Klasa reprezentująca log typu "warning"
class WarningLog : public Log {
private:
    std::string message;  // Wiadomość logu
public:
    // Konstruktor ustawia wiadomość z prefiksem "WARNING"
    WarningLog(const std::string& msg) : message("WARNING: " + msg) {}

    // Zwraca wiadomość logu
    std::string getMessage() const override {
        return message;
    }
};

#endif // WARNINGLOG_H


