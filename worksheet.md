
# Computer Science I 
## Lab 2.0 Worksheet

Name(Abdullah) and Login(s):



1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.

// Year is not correct due to incorrect value
Today is 2023/10/12
Your birthday was 1978/09/09
Hello, Dennis_Ritchie.  You are 45 years, 4 weeks, and 5 days old today


2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?

// Year is not correct due to incorrect value
Today is 2023/10/12
Your birthday was 1980/12/30
Hello, Bjare_Stroustrup.  You are 42 years, 40 weeks, and 5 days old today

3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.

Today is 2023/10/12
Your birthday was 2003/07/03
Hello, Abbas.  You are 20 years, 14 weeks, and 3 days old today.

Today is 2023/10/12
Your birthday was 2013/04/21
Hello, Zeeshan.  You are 10 years, 24 weeks, and 5 days old today.



4. Complete all the size and range entries below.

* `char`
  size:1 byte
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
  range:
   Manimum value for signed short:-32768
  Maximum Value for signed short:32767
  size of signed short:2 bytes

  Manimum value of unsigned short:0
  Maximum value of unsigned short:65535
  size of unsigned short:2 bytes
* `int`
  size:4 bytes
  range:

  Minimun value for signed int:-2147483648
  Maximum value for signed int:2147483647
  size of signed:4 bytes

  Minimum value for unsigned int:0
  Maximum value for unsigned int:4294967295 
  size of unsigned int : 4 bytes

 
* `long int`
  size:4 bytes
  range:
  Manimum value for signed long:-214967295
  Maximum value for singned long:2147483647
  size of singned long: 4 bytes

  Minimum value for unsigned long:0
  Maximum value for unsigned long:4294967295 
  size of unsigned long: 4 bytes
  
* `float`
  size:4 bytes
  range: 
* `double`
  size:8 bytes
  range: 


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25
 Your tootal USD is =250.250000
 Your remaing USD is = 25.225006
 Exhange rate is :25.02500
 You have 88.963882 of British Pound
 You have 14374.986328 of Japaies yen
   

  b) $1,000.52
 Your total USD: 1000410.500000
 Your remaing USD is :900369.437500
 Exhange rate is :100041.054688
 You have 355645.937500 of British Pound
 You have 57466080.000000 of Japanies yen
    
  c) $968,410.12

  Your total USD:968410.125000
  Your remaing USD is :871569.125000
  Exchange rate is :96841.015625
  You have 344269.812500 of British Japanies yen


6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?

they have not convert the 'int' is less than double data type and second reason 
we declared the all variable is a float that why the int is not convert

7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?

The value is 6.000000 but the result is not corect because we declare the base and height in double data
type the result is not correct


b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?

they give 7.500000 yes they give correct output

c) Fix the program by editing the `area.c` source
code so that the program produces correct results.

solved

