
PROJ_NAME = project.c
SRC = project.c main.c 

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

build : project.c main.c 
	gcc main.c project.c -lm -o project.out
run : build
	./project.out
clean :
	rm -rf *.o *.out *.i *.s