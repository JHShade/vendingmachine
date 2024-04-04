#include <iostream>
#include "vendingmachine.h"

VendingMachine::VendingMachine() : totalAmount(0) {}

void VendingMachine::run() {
    int choice;
    while (true) {
        std::cout << "Total Money: " << totalAmount << " " << std::endl;
        std::cout << "1. add 10\n2. add 50\n3. add 100\n4. add500 \n";
        std::cout << "5. Coffee (100)\n6. Tea (150)\n7. Milk (200)\n8. return change\n9. quit\n";
        std::cout << "Choose: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                totalAmount += 10;
                break;
            case 2:
                totalAmount += 50;
                break;
            case 3:
                totalAmount += 100;
                break;
            case 4:
                totalAmount += 500;
                break;
            case 5:
                if (totalAmount >= 100)
                    totalAmount -= 100;
                else
                    std::cout << "Unavailable" << std::endl;
                break;
            case 6:
                if (totalAmount >= 150)
                    totalAmount -= 150;
                else
                    std::cout << "Unavailable" << std::endl;
                break;
            case 7:
                if (totalAmount >= 200)
                    totalAmount -= 200;
                else
                    std::cout << "Unavailable" << std::endl;
                break;
            case 8:
		{
                int num_500 = totalAmount / 500;
                totalAmount %= 500;
                int num_100 = totalAmount / 100;
                totalAmount %= 100;
                int num_50 = totalAmount / 50;
                totalAmount %= 50;
                int num_10 = totalAmount / 10;
                totalAmount = 0;
                std::cout << "500 : " << num_500 << ", 100:  " << num_100 << ", 50 : " << num_50 << " , 10 : " << num_10 << "returned" << std::endl;
                break;
		}
            case 9:
                std::cout << "End Purchase" << std::endl;
                return;
            default:
                std::cout << "Choose again." << std::endl;
        }
    }
}
