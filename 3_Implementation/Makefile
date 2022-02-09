
PROJ_NAME = project.c
SRC= src/main.c\
src/project.c

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

INC=-Iinclude\

Build : $(SRC)
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

Run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

Clean:
	$(RM) $(call FixPath,*.out)