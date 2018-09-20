# Meu primeiro Makefile

all : HelloWorld HelloJava.sh

HelloWorld : 1-HelloWorld.cpp
	g++ -o HelloWorld 1-HelloWorld.cpp

HelloJava.sh : HelloWorld.java
	javac HelloWorld.java
	echo '#!/bin/bash' >> HelloJava.sh
	echo 'java HelloWorld' >> HelloJava.sh
	chmod ugoa+x HelloJava.sh

.PHONY: clean
clean : 
	rm HelloWorld HelloJava.sh HelloWorld.class
