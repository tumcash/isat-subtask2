#include <iostream>
#include <string>
#include <bitset>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function 1: Decimal to Binary
string decimalToBinary(int n) {
    string binary = "";
    while (n > 0) {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n /= 2;
    }
    return binary == "" ? "0" : binary;
}

// Function 2: Binary to Decimal
int binaryToDecimal(string b) {
    return stoi(b, nullptr, 2);
}

// Function 3: Decimal to Hexadecimal
string decimalToHexadecimal(int n) {
    string hex = "";
    char hexDigits[] = "0123456789ABCDEF";
    while (n > 0) {
        hex = hexDigits[n % 16] + hex;
        n /= 16;
    }
    return hex == "" ? "0" : hex;
}

// Function 4: Hexadecimal to Decimal
int hexadecimalToDecimal(string h) {
    return stoi(h, nullptr, 16);
}

int main() {
    srand(time(0));
    int choice;

    do {
        cout << "\nConversion Menu:\n";
        cout << "1. Convert Decimal to Binary\n";
        cout << "2. Convert Binary to Decimal\n";
        cout << "3. Convert Decimal to Hexadecimal\n";
        cout << "4. Convert Hexadecimal to Decimal\n";
        cout << "5. Demo (Generate and convert random integers to binary)\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice == 1) {
            int dec;
            cout << "Enter a decimal number: ";
            cin >> dec;
            cout << "Binary representation: " << decimalToBinary(dec) << endl;

        } else if (choice == 2) {
            string bin;
            cout << "Enter a binary number: ";
            cin >> bin;
            cout << "Decimal representation: " << binaryToDecimal(bin) << endl;

        } else if (choice == 3) {
            int dec;
            cout << "Enter a decimal number: ";
            cin >> dec;
            cout << "Hexadecimal representation: " << decimalToHexadecimal(dec) << endl;

        } else if (choice == 4) {
            string hex;
            cout << "Enter a hexadecimal number: ";
            cin >> hex;
            cout << "Decimal representation: " << hexadecimalToDecimal(hex) << endl;

        } else if (choice == 5) {
            int randNum = rand() % 100; // Random between 0–99
            cout << "Generated random integer: " << randNum << endl;
            cout << "Binary representation: " << decimalToBinary(randNum) << endl;

        } else if (choice == 6) {
            cout << "Exiting the program." << endl;

        } else {
            cout << "Invalid choice, please try again." << endl;
        }

    } while (choice != 6);

    return 0;
}
