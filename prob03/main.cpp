// Name: Timothy Lee
// This program calculates the tax and tip on a restaurant bill.
#include <iostream>

int main ()
{
  //Declare required variables.
  double meal_cost, tax, tip;

  //Get the meal cost.
  std::cout << "Welcome to the Restaurant Bill Calculator!\n";
  std::cout << "What is the total meal cost? $";
  std::cin >>  meal_cost;

  //Calculate tax and tip.
  tax = meal_cost * 0.0775;
  tip = meal_cost * 0.2;

  //Show tax, tip, and total bill
  std::cout << "Tax:"<<"\t\t$" << tax <<"\n";
  std::cout << "Tip:"<<"\t\t$" << tip <<"\n";
  std::cout << "Total Bill:"<<"\t$" << meal_cost + tax + tip <<"\n";

  return 0;
}
