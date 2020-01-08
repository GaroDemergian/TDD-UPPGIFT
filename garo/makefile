# ==========================================
#   Unity Project - A Test Framework for C
#   Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
#   [Released under MIT License. Please refer to license.txt for details]
# ==========================================

#We try to detect the OS we are running on, and adjust commands as needed
ifeq ($(OS),Windows_NT)
  ifeq ($(shell uname -s),) # not in a bash-like shell
	CLEANUP = del /F /Q
	MKDIR = mkdir
  else # in a bash-like shell, like msys
	CLEANUP = rm -f
	MKDIR = mkdir -p
  endif
	TARGET_EXTENSION=.exe
else
	CLEANUP = rm -f
	MKDIR = mkdir -p
	TARGET_EXTENSION=.out
endif

CPP_COMPILER=g++
UNITY_ROOT=../unity
TARGET_BASE1=all_tests
TARGET_BASE2=calculator

TARGET1 = $(TARGET_BASE1)$(TARGET_EXTENSION)
TARGET2 = $(TARGET_BASE2)$(TARGET_EXTENSION)

SRC_FILES1=\
  $(UNITY_ROOT)/src/unity.c \
  $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
  test/TestProductionCode.c \
  test/test_runners/TestProductionCode_Runner.c \
  src/CalculatorFunctions.cpp \
  test/test_runners/all_tests.c

SRC_FILES2=\
  src/CalculatorFunctions.cpp \
  src/main.cp  

RED = \033[1;31m
GREEN = \033[1;32m
BLUE = \033[1;34m
YELLOW = \033[1;33m
NC = \033[1;0m

INC_DIRS=-Isrc -I$(UNITY_ROOT)/src -I$(UNITY_ROOT)/extras/fixture/src

.PHONY: all clean test
all: clean test
test:
	$(CPP_COMPILER) -x c $(INC_DIRS) -x c++ $(SRC_FILES1) -o $(TARGET1)
	@echo "$(YELLOW)\nCompiling...\n$(NC)"
	@echo "$(RED)Linking...\n$(NC)"
	@echo "$(GREEN)Done!\n$(NC)"
	@echo "$(BLUE)Running...\n$(NC)"
	./$(TARGET1) -v
prog:
	$(CPP_COMPILER) $(SRC_FILES2) -o $(TARGET2)
	@echo "$(YELLOW)\nCompiling...\n$(NC)"
	@echo "$(RED)Linking...\n$(NC)"
	@echo "$(GREEN)Done!\n$(NC)"
	@echo "$(BLUE)Running...\n$(NC)"
	./$(TARGET2)	
clean:
	$(CLEANUP) $(TARGET1) $(TARGET2)
ci: CFLAGS += -Werror
ci: default