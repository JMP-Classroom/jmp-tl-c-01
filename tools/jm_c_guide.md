# JMP - C Format Guide

## Denomination

- A structure’s name must start by `s_`.
- A typedef’s name must start by `t_`.
- A union’s name must start by `u_`.
- An enum’s name must start by `e_`.
- A global’s name must start by `g_`.

- Variables and functions names can only contain lowercases, digits and ’_’ (UnixCase).
- Files and directories names can only contain lowercases, digits and ’_’ (Unix Case).
- The file must compile.
- Characters that aren’t part of the standard ascii table are forbidden.
- Any use of global variable must be justifiable.

## Formatting

- Each function must be maximum 20 lines, not counting the function’s own curlybrackets.

- Each line must be at most 80 columns wide, comments included.

- One instruction per line.

- You need to start a new line after each curly bracket or end of control structure.

- Each operator (binary or ternary) or operand must be separated by one - and onlyone - space.

- One single variable declaration per line.

- Declarations must be at the beginning of a function, and must be separated by anempty line.

- Multiple assignments are strictly forbidden.

- You may add a new line after an instruction or control structure, but you’ll haveto add an indentation with brackets or affectation operator. Operators must be atthe beginning of a line.

## Functions

- A function can take 4 named parameters maximum.
- A function that doesn’t take arguments must be explicitely pototyped with theword "void" as argument.
- You can’t declare more than 5 variables per bloc.
