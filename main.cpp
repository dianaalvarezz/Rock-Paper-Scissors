#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>

int main()
{
    std::string choice;
   
    std::cout<<"Pick: Rock Paper or Scissors" << std::endl;
    std::cin >> choice;

    srand(time(NULL));
    int computerchoice = rand() % 3 + 1;

    int choice;
    if (choice == "rock")
    {
        choice = 1;
    }
    else if (choice == "paper")
    {
        choice = 2;
    }
    else if (choice == "scissors")
    {
        choice = 3;
    }
    else
    {
        std::cout << "No try again" << std::endl;
        return 1;
    }


    if (choice == 1 && computerchoice == 1)
    {
        std::cout<<"You Tied";
    }
    else if (choice == 1 && computerchoice == 2)
    {
        std::cout<<"Paper covers rock, you lose"
    }


}

