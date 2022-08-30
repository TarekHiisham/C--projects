COMPILER := gcc

C_FILES := ../Linked_list/ADD_FA.c
C_FILES += ../Linked_list/ADD_FL.c
C_FILES += ../Linked_list/DELETE_FA.c
C_FILES += ../Linked_list/DELETE_FL.c
C_FILES += ../Linked_list/linked_list.c
C_FILES += ../Linked_list/PRINT.c


O_FILES := ADD_FA.o
O_FILES += ADD_FL.o
O_FILES += DELETE_FA.o
O_FILES += DELETE_FL.o
O_FILES += linked_list.o
O_FILES += PRINT.o

EXE_FILES := linked_list.exe

all: clean linking

build: $(C_FILES)
	@$(COMPILER) -c $(C_FILES)
linking: build 	
	@$(COMPILER) $(O_FILES) -o $(EXE_FILES)
clean:
	rm -rf *.o *.exe		


