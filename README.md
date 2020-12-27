# cinmsg
Some console input functions for c++ with a user prompt built in similar to python's input function. 

Usage:
Make sure to include the header file cinmsg.h.
There are 2 versions of each off the 5 functions; One keeps the cursor on the same line as the prompt, the other goes to the next line.

The 5 functions are each for a specific data types: int, string, float, double and long in this version. I will add more in following versions to contain all the standard data types for c++.

All of the functions take 1 or 2 parameters depending on the format you need. The first parameter is manditory; a string literal in double quotes. The second parameter is optional; if you would like the cursor on a new line add a comma and then a 1 after your string, otherwise you can just put in the string and the cursor will remain on the same line. 

cinmsg() works similar to the built in std::cin, the returned data can be saved to a variable, printed to the console etc.

Here are the functions with usage examples:

intmsg() - for integers
int myInt = intmsg("Prompt Goes Here"); - Cursor on same line as prompt
or
int myInt = intmsg("Prompt goes here", 1); - Cursor on new line below prompt

strmsg() - for strings
string myStr = strmsg("Prompt Goes Here");
or
string myStr = strmsg("Prompt Goes Here", 1);

fltmsg() - for floating point numbers
float myFloat = fltmsg("Prompt Goes Here");
or
float myFloat = fltmsg("Prompt Goes Here", 1);

dblmsg() - for doubletype numbers
double myDbl = dblmsg("Prompt Goes Here");
or
double myDbl = dblmsg("Prompt Goes Here", 1);

lngmsg() - For long integers
long myLong =  lngmsg("Prompt Goes Here");
or
long myLong =  lngmsg("Prompt Goes Here");


I am new to programming so I would appreciate keeping that in mind should you wish to comment or provide feedback, any helpful feedback is welcome and appreciated. Feel free to use these functions in your own code if you find them useful, I don't need any credit for it. Feel free to modify them to suite your needs. If you are able to improve them and are willing to share the improvements with me so I can learn I would appreciate that.

Paul, Dec 26 2020


