# Lab3
// Kyle Leadbetter
// COSC 2030

2. The sum operation works perfectly with a short until you enter 256, at which point the value becomes negative. ie 
f(255) = 32640 f(256) = -32640 The sum should never be negative, so an easy check for overflow would to see if the result is less than zero, or you could check for valid inputs knowing the upper bound of inputs

3. The operation performs much the same way as the short operation, but with much larger numbers. This does not overflow until after f(65535) = 2,147,450,880, f(65536) = -2,147,450,880. SImilar measure to regulate the size of the input or the sign of the output could be taken. On reflection input size regulation wold be best becauuse when you double the size of the first input that overflows the operation(512 and 131,072 respectively) the sign wraps back around to be positive.

4. The maximum input in this case is 34, after that the result is infinity. A check to see if the result is infinity would be an easy solution, or input monitoring again.

5. Using a double gives us a maximum valid input of 170.

6. Can't find the equation? it's not in the email or the instructions. I can perform this step afterwards but I cant find the equation now.

7.The error appears to occur in the number 3.4, which visual studio recognizes by default as the double (3.999999999999911), truncating it to a float which has less decimals of precision would technically cause a loss of precision.

8. After changing the type to a double the code runs as it should, and returns 3.4-4.2 even though it's technically a much more precise number that is rounded up.
