# question
Compile and link the following multiple files into one executable file, run the file.What is the result? Is that reasonable? Correct the error(s) and run again.

# solution-1
1. `g++ -c mul.cpp`
2. `g++ -c main.cpp`
3. `g++ main.o mul.o -o mul`
4. `./mul`
> test error! 
> input 1, 2, the output is "The result is -131058912"

why?
> the error is duplicate `cin >> a` in main.cpp

# solution-2
1. g++ main.cpp mul.cpp -o mul
2. ./mul
> it is a shorthand for the above commands in solution-1