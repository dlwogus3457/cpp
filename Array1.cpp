#include <iostream>

int main()
{
    const int value = 10;
    int num[value];
    int count;
    int highest, lowest;
    
    //input values
    for (count = 0; count < value; count++)
    {
        std::cout << "Enter value "
                << (count + 1) << ": ";
        std::cin >> num[count];
    }
    
    //find the largest and smallest in the array
    highest = num[0];
    for (count = 1; count < value; count++)
    {
        if (num[count] > highest)
            highest = num[count];
    }
    
    lowest = num[0];
    for (count = 1; count < value; count++)
    {
        if (num[count] < lowest)
            lowest = num[count];
    }
    
    //display the largest and smallest in the array
    std::cout << "The largest value in the array is " << highest << std::endl;
    std::cout << "The smallest value in the array is " << lowest << std::endl;
}
