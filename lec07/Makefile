binaries=files_3 option_a option_b translation

# remember that the first rule in a Makefile is what gets run
# when you say "make" without anything after it
all: $(binaries)

files_3: files_3.cpp
	g++ files_3.cpp -o files_3

option_a: option_a.o
	g++ option_a.o -o option_a

option_a.o: option_a.cpp
	g++ -c option_a.cpp

option_b: option_b.o
	g++ option_b.o -o option_b

option_b.o: option_b.cpp
	g++ -c option_b.cpp

translation: translation.cpp
	g++ $^ -o $@

# clean is the standard target name for the rule
# that deletes all compiled files
clean:
	rm -f *.o $(binaries)