CC = gcc
CFLAGS = -c -Wall -Wextra -Werror -lm

all : build

build : data_io.o data_stat.o data_process.o sort.o decision.o main_executable_module.o
	$(CC) -o Quest_3 -lm data_io.o data_stat.o data_process.o sort.o decision.o main_executable_module.o

main_executable_module.o : main_executable_module.c ../data_libs/data_io.h ../data_libs/data_stat.h ../data_module/data_process.h sort.h ../yet_another_decision_module/decision.h
	$(CC) $(CFLAGS) main_executable_module.c

data_io.o : ../data_libs/data_io.c ../data_libs/data_io.h
	$(CC) $(CFLAGS) ../data_libs/data_io.c

data_stat.o : ../data_libs/data_stat.c ../data_libs/data_stat.h
	$(CC) $(CFLAGS) ../data_libs/data_stat.c

data_process.o : ../data_module/data_process.c ../data_module/data_process.h
	$(CC) $(CFLAGS) ../data_module/data_process.c

sort.o : sort.c sort.h
	$(CC) $(CFLAGS) sort.c

decision.o : ../yet_another_decision_module/decision.c ../yet_another_decision_module/decision.h
	$(CC) $(CFLAGS) ../yet_another_decision_module/decision.c

clean:
	rm -rf *.o build