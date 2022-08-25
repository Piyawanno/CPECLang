# Hello World

The most basic and simplest exercise for C Programming language.

## Compile & Run

For Linux & GCC user just run command :

```bash
gcc Hello.c -o Hello
./Hello
```

## Returning Value of Main

The `main()` function can return error value of the written program.
From C99 standard, if `main` returning 0, it means the program can run properly,
otherwise, there is something wrong with the result, but the program can
still run to the end. In this folder, there is a Python script, which can
demonstrate this.:

```bash
python HelloCaller.py
```

## Command Line Arguments

A C program can get command line arguments from users so that the behaviors
of the program can be changed according to the given argument via command line.
Try to change the command line and print it out.:

```bash
gcc Hello.c -o Hello
./Hello ARG1 ARG2
```
## Command Line Interface - CLI

With returning value and command line arguments, the C program can be used
as **Command Line Interface - CLI**. CLI has a simple **user interface**
and run straightforward. For many environments, CLI is the best option for using
software, because :

- It can be used via command line, hence it can be easily used via remote like SSH.
- It requires much less resource (CPU & RAM).
- In normal case, it is more stable than **Graphic User Interface**
- It is relatively environment independent.

However, it is not for everyone :

- It is not intuitive especially for unexperienced users.
- In normal case, it does only one task at a time.