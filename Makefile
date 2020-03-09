GCC=gcc -g -fsanitize=address -I /home/aaa/PJ/debug/includes

LIB=/home/aaa/PJ/debug/db_lib/src/*.c
LIB_MAIN=/home/aaa/PJ/debug/db_lib/main/db_lib_main.c

REFRACT=/home/aaa/PJ/debug/db_refract/src/*.c
REFRACT_MAIN=/home/aaa/PJ/debug/db_refract/main/db_refract_main.c

lib :
	$(GCC) $(LIB) $(LIB_MAIN)

refract :
	$(GCC) $(LIB) $(REFRACT) $(REFRACT_MAIN)