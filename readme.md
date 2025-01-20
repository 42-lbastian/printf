<h1 align="center"> ft_printf </h1>
<h4 align="center"> Because ft_putnbr() and ft_putstr() aren't enough </h4>

<h5 align="center">
  <a href="#description_id">Description</a> - 
  <a href="#usage_id">Usage</a> - 
  <a href="#tester_id">Tester</a> - 
  <a href="#warning_id">Warning</a>
</h5>


---

<h2 id="description_id"> Description of the project: </h2>

##### The goal of this project is to code a library that contain a simplified version of printf.
###### This printf manage the following conversions:
-  **%c** : print a single character
-  **%s** : print a string
-  **%p** : print pointer address (base 16)
-  **%d** && **%i** : print a decimal (base 10)
-  **%u** : print unsigned decimal (base 10)
-  **%x** : print number in lowercase (base 16)
-  **%X** : print number in uppercase (base 16)
-  **%%** : print percent sign

###### This printf manage the following flags:
-  **\*** : to pass the width-
-  **0** : pad zeros
-  **\-** : left justify
-  **.** :  crop the following conversion

---

<h2 id="usage_id"> Usage: </h2>

##### Requirements
###### This project is write in C and needs gcc  to be compiled and some standard libraries

##### Compilation (in the makefile location):
```shell
make
```
##### Usage:
###### Just include **ft_printf.h** and add libftprintf.a during compilation of your code

<h2 id="tester_id"> Tester: </h2>

##### I make my own tester it will compare ft_printf and printf with differents tests, just go to the test folder and run (don't worry about the warnings):
```shell
bash test.sh
```
##### You have 4 differents mode:
-  **v** : to test some strange stuff
-  **l** : to test the leaks of ft_printf
-  **f** : regular test of all flags and convertions, to play with precision it will ask for 3 arguments:
  	- start : a width parameter
  	- end : another width parameter
  	- pas : step between the start and end for other tests
-  **t** : run all tests (**v l f**)

##### Reading the result:
###### for **v** and **f**:
-  first look to result folder, if there is nothing, all good.
-  Else open one of the text file in result, the two last numbers are the start and the end, it will give you a line number and the error.
-  Open, in the temp folder the two file with the same numbers, named pri_ft and pri_nr
  	- ft is ft_printf and nr is printf
	- look at the line error and look what test failed
	- if you are not sure about the test who failed, you can look at the **test_ft_printf.c**, every step are print

###### for **l**, it will print on screen if there a leaks or not



<h2 id="warning_id"> Warning: </h2>

##### This ft_printf was written in a macOS environement so if you want to run it on linux, there are difference like null pointer (0x0 in macOS and (nil)) for example, but there are others. The leaks command used to test leaks in my tester exist only on macOS so this functionality will not work on linux.
