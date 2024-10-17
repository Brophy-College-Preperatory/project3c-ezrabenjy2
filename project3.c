
#include <stdio.h>


//Build project 3 here: Group rizzlers is Ezra, Luke, and Michael


int main(void){
  int quarter = 25;
  int dime = 10;
  int nickel = 5;
  int penny = 1;
  int quarters = 0;
  int dimes = 0;
  int nickels = 0;
  int pennies = 0;
  int number;
    char answer = 'y';
  //
  while (answer == 'y'){
    printf("How much change is owed?\n");
  printf("Enter as a whole number. For example, print $0.41 as 41:");
  scanf("%i", &number);
  while (number > 24){
    number = number - 25;
    quarters = quarters + 1;
    }
    printf("Quarters:%i\n", quarters);
    while (number > 9){
         number = number - 10;
         dimes = dimes + 1;}
    printf("Dimes:%i\n", dimes);
    while (number > 4){
         number = number - 5;
         nickels = nickels + 1;
         }
    printf("Nickels:%i\n", nickels);
    while (number > 0){
         number = number - 1;
         pennies = pennies + 1;
         }
    printf("Pennies:%i\n", pennies);


printf("Would you like to break down any more change?");
scanf("%s", &answer);


}
 //
 return 0;
}


//divide input by 25 to print quarters. use remainder and divide by 10 to print dimes. use remainder and divide by 5 to print nickels. use remainder and print pennies.
//use while loops to subtract 25 and add 1 to quarters count, same thing with rest of numbers.

