#include <stdio.h>

int main () {
	// NULL terminated string 
	// NULL terminated string is the original name for the String datatype in C language.
	// \0 is a NULL terminator for the strings.
	
	// Manual construction of the NULL terminated string.
	//  ____________________________________________
	// | Array Position: 0 1 2 3 4 5 6 7 8 9 10 11 |
	// | Array Value   : H e l l o   W o r l d  \0 |
	// |___________________________________________|
	
	//  _______________________________________________________________
	// |  char     is a variable datatype.                             |
	// | string    is a variable name.                                 |
	// |  [12]     is a datatype length in bytes.                      |
	// |                                                               |
	// |                This is a char initializer.                    |
	// |  {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'}|  
	// |_______________________________________________________________|
	
	char string[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
	
	printf("The NULL terminated string is: %s \n", string);
	
	
	// Create a string using a string initializer.
	char string_variable_2[] = "Hello World";
	puts("The NULL terminated string is: ");
	puts(string);

	
	
}
