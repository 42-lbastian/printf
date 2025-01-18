<h1 align="center"> ft_printf </h1>
<h4 align="center"> Because ft_putnbr() and ft_putstr() aren't enough </h4>


---

<h2> Description of the project: </h2>
##### The goal of this project is to code a library that contain a simplified version of printf.
###### This printf manage the following conversions:
1. **%c** : print a single character
2. **%s **: print a string
3. **%p** : print pointer address (base 16)
4. **%d** && **%i** : print a decimal (base 10)
5. **%u** : print unsigned decimal (base 10)
6. **%x** : print number in lowercase (base 16)
7. **%X** : print number in uppercase (base 16)
8. **%%** : print percent sign

###### This printf manage the following flags:
1. **\*** : to pass the width
2. **0** : pad zeros
3. **\-** : left justify
4. **.** :  crop the following conversion

---

## Usage:
##### Requirements
###### This project is write in C and needs gcc  to be compiled and some standard libraries

##### Compilation (in the makefile location):
```shell
make
```
##### Usage:
###### Just include **ft_printf.h** and add libftprintf.a during compilation of your code

<h2> Tester: </h2>
##### I make my own tester it will compare ft_printf and printf with differents tests, just go to the test folder and run (don't worry about the warnings):
```shell
bash test.sh
```
##### You have 4 differents mode:
1. **v** : to test some strange stuff
2. **l** : to test the leaks of ft_printf
3. **f** : regular test of all flags and convertions, to play with precision it will ask for 3 arguments:
	1. start : a width parameter
	2. end : another width parameter
	3. pas : step between the start and end for other tests
4. **t** : run all tests (**v l f**)

##### Reading the result:
###### for **v** and **f**:
1. first look to result folder, if there is nothing, all good. 
2. Else open one of the text file in result, the two last numbers are the start and the end, it will give you a line number and the error.
3. open, in the temp folder the two file with the same numbers, named pri_ft and pri_nr
	1. ft is ft_printf and nr is printf
	2. look at the line error and look what test failed
	3. if you are not sure about the test who failed, you can look at the **test_ft_printf.c**, every step are print

<h2> Warning: </h2>
##### This ft_printf was written in a macOS environement so if you want to run it on linux, there are difference like null pointer (0x0 in macOS and (nil)) for example, but there are others. The leaks command used to test leaks in my tester exist only on macOS so this functionality will not work on linux.