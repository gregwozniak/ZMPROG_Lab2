#include <iostream>
#include "Logger.h"

int main() {
    Logger* logger = Logger::getInstance();  // Pobiera instancję Singletona

    while (true) {
        std::cout << "1. Dodaj log\n2. Wyświetl logi\n3. Wyjście\n";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::string type, message;
            std::cout << "Podaj typ logu (info/warning/error): ";
            std::cin >> type;  // Pobiera typ logu
            std::cin.ignore();  // Ignoruje znak nowej linii
            std::cout << "Podaj treść logu: ";
            std::getline(std::cin, message);  // Pobiera treść logu

            logger->logMessage(type, message);  // Dodaje log do loggera
        } else if (choice == 2) {
            logger->displayLogs();  // Wyświetla wszystkie logi
        } else if (choice == 3) {
            break;  // Zakończenie programu
        } else {
            std::cout << "Nieprawidłowy wybór. Spróbuj ponownie.\n";
        }
    }

    return 0;
}

