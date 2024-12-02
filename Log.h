#ifndef LOG_H
#define LOG_H

#include <string>

// Abstrakcyjna klasa bazowa reprezentująca log
class Log {
public:
    virtual ~Log() {}  // Wirtualny destruktor
    virtual std::string getMessage() const = 0;  // Wirtualna metoda do pobrania wiadomości
};

#endif // LOG_H

