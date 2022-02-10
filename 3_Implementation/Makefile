
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

 
INC=-IInclude\
-Iunity\

Build : $(SRC) 
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm


build_test : 
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm

run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

run_test : build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

staticcheck : 
	cppcheck --enable=all -iunity .

dynamic_analysis : Build
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))
	
coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	gcov -a ./$(call FixPath,$(PROJ_NAME).$(EXEC))

Clean:
	$(RM) $(call FixPath,*.out)
