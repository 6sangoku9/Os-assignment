# Os-assignment
os assignment by abdelrahman mahmoud id:23102366

This repo has some testing exercises we did in the lab for our Operating Systems course

## Files

- `process_creation.c` – Here I tried creating new processes using `fork()` and exploring how parent and child processes work.  
- `simple.c` – Just a small file to test basic C stuff, nothing fancy.  
- `file.c` – Practicing reading/writing files in C.  
- `hello.c` – Classic “Hello” program to check if everything compiles fine.


## Requirements

- Linux (Ubuntu)  
- GCC installed  

## How to run

You can compile each file using `gcc`:

```bash
gcc process_creation.c -o process_creation
./process_creation

gcc simple.c -o simple
./simple

gcc file.c -o file
./file

gcc hello.c -o hello
./hello
