SRC = unity/unity.c\
src/cal.c\
test/test_cal.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = Calculator.out

# Output directory
BUILD = build

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out
$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
	
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out -lm