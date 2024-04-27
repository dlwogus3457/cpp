#include <iostream>
#include <iomanip>

int main()
{
    const int num_Monkeys = 3;
    const int num_Days = 5;
    double pounds[num_Monkeys][num_Days];
    double totalPounds = 0;
    double lowest, highest;
    int monkey, day;
    
    std::cout << "Enter how many pounds of food each of its three monkeys ate each day during a week." << std::endl;
    std::cout << std::endl;
    
    for (monkey = 0; monkey < num_Monkeys; monkey++)
    {
        for (day = 0; day < num_Days; day++)
        {
            std::cout << "Monkey " << (monkey +1) << ", Day " << (day + 1) << ": ";
            std::cin >> pounds[monkey][day];
        }
        std::cout << std::endl;
    }
    
    //Average
    for (monkey = 0; monkey < num_Monkeys; monkey++)
    {
        for (day = 0; day < num_Days; day++)
        {
            totalPounds += pounds[monkey][day];
        }
    }
    double Average = totalPounds / 5;
    std::cout << "The average amount of foods eaten per day by the whole family of monkeys is " << Average << std::endl;
    
    // lowest = least amount
    lowest = pounds[0][0];
    for (monkey = 0; monkey < num_Monkeys; monkey++)
    {
        for (day = 0; day < num_Days; day++)
        {
            if (pounds[monkey][day] < lowest)
                lowest = pounds[monkey][day];
        }
    }
    std::cout << "The least amount of foods eaten during the week by any one monkey is " << lowest << std::endl;
    
    // highest = greatest amount
    highest = pounds[0][0];
    for (monkey = 0; monkey < num_Monkeys; monkey++)
    {
        for (day = 0; day < num_Days; day++)
        {
            if (pounds[monkey][day] > highest)
                highest = pounds[monkey][day];
        }
    }
    std::cout << "The greatest amount of foods eaten during the wek by any one monkey is " << highest << std::endl;
}
