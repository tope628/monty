# Monty
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Table of Contents
* [Prerequisites](#prerequisites)
* [Installation](#installation)
* [Usage](#usage)
* [Functionallity](#functionallity)
* [Authors](#authors)
* [Acknowledgments](#acknowledgments)

### Prerequisites
* Ubuntu 14.04 LTS
* gcc 4.8.4 (-Wall, -Werror, -Wextra, and -pedantic flags)

## Installation
Clone the repository with the following command:
```
git clone https://github.com/tope628/monty.git
```

Compile the files using:

```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

## Usage 
### Example bytecode file
```$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
```
To start monty and intepret a file:
```sh
./monty bytecodes/000.m
```
### Functionallity
The following functions are handled with `monty`:
* `pint`: prints the value at the top of the stack, followed by a new line.
* `pall`: prints all the values on the stack, starting from the top of the stack.
* `push`: pushes an element onto the stack/queue.
* `nop`: No operation.
* `pop`: removes the top element of the stack.
* `swap`: swaps the top two elements of the stack.
* `rotl`: Rotate the top element to the bottom.
* `rotr`: Rotate the top element to the top.
* `stack`: Change to stack mode.
* `queue`: Change to queue mode.
* `add`: Add top two operands.
* `rotl`: Divide top two operands.
* `rotl`: Modulo top two operands.
* `rotl`: Multiply top two operands.
* `rotl`: Subtract top two operands.


## Authors

* **Olatope Agboola** - [Github](https://github.com/tope628) [LinkedIn](https://www.linkedin.com/in/olatopeagboola/)
* **Anoop Macharla** - [Github](https://github.com/amacharla) [LinkedIn](https://www.linkedin.com/in/amacharla/)

## Acknowledgments

This project was completed as a student at [Holberton School](holbertonschool.com)
