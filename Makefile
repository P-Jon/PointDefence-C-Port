CC = gcc

IDIR = include/
LDIR = lib/

FLAGS = -O1
LIBS = -lraylib -lopengl32 -lgdi32 -lwinmm

all:
	$(CC) main.c -o PointDefence.exe $(FLAGS) -I $(IDIR) -L $(LDIR) $(LIBS)