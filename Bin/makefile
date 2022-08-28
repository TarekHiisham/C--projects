COMPILER := gcc

C_FILES := ../proj/bubble_sort.c 
C_FILES += ../proj/hello.c

O_FILES := bubble_sort.o
O_FILES += hello.o

EXE_FILES := bubble_sort.exe

all: clean linking

build: $(C_FILES)
	@$(COMPILER) -c $(C_FILES)
linking: build 	
	@$(COMPILER) $(O_FILES) -o $(EXE_FILES)
clean:
	rm -rf *.o *.exe		


