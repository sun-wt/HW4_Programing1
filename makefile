all: hw0401.o hw0401another.c hw0402-1.o hw0402-1another.c hw0402-2.o hw0402-2another.c hw0403.o hw0403another.c hw0404.o hw0404another.c hw0405.o hw0405another.c hw0405another1.c
	gcc hw0401another.c hw0401.o -o hw0401
	gcc hw0402-1another.c hw0402-1.o -o hw0402-1
	gcc hw0402-2another.c hw0402-2.o -o hw0402-2 -lm
	gcc hw0403another.c hw0403.o -o hw0403 -lm
	gcc hw0404another.c hw0404.o -o hw0404
	gcc hw0405another.c hw0405another1.c hw0405.o -o hw0405

hw0401: hw0401.c
	gcc -c hw0401.c -o hw0401.o
	gcc -shared hw0401.o -o libhw0401.so

hw0402-1: hw0402-1.c
	gcc -c hw0402-1.c -o hw0402-1.o
	gcc -shared hw0402-1.o -o libhw0402-1.so

hw0402-2: hw0402-2.c
	gcc -c hw0402-2.c -o hw0402-2.o
	gcc -shared hw0402-2.o -o libhw0402-2.so

hw0403: hw0403.c
	gcc -c hw0403.c -o hw0403.o
	gcc -shared hw0403.o -o libhw0403.so

hw0404: hw0404.c
	gcc -c hw0404.c -o hw0404.o
	gcc -shared hw0404.o -o libhw0404.so

hw0405: hw0405.c
	gcc -c hw0405.c -o hw0405.o
	gcc -shared hw0405.o -o libhw0405.so



	

