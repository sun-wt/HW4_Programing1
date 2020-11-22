all: hw0401.o hw0401another.c hw0404.o hw0404another.c hw0405.o hw0405another.c
	gcc hw0401another.c hw0401.o -o hw0401
	gcc hw0404another.c hw0404.o -o hw0404
	gcc hw0405another.c hw0405.o -o hw0405

hw0401: hw0401.c
	gcc -c hw0401.c -o hw0401.o
	gcc -shared hw0401.o -o libhw0401.so

hw0404: hw0404.c
	gcc -c hw0404.c -o hw0404.o
	gcc -shared hw0404.o -o libhw0404.so

hw0405: hw0405.c
	gcc -c hw0405.c -o hw0405.o
	gcc -shared hw0405.o -o libhw0405.so



	

