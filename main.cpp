#include <iostream>
#include <string>

// Определение структуры для хранения информации о банковском счёте
struct BankAccount {
    int accountNumber;
    std::string ownerName;
    double balance;
};

// Функция для изменения баланса счёта
void updateBalance(BankAccount &account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    BankAccount account;

    // Запрос данных у пользователя
    std::cout << "Введите номер счёта: ";
    std::cin >> account.accountNumber;

    std::cout << "Введите имя владельца: ";
    std::cin.ignore(); // Чтобы игнорировать оставшийся символ новой строки
    std::getline(std::cin, account.ownerName);

    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    // Изменение баланса
    updateBalance(account, newBalance);

    // Вывод обновлённого экземпляра структуры
    std::cout << "Ваш счёт: " << account.ownerName << ", " << account.accountNumber << ", " << account.balance << std::endl;

    return 0;
}
