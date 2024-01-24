# ft_printf

The goal of this project is pretty straightforward. It is recoded C standar library function printf().

## Requirements and functionality

• Don’t implement the buffer management of the original printf().

• The function has to handle the following conversions: cspdiuxX%

• The function will be compared against the original printf().

• The function must use the command ar to create your library.
  Using the libtool command is forbidden.

## Conversions

• %c Prints a single character.

• %s Prints a string (as defined by the common C convention).

• %p The void * pointer argument has to be printed in hexadecimal format.

• %d Prints a decimal (base 10) number.

• %i Prints an integer in base 10.

• %u Prints an unsigned decimal (base 10) number.

• %x Prints a number in hexadecimal (base 16) lowercase format.

• %X Prints a number in hexadecimal (base 16) uppercase format.

• %% Prints a percent sign