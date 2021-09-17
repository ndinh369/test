#include <iostream>
#include <string>

const std::string menu{"shoyu ramen, miso ramen, tonkotsu ramen, gyoza, sake, chicken katsu"};

int main()
{
    // Ask for username
    std::cout << "What is your name?" << std::endl;
    std::string username;
    std::cin >> username;

    // Welcome message
    std::cout << "Hi, " << username << "! Welcome to Calvin's Ramen Shop. What would you like today?" << std::endl;

    // Take order until quit command
    std::string order{};
    std::getline(std::cin, order);

    while (order != "Quit")
    {
        std::getline(std::cin, order);
        if (menu.find(order) != std::string::npos)
        {
            std::cout << "You have ordered " << order << "." << std::endl;
        }
        else if (order == "Quit")
        {
            std::cout << "Your food will be with you soon!" << std::endl;
        }
        else
        {
            std::cout << "That item is not on the menu! :(" << std::endl;
        }
    }

    // Tell user if food requested is not on menu

    return 0;
}