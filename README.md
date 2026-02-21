*This project has been created as a part of the 42 curriculum by <tbenavid>*

Description :

The goal of the project is to recode the printf function from libc.

The printf function is frequently used to display various elements to the user. It can print characters, strings, positive or negative integers, unsigned numbers, hexadecimal values, memory addresses, or even the % character.
It uses format specifiers (such as %d, %s, %x) to determine how to interpret and format the data. Finally, printf returns the total number of characters printed.

Instructions :

printf begins by scanning the string character by character. As long as it does not encounter a %, it simply prints the characters as they are. When it detects a %, it understands that this is a format specifier. It then reads the next character to determine what type of value it needs to handle:

%c → print a character

%s → print a string

%d / %i → print a signed integer

%u → print an unsigned integer

%x / %X → print a number in hexadecimal

%p → print a memory address

%% → print the % character itself

Once the type is identified, printf retrieves the corresponding argument from the list of variable parameters, converts it to the appropriate format, and prints it.

It then continues reading the rest of the string until the end.

Finally, printf returns the total number of characters printed, allowing the calling program to know how many characters were written to the screen.
