# **0x18. C - Dynamic libraries**

Dinamic is a library that does not include functions insteed in includes there addresses. This library only runned once when a file is compiled. Also, we have to compile all files without linking them.

## **Process Of Creating Dinamic Licrary**
first, we need to create a file:
    ```hello.c```

secondly, we need to create a .o files extension
we do this by;
    ```gcc -c -fpic hello.c```
In your current directory, when you ```ls``` working directory you will find .o file 
```-c``` ensures that all .o files are not linked
```-fpic``` ensures that all files are position dependent

thirdly, After creating .o files we have to create dinamic library.
we do this by;
    ```gcc -shared *.o -o libfile.so```
Here, we create an executable file with extension .so.
```-shared``` ensures that all files compiled are compiled into dinamic library
```-o``` will store the object code compiled to a file specified
```*.o``` ensures that all files with .o extension are compiled

# **How to use dinamic Libraries**

The point of creating a dynamic library is to use it with other programs. You can compile your code as follows:

 ```gcc -L test_code.c -lAlx -o test_code```
In the above command it is worth noting that your source code, ```test_code.c```in this case, needs to be listed before the ```-l``` flag. The expression,``` -l```combined with ```Alx``` tells the compiler to look for a dynamic library called ```libAlx.so```, while the ```-L``` flag tells the compiler to look in the current directory for the library file. This is why it is important to use the standard format for naming that I described earlier. For instance if ```test_code.c``` was the following:
#include "Alx.h"
int main(void)
{
      _puts("Hello World!");
      return (0);
}
Typing and executing gcc -L test_code.c -lholberton -o test_code would generate an executable file called test_code. In order to accomplish this, the compiler looks through the library that is specified with the -l flag for the _puts function object code. Executing test_code like so: ./test_code would give us the following output: Hello World!. Now that you know how to create and use dynamic libraries, go and conquer the world!
