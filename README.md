# mktex

This is my personal script for setting up latex templates on Unix/BSD compliant
operating systems. 

## Installation

Compiling the make script is necessary. to do so simply run the command in
project root:

```bash
cc build.c -o make
make
```

If any changes is made to build.c, recompilation is `not` necessary.

## Usage

Run the binary:
```bash
./mktex -d {directory_name}
```
