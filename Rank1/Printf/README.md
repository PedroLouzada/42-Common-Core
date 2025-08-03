# ft_printf

![ft_printf Banner](https://i0.wp.com/www.agilenative.com/wp-content/uploads/2017/01/001-Agile-Hello-World.png?fit=1745%2C1080&ssl=1)

## About the Project

ft_printf is one of the mandatory projects at 42 where I reimplemented the classic C function `printf` from scratch. This project deepened my understanding of variadic functions, format specifiers, and string formatting in C.

The goal was to create a custom version of `printf` that handles a subset of format specifiers with correct output formatting and returns the total number of printed characters. This required careful parsing of the format string and managing different data types dynamically.

---

## What I Learned

- How to handle variadic arguments with `stdarg.h`.
- Implementing parsing logic for format specifiers (`%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`).
- Converting different data types to strings and formatting them properly.
- Managing memory and buffers efficiently to print output.
- Understanding low-level I/O with `write` system call.
- Improving code modularity and reusability.
- Debugging complex edge cases in string formatting.

---

## Features Implemented

- Handling of standard format specifiers:  
  `%c` (character), `%s` (string), `%p` (pointer), `%d` and `%i` (signed integers), `%u` (unsigned integers), `%x` and `%X` (hexadecimal), `%%` (percent sign)
- Proper output formatting with correct return values (number of characters printed)
- Robust error handling and edge case coverage
- No reliance on the standard `printf` or related functions — full custom implementation

---

## Compatibility

This project was developed and tested on Linux systems. It uses only allowed C standard libraries and low-level system calls.

---

## How to Use

Clone the repository and compile with the provided Makefile:

```bash
git clone https://github.com/YourUsername/ft_printf.git
cd ft_printf
make

This will create a static library libftprintf.a and an example executable test_printf to test your implementation.
Future Improvements

    Add support for field width, precision, and flags (-, 0, etc.)

    Optimize performance and memory usage

    Expand test suite for more edge cases and invalid input handling

Final Thoughts

ft_printf was an essential step in mastering C programming, helping me understand variadic functions and advanced string handling at a deeper level. It paved the way for more complex projects and strengthened my problem-solving skills.

Feel free to explore and improve this implementation. Happy coding! 🎉
Contact

If you want to get in touch, feel free to reach out:

GitHub
Email
