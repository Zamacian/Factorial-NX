# Factorial-NX
A Nintendo Switch homebrew to calculate the factorial of a number.

Because of 2^63 being the highest number the switch supports, you can't go over 25 factorial.

Note that I made this Homebrew only to learn how to use basics of libnx and isn't really usefull.
You can look at the source code to also learn how to make Homebrews.
# Commands :
To make things easier, let's just say that the number you want to factor is called Jeffrey
  - a to add 1 to Jeffrey
  - b to substract 1 to Jeffrey
  - x or y to set Jeffrey to 0
  - any trigger (r/l/zr/zl) to clear the console
  - Minus (-) to factor Jeffrey
  - Plus (+) to exit the Homebrew
  - Everything else will show you the 'help' menu
# What to know :
This Homebrew only uses the libnx library (if we don't count <iostream>)
The letter showed before the value of the number is what executed the action :
  - (A) means you added 1 by pressing A
  - (B) means you substracted 1 by pressing B
  - (X) or (Y) means you set the number to 0 by pressing X or Y
  - (S) means that the system automatically changed the number value/ printed the number value
  
Feel free to copy and distribute it as much as you want without any legal restrictions.

Could be optimized but then the code would be very ugly.
# Pictures :
Main look and operation :

![FactorialNXImg3](https://user-images.githubusercontent.com/124669534/235327250-d9a90377-bb9d-426d-8aa5-2c68ad6c1ccf.jpg)

What happens when you press A, B and X :

![FactorialNXImg1](https://user-images.githubusercontent.com/124669534/235327209-e8877291-833c-49b2-aab1-91b3af10f83f.jpg)

Help menu :

![FactorialNXImg2](https://user-images.githubusercontent.com/124669534/235327242-f34e3f68-9298-4607-aaf0-122e70964660.jpg)
