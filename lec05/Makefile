# you can have variables in make
CXX=g++
binaries=hello testShapes

# this is a comment

# target: ingred1 ingred2 ingred3 ...
# <TAB> step1
# <TAB> step2
# <TAB> ...

# we need hello.cpp to make hello
# hello: hello.cpp
# 	g++ hello.cpp -o hello
# ^ this can actually be done with a default make rule

# the first rule in your Makefile is special
# you can just say `make` in the terminal and it'll
# make the first rule

# testShapes.o: testShapes.cpp
# 	g++ -c testShapes.cpp
# there are also default rules for making .o files

shapes.o: shapes.cpp
	g++ -c shapes.cpp

tdd.o: tdd.cpp
	g++ -c tdd.cpp

# testShapes: testShapes.o shapes.o tdd.o
# 	g++ -o testShapes testShapes.o shapes.o tdd.o

# the below is equivalent to the above

# $@ is equivalent to the target name
# $^ is equivalent to all the ingredients

testShapes: testShapes.o shapes.o tdd.o
	$(CXX) -o $@ $^

# get rid of everything we compiled
clean:
	rm -f *.o $(binaries)