CC = gcc

IDIR = include/
LDIR = lib/
MAIN = PointDefence/main.c

CORE_DIR = PointDefence/core
CORE_FILES = $(CORE_DIR)/game.c

GUI_DIR = PointDefence/gui

PLAYER_DIR = PointDefence/player


FLAGS = -O1
LIBS = -lraylib -lopengl32 -lgdi32 -lwinmm

all:
	$(CC) $(MAIN) $(CORE_FILES) -o PointDefence.exe $(FLAGS) -I $(IDIR) -L $(LDIR) $(LIBS)