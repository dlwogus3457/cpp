#include <iostream>

int main()
{
    const int k = 4;
    int number[k] = {5, 10, 15, 20};
    int n = 10;
    
    for (int index = 0; index < k; index++)
    {
        if (number[index] > n)
            std::cout << number[index] << std::endl;
    }
}
