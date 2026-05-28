# Binary-Converter
A program that allows you to convert text from Unicode to Binary, and vice versa!


```
Enter mode: [1/2] | q[uit]
1. Binary -> Text
2. Text   -> Binary
--> 2
```

## Binary -> Text

```
Enter binary 
--> 0100100001100101011011000110110001101111001000000111011101101111011100100110110001100100
Hello world
```


## Text -> Binary

```
Enter text (use ':q' to finish)
--> Hello world
:q
0100100001100101011011000110110001101111001000000111011101101111011100100110110001100100
```

# Build
Run this command in the project's directory:
```
make && ./binary-converter

# or directly with
make run

# or build with g++
g++ binary_converter.cpp -o binary-converter && ./binary-converter
```