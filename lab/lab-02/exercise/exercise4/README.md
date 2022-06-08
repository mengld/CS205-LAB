# question
* Write a program to find the integer range of your computer.
* Find the interval [MIN, MAX] such that integer operations within this range is correct, while operations outside this range might be incorrect.
* Suppose X is the maximum integer for type “int” on your computer, what is the result of X+1?
* Suppose Y is the minimum integer for type “int” on your computer, what is the result of Y-1?
* Are they the same with the value you have expected?

# solution
the max value meet 0111...111
the min value meet 1000...000
max + 1 = min

why not int? why unsigned int?
> for int, >> is with signed(1), e.g. -1 >> 1 is still -1