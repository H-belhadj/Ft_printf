Ft_printf 📟
Welcome to the Ft_printf repository! If you've ever wondered what it’s like to create your own printf function from scratch, you’re in the right place. This project is part of the 42 curriculum and will teach you how to reimplement one of C’s most iconic functions, all while building character (and debugging skills 🐞).

Table of Contents
About
Features
How It Works
Usage
Installation
Memes
Contributing
About 🚀
The Ft_printf project challenges you to recreate the printf function in C, supporting a wide variety of formatting options. It’s an exercise in string manipulation, variadic functions, and (let’s be honest) patience.

Why? 🤔
Because we can! And because 42 School makes sure we understand how things work under the hood instead of just using pre-built tools.

Features 🌟
Supports basic conversion specifiers:
%c, %s, %d, %i, %u, %x, %X, %p
Handles flags:
-, +, #, 0,
Bonus Features:
Some advanced formatting options included!
How It Works ⚙️
At the heart of ft_printf is the variadic functions feature of C. This allows us to handle a variable number of arguments, parsing and formatting them dynamically.

First, we parse the input format string.
Then, we identify specifiers and flags.
Finally, we generate and print the output with the corresponding values.
"What could go wrong?" - Every programmer before testing.

Usage 🛠️
Clone this repository:

bash
Copy
Edit
git clone https://github.com/H-belhadj/Ft_printf.git
cd Ft_printf
Compile the library:

bash
Copy
Edit
make
Include it in your project:

c
Copy
Edit
#include "ft_printf.h"
ft_printf("Hello, %s! Your score is %d.\n", "Haitam", 42);
Run your program and bask in the glory of your custom printf:

bash
Copy
Edit
./your_program
Installation 📥
You know the drill:

Clone the repo.
Compile using make.
Link the library to your own C program.
Still confused? It's okay—here's a flowchart:


Memes 😄
When you finally pass all tests:

Debugging variadic arguments:

Realizing you missed a flag:

After submitting the project:

Contributing 🤝
Feel free to fork the repository and submit a pull request if you’d like to add features or improve the code.

Got a bug? Open an issue! Just keep the debugging memes coming.

License 📜
This project is licensed under the MIT License. Check out the LICENSE file for more details.

Enjoy coding your way to glory! 🏆✨
