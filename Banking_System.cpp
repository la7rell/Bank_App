#include <iostream>
#include <iomanip>

void ShowBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;
    // Here is the Home Screen
    do{
    std::cout << "*******************\n";
    std:: cout << "Pick your choice:\n";
    std::cout << "*******************\n";
    std:: cout << "1. Show your balance\n";
    std:: cout << "2. Withdraw money\n";
    std:: cout << "3. Deposit cash\n";
    std:: cout << "4. Exit\n";
    std:: cin >> choice;
    // Here is just to reset it, get rid of unecessary garbage
    std::cin.clear();
    fflush(stdin);
    // When you log in, there will be options for you tp pick from, like a common banking app
    switch(choice){
        case 1: ShowBalance(balance);
                break;
        case 2: balance -= withdraw(balance);
                ShowBalance(balance);
                break;
        case 3: balance += deposit();
                ShowBalance(balance);
        case 4: std:: cout << "Thanks for visiting!\n";
        default:std::cout << "Invalid choice.\n";
    }

    }while(choice != 4);
    
return 0;
}
void ShowBalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){

    double amount = 0;

    std::cout << "Enter amount to be deposited: ";
    std:: cin >> amount;

    if(amount > 0){
        return amount;
    }
    else {
        std:: cout << "Thats not a valid amount: \n";
        return 0;
    }

}
double withdraw(double balance){

    double amount = 0;

    std::cout << "Enter amount to be withdrawn : ";
    std:: cin >> amount;

    if (amount > balance){
        std:: cout << "Insufficient funds\n";
        return 0;
    }
    else if (amount < 0){
        std:: cout << "Thats not a valid amount\n";
        return 0;
    }
    else{
        return amount;
    }
}

