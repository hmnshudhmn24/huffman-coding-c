# Huffman Coding in C

## Overview
This project implements Huffman Coding, a lossless data compression algorithm, in C. It constructs a Huffman tree, encodes characters based on frequency, and prints Huffman codes.

## Features
- Min-Heap based Huffman tree construction.
- Encoding of characters into binary representations.
- Efficient tree traversal for encoding.

## How to Compile and Run
```sh
gcc main.c huffman.c -o huffman
./huffman
```

## Example Input
Characters: `{a, b, c, d, e, f}`  
Frequencies: `{5, 9, 12, 13, 16, 45}`

## Output Example
```
f: 0
c: 100
d: 101
a: 1100
b: 1101
e: 111
```
