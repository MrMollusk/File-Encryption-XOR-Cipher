# File-Encryption
This program provides an encryption mechanism for text files. It is designed to run on any system with a C++ compiler and includes basic file handling functionality for reading plaintext and writing encrypted content.

# Prerequisites
- **Platform:** Compatible with Windows, macOS, and Linux.
- **C++ Compiler:** A modern C++ compiler (e.g., GCC, Clang, or MSVC).

# Features
- **XOR Cipher:** Encrypts plaintext using a simple XOR based encryption algorithm.
- **File Handling:** Reads input from a plaintext file and writes encrypted output to a new file.
- **Cross-Platform:** Can be compiled and executed on multiple operating systems.

# Uses
1. Place your plaintext file in the same directory as the program.
2. Change the name of the input file and the output file name in [main.cpp](./main.cpp), by default the input file is named ```input.txt``` and the output file is named ```output.txt```.
3. Run the program, and the encrypted content will be written to the output file.

The input file should contain the plaintext message to be encrypted. For example:
```
Hello World
```
After execution, the output file will contain the encrypted message. For example:
```
Ê¸Í±ºÕÎ¾Ì±
```

# Core Algorithm
- **XOR Cipher:**
  - Each character in the input text is XORed with a predefined key.
  - The same XOR operation can be used to decrypt the encrypted text.
  - This symmetric encryption method is simple and fast but suitable for scenarios where high security is not critical.
 

