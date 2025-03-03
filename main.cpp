#include <iostream>
using namespace std;

int main() {
    int balance = 1000; // Dastlabki balans
    int pin = 1234; // Standart PIN kodi
    int choice, amount, enteredPin;

    cout << " Bankomatga xush kelibsiz!\n";
    cout << "PIN kodni kiriting: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << " Noto'g'ri PIN kod!\n";
        return 0;
    }

    do {
        cout << "\n====  BANKOMAT MENYU ====\n";
        cout << "1. Balansni ko'rish\n";
        cout << "2. Pul yechish\n";
        cout << "3. Pul qo'shish\n";
        cout << "4. PIN kodni o'zgartirish\n";
        cout << "5. Chiqish\n";
        cout << "Tanlovingiz: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Sizning balansingiz: $" << balance << endl;
                break;

            case 2:
                cout << " Qancha pul yechmoqchisiz? ";
                cin >> amount;
                if (amount > balance) {
                    cout << " Yetarli mablag' yo'q!\n";
                } else {
                    balance -= amount;
                    cout << " Pul muvaffaqiyatli yechildi. Yangi balans: $" << balance << endl;
                }
                break;

            case 3:
                cout << " Qancha pul qo'shmoqchisiz? ";
                cin >> amount;
                if (amount <= 0) {
                    cout << " Noto'g'ri summa!\n";
                } else {
                    balance += amount;
                    cout << " Pul muvaffaqiyatli qo'shildi. Yangi balans: $" << balance << endl;
                }
                break;

            case 4:
                cout << " Yangi PIN kodni kiriting: ";
                cin >> pin;
                cout << " PIN kod muvaffaqiyatli o'zgartirildi!\n";
                break;

            case 5:
                cout << " Dasturdan chiqilmoqda...\n";
                break;

            default:
                cout << " Noto'g'ri tanlov! Qaytadan urinib ko'ring.\n";
        }
    } while (choice != 5);

    return 0;
}
