#ifndef SERVICE_H
#define SERVICE_H

#include <string>

// Function declarations
void mainMenu();
void transferPulsa();
bool validateTransfer(const std::string& destination, int amount);
void returnToMenu();

#endif
