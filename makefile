heart: add.o heart.c
	gcc  $^ -o $@ -g
add.o:add.c
	gcc -c add.c
clean:
	rm add.o heart
