# fast add one
can add one to any integer fast

## how to use?
copy fast_add.h into your project and include whereever you need it and use the fast_add_one function if you want to add one to anything but its fast  
theres functions for different lengths of integer, they all use a suffix of the first letter of their name for example the function for short is fast_add_ones

## how does it work?
it uses the bitwise not operator and then negates that the reason this works is because of how two's complement works
lets say we have 1 which is 0000 0001 in binary  
then we bitwise not that which is 1111 1110 which is -2 in decimal  
then we negate that so we get 2  

## why is this code shit?
this code is shit because i wrote this in like 5 minutes and then decided to put it on github  
i might improve upon this in the future but for now it is how it is  
