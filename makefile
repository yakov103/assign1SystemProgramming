all: mains maindloop maindrec loops loopd recursives recursived

mains: main.o libclassrec.a
	gcc -Wall -g -o mains main.o libclassrec.a -lm

maindloop: main.o libclassloops.so
	gcc -Wall -g -o maindloop main.o ./libclassloops.so -lm

maindrec: main.olibclassrec.so
	gcc -Wall -g -o maindrec main.o ./libclassrec.so -lm

loops: libclassloops.a

recursives: libclassrec.a

loopd: libclassloops.so

recursived: libclassrec.so

libclassloops.a: advancedClassificationLoop.o basicClassification.o
	 ar -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o

libclassloops.so: advancedClassificationLoop.o basicClassification.o
	 gcc -Wall -g -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o

libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	 ar -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o

libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	 gcc -Wall -g -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o  library 

main.o: main.c NumClass.h
	gcc -Wall -g -c main.c

basicClassification.o: basicClassification.c
	gcc -Wall -g -c basicClassification.c -lm

advancedClassificationLoop.o: advancedClassificationLoop.c
	gcc -Wall -g -c advancedClassificationLoop.c -lm

advancedClassificationRecursion.o: advancedClassificationRecursion.c
	gcc -Wall -g -c advancedClassificationRecursion.c

clean: 
	rm -f *.o *.a *.so mains maindloop maindrec
