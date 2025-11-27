# Worksheet 0

**Student:** Khaled Alotebi  
**Email:** khaled2.alotebi@live.uwe.ac.uk  
**Module:** UFCFWK-15-2 Operating Systems

## Overview

All programs were compiled and tested on the UWE remote Linux server.

The worksheet includes:

- Basic pointer tasks  
- Array pointer iteration  
- Compare function using pointers  
- File reading + sum  
- Swap using `void*`  
- Printing a 2D array  
- A simple TicTacToe implementation using `.c` and `.h`

---

## How to Compile

Example compile commands used:

```

clang -o task1 task1_pointers.c
clang -o task2 task2_compare.c
clang -o task3 task3_sum.c
clang -o task4 task4_swap.c
clang -o task5 task5_2d.c
clang -o tictactoe main.c tictactoe.c

```

---

## How to Run

Example:

```

./task1
./task2
./task3
./task4
./task5
./tictactoe

````

---

## Tasks

### Task 1 – Pointers

### Task 2 – Compare Arrays Using Pointers

### Task 3 – Sum Numbers from File

### Task 4 – Swap Using `void*`

### Task 5 – Print 2D Array


---

### TicTacToe

* `tictactoe.c` -> contains all TicTacToe functions
* `tictactoe.h` -> header file
* `main.c` -> contains `main()` to run the game

**Example usage in terminal:**

```
./tictactoe
```

* 3×3 board
* Player X / O switching
* Valid move checking
* Win/draw detection

---

## File List _ screenshots

* `task1_pointers.c` — pointer operations
<img width="973" height="130" alt="Screenshot 2025-11-27 094031" src="https://github.com/user-attachments/assets/0b1284ea-e887-407f-8acb-f6d404f485fa" />

* `task2_compare.c` — compare two arrays using pointers
<img width="963" height="88" alt="Screenshot 2025-11-27 094041" src="https://github.com/user-attachments/assets/a20d26fd-d30f-441d-ab21-67484659f480" />

* `task3_sum.c` — read numbers from `foo.txt` and print their sum
<img width="931" height="66" alt="Screenshot 2025-11-27 094051" src="https://github.com/user-attachments/assets/d2b988a7-8b8a-4306-9fd9-0c1363444fb0" />

* `task4_swap.c` — swap using `void*`
<img width="939" height="91" alt="Screenshot 2025-11-27 094059" src="https://github.com/user-attachments/assets/30a76f06-89fd-4ab7-a9d2-ab4e2c84f393" />

* `task5_2d.c` — prints a 2D array
<img width="921" height="86" alt="Screenshot 2025-11-27 094109" src="https://github.com/user-attachments/assets/bf6a91be-a5a9-4e4b-81e5-b0183a458481" />

* `tictactoe.c` — TicTacToe logic
* `tictactoe.h` — header file
* `main.c` — contains `main()` for TicTacToe
  
Win case

<img width="981" height="969" alt="Screenshot 2025-11-27 094136" src="https://github.com/user-attachments/assets/a0ed0870-8c42-4337-a101-f20fd033b147" />

Draw case

<img width="515" height="182" alt="Screenshot 2025-11-27 094146" src="https://github.com/user-attachments/assets/31933631-0a0c-4a47-9066-7f217014612b" />

Invalid Case 

<img width="713" height="391" alt="Screenshot 2025-11-27 094153" src="https://github.com/user-attachments/assets/5cd31288-c2db-422d-b1cf-ab1c02b0d9c7" />


* `foo.txt` — input numbers

---

## GitHub Repository

https://github.com/k2-alotebi/os-worksheets
