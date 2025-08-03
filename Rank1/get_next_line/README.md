# get_next_line

![get_next_line Banner](https://static2.jetpens.com/images/a/000/165/165985.jpg?auto=format&ba=middle%2Ccenter&balph=3&blend64=aHR0cDovL3d3dy5qZXRwZW5zLmNvbS9pbWFnZXMvYXNzZXRzL3dhdGVybWFyazIucG5n&bm=difference&bs=inherit&chromasub=444&fm=jpg&mark64=aHR0cDovL3d3dy5qZXRwZW5zLmNvbS9pbWFnZXMvYXNzZXRzL3dhdGVybWFyazEucG5n&markalign=top%2Cright&markalpha=30&markscale=16&q=90&usm=20&w=900&s=8991868ce62c439765e4f287a76b88bb)

## About the Project

get_next_line is a mandatory 42 project where I implemented a function that reads a file descriptor line by line. The challenge was to handle dynamic memory, buffer management, and read system calls to return each line properly, including the newline character.

---

## What I Learned

- Reading from file descriptors efficiently with `read()`.
- Managing buffers and dynamic memory allocation.
- Handling multiple edge cases like end-of-file and empty lines.
- Returning one line at a time with proper memory management.

---

## Features Implemented

- Reads one line at a time from any file descriptor.
- Returns the line including the newline character, or NULL at EOF or error.
- Manages memory allocation internally, user is responsible for freeing returned lines.
- Does not use any standard input functions like `fgets` or `getline`.

---

## How to Use

Simply include the `get_next_line.c` and `get_next_line.h` files in your project. Call the function like this:

```c
char *line = get_next_line(fd);
if (line)
{
    // use the line
    free(line);
}
```
No compilation scripts or libraries are provided; just compile together with your other sources.
## Future Improvements

- Add support for bonus features (like multiple file descriptors).
- Improve error handling and optimize buffer size.

## Final Thoughts

This project was a great exercise in mastering file input handling and dynamic memory management in C. It prepared me for more advanced system programming challenges.

## Contact

[GitHub](https://github.com/PedroLouzada)
