% : %.o
	gcc $^ -o $@ -Wall
%.o : %.cpp
	gcc -c %.cpp -o %.o
