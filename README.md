# 0x10: C - printf
_printf _printf is a customized implementation of the C function printf.

| Symbol | Operation |
|--|--|
| `c` | Prints character |
| `s` | Prints string |
| `%` | Prints modulus operator |
| `d` | Prints integer |
| `i` | Also prints integer |
| `h` | Converts from decimal and prints lowercase hexadecimal |
| `H` | Converts from decimal and prints lowercase hexadecimal |
| `r` | Reverses and prints string |
| `R` | Encodes and prints string using `rot13` |

## Getting Started
Quick start guide to using our version of `printf`.

### 1. Install
Run the following command:
```
$ git clone https://github.com/hig-boss/printf.git
```

### 2. BYOM
*Bring your own main file.* To use our `printf` you will need a `main.c` file to compile it with. Go ahead and try the following:
```
int main(void)
{
	_printf("%c\n", 'H');
	_printf("%s\n", "Hello");
	_printf("%d\n", 42);
	_printf("%i\n", -42);
	_printf("%r\n", "Hello");
	_printf("%R\n", "Hello");
	return (0);
}
```

### 3. Compile
Use the following command to compile
```
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```

### 4. Pat yourself on the back
Going along with our sample code above, you would hopefully see this output:
```
$ ./a.out
H
Hello
42
-42
olleH
Uryyb
$
```
