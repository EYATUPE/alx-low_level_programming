global    main

          extern    printf
main:

  	  mov   edi, format

  	  xor   eax, eax

	  call  printf
	  
	  mov 	eax, 0

	  ret
format: db `Hello, Eyatu_Philip_Esamu\n`,0
