PROJ_NAME = ProductManagement
SRC = SRC/Productmanagement.c\
SRC/add.c\
SRC/delete.c\
SRC/edit.c\
SRC/read.c\
SRC/search.c\
SRC/sell.c\
Test/Pmanagement.c\

TEST_SRC = Test/test_product.c\
Test/Pmanagement.c\
unity/unity.c\

ifdef os
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

INC = -Iinc\
-Iunity\


Build:
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))
run:Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

Build_test:
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))
run_test:Build_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

staticcheck:
	cppcheck --enable=all -iunity .
dynamiccheck:
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))
coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	gcov -a ./$(call FixPath,$(PROJ_NAME).$(EXEC))