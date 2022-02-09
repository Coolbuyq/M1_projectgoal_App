
PROJ_NAME = project
SRC= src/main.c\
src/project.c\


TEST_SRC=src/project.c\
src/Test_project.c\
unity/unity.c

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
-Iunity\

Build : $(SRC) 
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm


build_test : 
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run : 
	./$(call FixPath,$(PROJ_NAME).$(EXEC))


Clean:
	$(RM) $(call FixPath,*.out)


