#include <iostream>
#include <string>

int main()
{
    const int num_flavor = 5;
    std::string salsa[num_flavor] = {"mild", "medium", "sweet", "hot", "zesty"};
    const int num_jar = 1;
    int sales[num_flavor][num_jar];
    int totalSales = 0;
    int flavor, jar;
    
    std::cout << "This program will calculate the total sales of\n"
            << "all the jars of the each flavors.\n"
            << "Enter the following sales information:\n\n";
    
    // user input
    for (flavor = 0; flavor < num_flavor; flavor++)
    {
        for (jar = 0; jar < num_jar; jar++)
        {
            std::cout << "Flavor " << salsa[flavor] << ", jar sold: ";
            std::cin >> sales[flavor][jar];
        }
    }
    std::cout << std::endl;
    
    std::cout << "Sales Report\n";
    // display input
    for (flavor = 0; flavor < num_flavor; flavor++)
    {
        for (jar = 0; jar < num_jar; jar++)
        {
            std::cout << "Flavor " << salsa[flavor] << ", jar sold: "
                    << sales[flavor][jar];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    
    //sales total
    for (flavor = 0; flavor < num_flavor; flavor++)
    {
        for (jar = 0; jar < num_jar; jar++)
            totalSales += sales[flavor][jar];
    }
    std::cout << "The total sales is " << totalSales << std::endl;
    
    int highest, lowest;
    
    //highest
    highest = sales[0][0];
    for (flavor = 0; flavor < num_flavor; flavor++)
    {
        for (jar = 0; jar < num_jar; jar++)
        {
            if (sales[flavor][jar] > highest)
                highest = sales[flavor][jar];
        }
    }
    std::cout << "The highest sales is " << highest << std::endl;
    
    //lowest
    lowest = sales[0][0];
    for (flavor = 0; flavor < num_flavor; flavor++)
    {
        for (jar = 0; jar < num_jar; jar++)
        {
            if (sales[flavor][jar] < lowest)
                lowest = sales[flavor][jar];
        }
    }
    std::cout << "The lowest sales is " << lowest << std::endl;
}
