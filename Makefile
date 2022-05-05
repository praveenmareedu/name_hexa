target :  main.c  countChar.c countChar.h
	gcc main.c countChar.c -o a.out
run : target
	./a.out
clean:
	rm a.out
