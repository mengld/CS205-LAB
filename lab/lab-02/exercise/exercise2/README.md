# question
sizeof operator returns the size, int bytes, of a type or a variable
Compile the following program, what are the warnings? How to correct them?

# analytics
* gcc main.c
get error: 
> warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ >  [-Wformat=]

the return type of sizeof is size_t, it may be defined differently in different machines
the output placeholders need to be specifield as `%ld` or `%lu`