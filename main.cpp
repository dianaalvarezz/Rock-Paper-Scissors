#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cctype>

int main()
{
    std::string choice;
   
    std::cout<<"Pick: Rock Paper or Scissors" << std::endl;
    std::cin >> choice;

    srand(time(NULL));
    int computerchoice = rand() % 3 + 1;

    for (auto &c : choice) c = std::tolower(c);

    int choiceConverted;
    if (choiceConverted == "rock")
    {
        choiceConverted = 1;
    }
    else if (choiceConverted == "paper")
    {
        choiceConverted = 2;
    }
    else if (choiceConverted == "scissors")
    {
        choiceConverted = 3;
    }
    else
    {
        std::cout << "No try again" << std::endl;
        return 1;
    }


    if (choiceConverted == 1 && computerchoice == 1)
    {
        std::cout << "You Tied" << std::endl;
    }
    else if (choiceConverted == 1 && computerchoice == 2)
    {
        std::cout << "Rock gets covered by Paper, you lose" << std::endl;
    }
    else if (choiceConverted == 1 && computerchoice == 3)
    {
        std::cout << "Rock breaks scissors, you win" << std::endl;
    }
    else if (choiceConverted == 2 && computerchoice == 1)
    {
        std::cout << "Paper Covers Rock, you win" << std::endl;
    }
    else if (choiceConverted == 2 && computerchoice == 2)
    {
        std::cout << "You Tied" << std::endl;
    }
    else if (choiceConverted == 2 && computerchoice == 3)
    {
        std::cout << "Paper get cut my scissors, you lose" << std::endl;
    }
    else if (choiceConverted == 3 && computerchoice == 1)
    {
        std::cout << "Scissors get smashed by rock, you lose" << std::endl;
    }
    else if (choiceConverted == 3 && computerchoice == 2)
    {
        std::cout << "Scissors cut paper, you win" << std::endl;
    }
    else if (choiceConverted == 3 && computerchocie == 3)
    {
        std::cout << "You Tied" << std::endl;
    }
    else
        std::cout << "something has gone very wrong" << std::endl;

}

