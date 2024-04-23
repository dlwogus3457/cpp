#include <iostream>

int main()
{
   const int month = 12;
   int rainfall[month];
   int count;
   
   for (count = 0; count < month; count++)
   {
       std::cout << "The total rainfall for month " << (count + 1) << " is ";
       std::cin >> rainfall[count];
   }
   
   double total = 0;
   double average;
   for (count = 0; count < month; count++)
       total += rainfall[count];
   std::cout << "The total of monthly rainfall is " << total << std::endl;
   
   average = total / month;
   std::cout << "The average of total is " << average << std::endl;
   
   int highest, lowest;
   
   highest = rainfall[0];
   for (count = 1; count < month; count++)
   {
       if (rainfall[count] > highest)
           highest = rainfall[count];
   }
   std::cout << "The highest count of rainfalls of the month is " << highest << std::endl;
   
   lowest = rainfall[0];
   for (count = 1; count < month; count++)
   {
       if (rainfall[count] < lowest)
           lowest = rainfall[count];
   }
   std::cout << "The lowest count of rainfalls of the month is " << lowest << std::endl;
}
