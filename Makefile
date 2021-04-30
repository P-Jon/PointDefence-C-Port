CC = gcc

IDIR = include/
LDIR = lib/
MAIN = PointDefence/main.c

FLAGS = -O1
LIBS = -lraylib -lopengl32 -lgdi32 -lwinmm

all:
	$(CC) $(MAIN) -o PointDefence.exe $(FLAGS) -I $(IDIR) -L $(LDIR) $(LIBS)