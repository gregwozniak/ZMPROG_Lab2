#ifndef LOGFACTORY_H
#define LOGFACTORY_H

#include "Log.h"
#include "InfoLog.h"
#include "WarningLog.h"
#include "ErrorLog.h"
#include <memory>  // Dla std::shared_ptr

// Klasa fabryczna do tworzenia obiektów logów na podstawie typu
class LogFactory {
public:
    // Tworzy log na podstawie typu i zwraca wskaźnik do obiektu logu
    static std::shared_ptr<Log> createLog(const std::string& type, const std::string& message) {
        if (type == "info") {
            return std::make_shared<InfoLog>(message);
        } else if (type == "warning") {
            return std::make_shared<WarningLog>(message);
        } else if (type == "error") {
            return std::make_shared<ErrorLog>(message);
        }
        return nullptr;  // Zwraca nullptr, jeśli typ nie jest rozpoznany
    }
};

#endif // LOGFACTORY_H

