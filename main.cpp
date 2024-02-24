#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>

int main()
{
    std::string choice;
    int rock, paper, scissors;

    rock = 1;
    paper = 2;
    scissors = 3;


    std::cout<<"Pick: Rock Paper or Scissors" << std::endl;
    std::cin >> choice;

    srand(time(NULL));
    int computerchoice = rand() % 3 + 1;

    if (choice == 1 && computerchoice == 1)
    {
        std::cout<<"You Tied";
    }
    else if (choice == 1 && computerchoice == 2)
    {
        std::cout<<"Paper covers rock, you lose"
    }


}

