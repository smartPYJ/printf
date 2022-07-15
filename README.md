A readme for our printf project

Handle the following conversion specifiers:

    d
    i
    You don’t have to handle the flag characters
    You don’t have to handle field width
    You don’t have to handle precision
    You don’t have to handle the length modifiers


Handle the following custom conversion specifiers:

    b: the unsigned int argument is converted to binary



Handle the following conversion specifiers:

    u
    o
    x
    X
    You don’t have to handle the flag characters
    You don’t have to handle field width
    You don’t have to handle precision
    You don’t have to handle the length modifiers
Use a local buffer of 1024 chars in order to call write as little as possible.


Handle the following custom conversion specifier:

    S : prints the string.
    Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

Handle the following conversion specifier: p.

    You don’t have to handle the flag characters
    You don’t have to handle field width
    You don’t have to handle precision
    You don’t have to handle the length modifiers


Handle the following flag characters for non-custom conversion specifiers:

    +
    space
    #
Handle the following length modifiers for non-custom conversion specifiers:

    l
    h

Conversion specifiers to handle: d, i, u, o, x, X
