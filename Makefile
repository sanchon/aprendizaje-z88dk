# Makefile para programilla de aprendizaje


# ----------------------------------------------------
#  Variables
# ----------------------------------------------------

# compilador y sus parametros
CC = zcc
CFLAGS = +zxansi -O2 -create-app 

#librerias a usar
CLIBS = -lndos -lmalloc 

# los objetos a compilar (se omite el .c)
COBJS = aprendizaje.o 

# los programas C 
CSRC = aprendizaje.c consola.c memoria.c sysvars.c

# el ejecutable final
COUT = aprendizaje.bin

# la cinta final 
TAPEOUT = aprendizaje.tap

#el comando para borrar temporales
RM = rm -f



# ----------------------------------------------------
#  Reglas
# ----------------------------------------------------

all:	$(CSRC)
	$(CC) $(CFLAGS) -Cz-o -Cz$(TAPEOUT) -o $(COUT) $(CSRC) $(CLIBS)


.PHONY:	clean
clean:
	$(RM) $(COBJS) $(COUT) $(TAPEOUT)
