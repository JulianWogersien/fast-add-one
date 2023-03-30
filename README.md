# fast add one
can add one to any integer fast

## how to use?
copy fast_add.h into your project and include whereever you need it and use the fast_add_one function if you want to add one to anything but its fast  
the fast_add_one function accepts a single argument and returns the arguments number plus one its also inline because no extra function calls.  
also provides functions for different lengths of integer these are simply with a different signature but not a different name so theres nothing that makes it difficult  

## how does it work?
it uses the bitwise not operator and then negates that the reason this works is because of how two's complement works
lets say we have 1 which is 0000 0001 in binary  
then we bitwise not that which is 1111 1110 which is -2 in decimal  
then we negate that so we get 2  

## why is this code shit?
this code is shit because i wrote this in like 5 minutes and then decided to put it on github  
i might improve upon this in the future but for now it is how it is  
