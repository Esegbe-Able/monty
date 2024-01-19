This project creates an interpreter for Monty files.
The Monty interpreter reads Monty bytecode commands and performs the corresponding operations.

Here's how it works:

1. Parsing Bytecode: The Monty interpreter reads a file
containing Monty bytecode instructions.

2. Command Execution: Interpreter parses each line
of bytecode, identifies the command, and executes the
corresponding operation.

3. Stack Data Structure: The interpreter maintains a stack
to perform operations likeperforming arithmetic
operations, and more.

4. Command Implementations: The interpreter has
implementations for each Monty command. For example, if
the bytecode specifies "push 5", the interpreter will
push the value 5 onto the stack. If the bytecode
specifies "add", the interpreter will pop two values
from the stack, add them, and push the result back onto
the stack.

5. Control Flow: The interpreter handles control flow
instructions like conditionals and loops.

6. Output: During execution, the interpreter may display
values or messages based on the Monty commands and
operations.

7. Error Handling: Interpreter should be able handle
errors, for example dealing with division by zero,
trying to pop from an empty stack, or encountering
unsupported commands.

8. Memory Management: The interpreter may need to
allocate and deallocate memory for data structures
as needed.

This project was done by Esegbe and Enyonam(ALX Students)