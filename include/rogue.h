#ifndef ROGUE_H
#define ROGUE_H

#include <ncurses.h>
#include <stdlib.h>

// * user defined type for player
typedef struct 
{
  int y;
  int x;
} Position;

typedef struct 
{
  Position pos;
  char ch;
} Entity;


// * user defined type for tile
typedef struct
{
  char ch;
  bool walkable;
} Tile;


// * player.c function declaration
Entity* createPlayer(Position start_pos);
void handleInput(int input);


// * extern
extern const int MAP_HEIGHT;
extern const int MAP_WIDTH;
extern Entity* player;
extern Tile** map;


// * engine.c function declaration
void cursesSetup(void);
void gameLoop(void);
void closeGame(void);

#endif