# fast_add
can add numbers fast

## how to use?
copy fast_add.h into your project and include whereever you need it and use the fast_add_one function if you want to add one and  
otherwise the fast_add_n function
the fast_add_one function accepts a single argument and returns the arguments number plus one
the fast_add_n function requires 2 arguments, the first being the base value and other being the value you want to add to the first one.  

## how does it work?
it uses the bitwise not operator and then negates that the reason this works is because of how two's comeplement works
lets say we have 1 which is 0000 0001 in binary  
then we bitwise not that which is 1111 1110 which is -1 in decimal  
then we negate that so we get 2  

## why is your code shit?
my code is shit because i wrote this in like 5 minutes and then decided to put it on github  
i might improve upon this in the future but for now it is how it is  
