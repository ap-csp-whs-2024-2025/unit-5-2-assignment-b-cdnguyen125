[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=17671160)
# unit-4-5-assignment-b

## To compile code
All code must be compiled before you can run it.  To compile means that you are converting your C++ code into a language that the computer can understand (e.g., binary).  To compile C++ code, run the following command in a terminal:
```
g++ fileName.cpp -o outFileName
```
This tells the C++ compiler to compile your file named `fileName.cpp`, and output it (`-o`) as a file named `outFileName`.

## To run code
After you have compiled the code, run your output file by running
```
./outFileName
```

## Compile and Run Example
Suppose I have a file named `classwork.cpp`.  I compile and run the file by doing
```
g++ classwork.cpp -o output
./output
```

# Instructions
Do the following in the file named `homework.cpp`.  Your goal for this program is to create sections of code that will perform different outputs with the list called, names which contains the following values - `{"Peter", "Bruce", "Steve", "Tony", "Natasha", "Clint", "Wanda", "Hope", "Danny", "Carol"}` and the list called numbers which contains the following values - `100, 50, 10, 1, 2, 7, 11, 17, 53, -8, -4, -9, -72, -64, -80`. At the beginning of your program, add in any comments and create the two lists. Then create the following:

1. A loop that will output every other name in the names list.
2. A loop that will output only the positive numbers in the numbers list.
3. A loop that will output the sum of all the values in the numbers list.
4. A loop that will output only the numbers that are odd.
5. A loop that will output only the names that come before "Thor" in the alphabet from the names list.
6. A loop that will find the maximum or minimum value in the numbers list. This algorithm requires an additional variable that is assigned to the first element in the list. Then, in a loop compare each element to the variable. If the element is > (for max) or < (for min), assign the variable to the element. After the loop, print the variable.
