; ----------------------------------------
; Function: _start
; Entry point of the program.
; Prints "Hello, Holberton" followed by a new line.
; Exits the program.
; ----------------------------------------

          global    main
          extern    printf
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
format: db `Hello, Holberton\n`,0
