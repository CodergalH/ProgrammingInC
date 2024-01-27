# Chapter 3 - Compiling and Running Your First Program

## Exercises

### [Exercise_1](./)

**Type in and run the six programs presented in this chapter. Compare the output produced by each program with the output presented after each program in the text.**

### [Exercise_2.](./)

**Write a program that prints the following text at the terminal.**
> a. In C, lowercase letters are significant.
> b. main is where program execution begins.
> c. Opening and closing braces enclose program statements in a routine.
> d. All program statements must be terminated by a semicolon.


### [Exercise_3.](./)

**What output would you expect from the following program?**
```
#include <stdio.h>

int main (void)
{
printf ("Testing...");
printf ("....1");
printf ("...2");
printf ("..3");
printf ("\n");
return 0;
}
```


### [Exercise_4.](./)

**Write a program that subtracts the value 15 from 87 and displays the result, together with an appropriate message, at the terminal.**

### [Exercise_5.](./)
**Identify the syntactic errors in the following program.Then type in and run the corrected program to ensure you have correctly identified all the mistakes.**

```
#include <stdio.h>

int main (Void)
{
INT sum;
/* COMPUTE RESULT
sum = 25 + 37 - 19
/* DISPLAY RESULTS //
printf ("The answer is %i\n" sum);
return 0;
}
```

### [Exercise_6.](./)
**What output might you expect from the following program?**

```
#include <stdio.h>

int main (void)
{
int answer, result;
answer = 100;
result = answer - 10;
printf ("The result is %i\n", result + 5);
return 0;
}
```