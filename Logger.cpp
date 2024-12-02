#include "Logger.h"
#include "LogFactory.h"  // Fabryka do tworzenia obiektów logów

// Inicjalizacja statycznego wskaźnika na instancję Loggera
std::unique_ptr<Logger> Logger::instance = nullptr;

// Dodaje nowy log do listy logów
void Logger::logMessage(const std::string& type, const std::string& message) {
    // Tworzy nowy log za pomocą fabryki
    auto log = LogFactory::createLog(type, message);
    if (log != nullptr) {
        logs.push_back(log);  // Dodaje log do wektora
    } else {
        std::cerr << "Nieznany typ logu: " << type << std::endl;
    }
}

// Wyświetla wszystkie logi przechowywane w wektorze
void Logger::displayLogs() {
    for (const auto& log : logs) {
        std::cout << log->getMessage() << std::endl;  // Wyświetla wiadomość każdego logu
    }
}

