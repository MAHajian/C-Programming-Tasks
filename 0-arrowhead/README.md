# The Arrowhead Task

## Scenario

Write a program that asks the user to enter a number, and prints twice as many lines as the number inputted.

The first half of every other line contains one <mark>* </mark> character at the start, as many spaces as the number of this line (line numbers count from 0 in this task) and one<mark>* </mark> character at the end of the line. The second half is a mirror reflection of the first.

The outputted "drawing" should be similar to an arrowhead.

Your version of the program must print the same result as the expected output. To do this task, you should use two outer for loops and two inner for loops.

You shouldn't use any special formatting in the <mark>printf</mark> to print the spaces - just use the for loop.

Two exception

-  when the user inputs a number less than or equal to 1, the program doesn't print any line.
- when the user inputs a number greater than 20, the program prints only forty lines.

## Simple Input

```shell
3
```

## Expected Output

```shell
**
* *
*  *
*  *
* *
**
```
