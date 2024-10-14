#include "TaskISP.h"
#include <iostream>

using namespace std;

void mainMenu() {
    cout << "Welcome to *858# Service" << endl;
    cout << "1. Transfer Pulsa" << endl;
    cout << "2. Check Balance" << endl;
    cout << "3. Exit" << endl;

    int choice;
    cout << "Choose an option: ";
    cin >> choice;

    if (choice == 1) {
        transferPulsa();
    } else if (choice == 2) {
        cout << "Your balance is: Rp 50,000" << endl;
        returnToMenu();
    } else if (choice == 3) {
        cout << "Exiting service. Thank you!" << endl;
    } else {
        cout << "Invalid choice. Please try again." << endl;
        mainMenu();
    }
}

void transferPulsa() {
    string destination;
    int amount;

    cout << "Enter destination phone number: ";
    cin >> destination;
    cout << "Enter amount to transfer: ";
    cin >> amount;

    if (validateTransfer(destination, amount)) {
        cout << "Transferring Rp " << amount << " to " << destination << "..." << endl;
        cout << "Transfer successful!" << endl;
    } else {
        cout << "Transfer failed. Please check your balance or destination number." << endl;
    }

    returnToMenu();
}

bool validateTransfer(const string& destination, int amount) {
    int balance = 50000;  // Example user balance

    // Check if the destination is numeric and if the amount is within the balance
    if (destination.find_first_not_of("0123456789") == string::npos && amount <= balance) {
        return true;
    }
    return false;
}

void returnToMenu() {
    cout << "\n1. Return to Main Menu" << endl;
    cout << "2. Exit" << endl;

    int choice;
    cout << "Choose an option: ";
    cin >> choice;

    if (choice == 1) {
        mainMenu();
    } else if (choice == 2) {
        cout << "Exiting service. Thank you!" << endl;
    } else {
        cout << "Invalid choice. Returning to main menu." << endl;
        mainMenu();
    }
}
