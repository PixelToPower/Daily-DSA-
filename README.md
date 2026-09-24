# Daily-DSA-
Solving DSA problems each Day!


DAY 1:
1.)   Problem Statement: Write a program that takes the total number of days a person has lived as an integer input and calculates their               approximate age in years, months, and remaining days. Assume 1 year = 365 days and 1 month = 30 days.

  What I learned : Learned using modulo and integer division and get the concept of breaking a big no into smaller like from Total age to                          Years-  > months->Days.
  

2.)   Problem Statement: Write a program to accept two integer values from standard input, store them in variables 'a' and 'b', and swap              their contents using a third temporary variable 'temp'. Print the values before and after swapping.

  What I learned : Learned How to swap value of 2 or more variable.
  

3.)    Problem Statement: Write a program that initializes a boolean variable representing a system flag (e.g., 'isActive' or 'isOnline').             Simulate an event by toggling the flag to its opposite boolean state using the logical NOT operator and display the result.

  What I learned : Got the idea how toggling works! and How to get output or take input without messing with values in true or false form ny                       using "boolalpha".

  

DAY 2:
4.)   Problem Statement: Write a program that takes the original price of an item, a discount percentage, and a sales tax percentage. Calculate       the final payable price. Note: Discount is applied first to the original price, and tax is applied on the discounted price.

  What I learned : Learned new term setprecision and in this the result of one calculation was the input for another one (chain calculations).
  

5.)   Problem Statement: Write a program that checks whether an ATM cash withdrawal request is valid. A withdrawal is valid if and only if: (1)       withdrawalAmount is greater than 0, (2) withdrawalAmount is a multiple of 100, and (3) accountBalance >= withdrawalAmount +                     transactionFee ($2). Output true if valid, else false.

  What I learned : Instead of using nested if i used bool for getting true or false for set of conditions (compound logical conditions).

6.)   Problem Statement: Write a program that takes three distinct integers as input and determines the largest among them using nested if-else       statements (do not use logical AND operators '&&' or built-in max functions).

  What I learned : In this I learned the correct way to use comparision and also conditional statements (nested if-else).


  
DAY 3:

7.)    Problem Statement: Write a program to determine if a given calendar year is a leap year. A year is a leap year if it is divisible by 4,         except for end-of-century years (divisible by 100), which must also be divisible by 400.

  What I learned : From this problem I found one thing new that is -- We can use multiple conditions in one if block by using && (AND                              OPERATOR), || (OR OPERATOR).


8.)   Problem Statement:Write a program that accepts an integer N and checks if it is divisible by both 3 and 5, only 3, only 5, or neither.           Print an appropriate message for each case.

  What I learned : Practiced % (MODULO OPERATOR) operator.
  

9.)   Problem Statement:Write a program to calculate Body Mass Index (BMI = weight_in_kg / (height_in_meters ^ 2)) and classify it into               standard WHO categories using nested conditional logic: Underweight (< 18.5), Normal weight (18.5 - 24.9), Overweight (25 - 29.9), and          Obese (>= 30).

  What I learned : From this problem I learned how BMI calculator actually works on and also learned how to do division from a square value.



DAY 4:
10.)   Problem Statement:Write a program to validate whether a given date represented by Day, Month, and Year is valid on the Gregorian                 calendar. Account for differing month lengths (30 vs 31 days) and leap years for February (28 vs 29 days).

  What I learned : This problem was. a bit lengthy like it taked me more than 1 hour to solve this and I am more clear about nested if-else and                    comparision operators.
  

11.)   Problem Statement:Write a menu-driven program using a switch-case statement that takes two operands and an operator character ('+', '-',        '*', '/', '%') and performs the requested arithmetic operation. Handle division by zero gracefully.

  What I learned : Honestly this problem was easy for me because I already did these things in college , But still practice make man perfect!


12.)   Problem Statement:Write a program that takes a month number (1 to 12) and prints the corresponding season using switch-case fall-through        behavior (where multiple cases share the same code block): Winter (12, 1, 2), Spring (3, 4, 5), Summer (6, 7, 8), Autumn/Monsoon                (9,10, 11).

  What I learned : From this problem i learned new concept of switch-case fall-through behavior.



DAY 5:
13.)   Problem Statement: Write a program that takes a positive integer N from the user and prints all natural numbers from 1 up to N separated         by a space using a for loop.

  What I learned : Learned concept of for loop.


14.)   Problem Statement: Write a program that takes an integer N and prints all numbers from N down to 1 in reverse order using a while loop.

  What I learned : Learned concept of while loop.


15.)   Problem Statement:Write a program to determine whether a given integer N (N > 1) is a prime number or not. Optimize the loop to check           divisibility only up to sqrt(N).

  What I learned : learned how to check prime no. using loop.



DAY 5:
16.)   Problem Statement: Problem Statement & What to Create
      Write a program to check whether a given integer is a palindrome (reads the same backward as forward). You must reverse the integer             mathematically using loops and modulo arithmetic, without converting it to a string.

  What I learned : Learned how to reverse a number mathematically without converting it to a string — using modulo (%10) to pull out the last                      digit one at a time, and a building formula (rev = rev*10 + digit) to stack those digits into a full reversed number. 


  DAY 6:

17.)   Problem Statement: Write a program to generate and print the first N terms of the Fibonacci sequence iteratively. The series starts             with 0 and 1, and each subsequent term is the sum of the previous two terms.

  What I learned : I learned how to print Fibonacci Series and mainly I got the concept of we can also replace the variable value by new sum                       value.

DAY 7:

18.)   Problem Statement: Write a program that continuously reads integers from input in a loop and sums them up. As soon as a negative number         or zero is encountered, terminate the loop immediately using the 'break' statement and output the accumulated sum

  What I learned : I learned that if we give input like this: 10 20 30 40 , just seperated by 'space' then cpp read each no different rather                       than a full line statement and learned the break statement.


19.)   Problem Statement: Write a program that prints all integers from 1 to N, but skips all numbers that are multiples of 3 using the                'continue' statement.

  What I learned : Today i learned continue statement that is used to skip that part in loop after declaration of continue;


 20.)  Problem Statement: Write a program that prints numbers from 1 to N. For multiples of 3, print 'Fizz' instead of the number. For                 multiples of 5, print 'Buzz'. For numbers which are multiples of both 3 and 5, print 'FizzBuzz'.

 What I learned : Practiced loop and if-else statement from this problem.


 DAY 8:

 21.)  Problem Statement: Write a clean, well-documented program to implement: "Overloaded Functions for Int and Float Addition". This problem         focuses on mastering concepts in Functions. Design your program following best software practices, handling edge cases, and ensuring            optimal time and space complexity.

 What I learned : I learned what are functions ,how to implement them in code and also how to call them. Also find that they are defined                          outside of main function in cpp. and also learned the concept of overloading (same function name ,different behavior based on                   parameter type).

DAY 9:

  22.)   Problem: Write a clean, well-documented program to implement: "Pass by Value vs Pass by Reference". This problem focuses on mastering           concepts in Functions. Design your program following best software practices, handling edge cases, and ensuring optimal time and space          complexity.

  What I learned : Today i learned 2 new concept of Pass by Value and Pass by Reference , Pass by value means : it not changes the original                        value of variable in the main function when it is called instead it takes a copy and make changes to it only; Pass by                           Reference means : It makes directly changes in the original value in the main function.


DAY 10:

  23.)   Problem: Write a clean, well-documented program to implement: "Function Returning Multiple Values". This problem focuses on mastering           concepts in Functions. Design your program following best software practices, handling edge cases, and ensuring optimal time and space          complexity.
  
  What I learned : Practiced the function calling and implementing.


DAY 11:
  24.)  Problem: Write a clean, well-documented program to implement: "Menu-Driven Program Combining Multiple Functions". This problem focuses          on mastering concepts in Functions. Design your program following best software practices, handling edge cases, and ensuring optimal            time and space complexity.

  What I learned : I did multiple function calling today (calcultor).


DAY 12:
  25.)  Problem: Write a clean, well-documented program to implement: "Declare and Print an Array". This problem focuses on mastering concepts          in Arrays Basics. Design your program following best software practices, handling edge cases, and ensuring optimal time and space               complexity.

What I learned : Finally array problem has come and I solved them currently thesse are at basic level.


DAY 13:
  26.)  Problem:Write a clean, well-documented program to implement: "Access and Modify Array Elements by Index". This problem focuses on               mastering concepts in Arrays Basics. Design your program following best software practices, handling edge cases, and ensuring optimal           time and space complexity.
 
What I learned : I learned how to rpelace any num from the list via index no.
  

 

  





  


