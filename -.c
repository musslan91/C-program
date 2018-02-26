C_COMPILER=gcc

dumbmake:TestDumbExample.c DumbExample.c unity/src/unity.c
		$(C_COMPILER) -o tddmake TestDumbExample.c DumbExample.c ../Libs/unity/src/unity.c
clean:
				-rm -f *.o
				-rm -f *.exe
run:
				./*.exe
