all: process_creation output simple
process_creation: process_creation.c
	gcc process_creation.c -o process_creation
output: hello.c file.c
	gcc hello.c  file.c -o output

simple: simple.c
	gcc simple.c -o simple
clean:
	rm -f process_creation output simple
