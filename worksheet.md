
# Computer Science I 
## Lab 2.0 Worksheet

Name(Abdullah) and Login(s):



1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.




2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?




3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.




4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range:
  Manimum value for signed char: -128 
  Maximum value for signed char:127
  Manimum value for unsigned char:0
  Maximum value for unsigned char:255
  Manimum value for unsigned char:-128
  Maximum value for unsigned char:127
  size of signed char:1 byte
* `short int`
  size:2 bytes
  range:-32768
   Manimum value for signed short:-32768
  Maximum Value for signed short: 32767
  size of signed short:2 bytes

  Manimum value of unsigned short:0
  Maximum value of unsigned short:65535
  size of unsigned short:2 bytes
* `int`
  size:4 bytes
  range:-2147483648 to 2147483647

  Minimun value for signed int:-2147483648
  Maximum value for signed int: 2147483647
  size of signed int: 4 bytes

  Minimum value for unsigned int:0
  Maximum value for unsigned int: 4294967295
  size of unsigned int : 4 bytes

 
* `long int`
  size: 4 bytes
  range:-2147483648 to 2147483647
  Manimum value for signed long:-2147483648
  Maximum value for singned long:2147483647
  size of singned long: 4 bytes

  Minimum value for unsigned long:0
  Maximum value for unsigned long: 4294967295
  size of unsigned long: 4 bytes
  
* `float`
  size:4 bytes
  range: 7 digits of accuracy
* `double`
  size:8 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25

  b) $1,000.52

  c) $968,410.12



6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?




7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?


b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?


c) Fix the program by editing the `area.c` source
code so that the program produces correct results.
