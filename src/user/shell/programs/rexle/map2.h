#ifndef MAP_2_H
#define MAP_2_H

#define map_width 24
#define map_height 24 
int world[map_width][map_height] = 
{
  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
  {1,0,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
  {1,0,0,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,0,0,0,0,0,1},
  {1,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,1},
  {1,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,1},
  {1,0,0,4,0,0,4,5,5,5,5,5,5,5,6,0,0,6,0,0,0,0,0,1},
  {1,0,0,4,0,0,4,0,0,0,0,0,0,0,6,0,0,6,0,0,0,0,0,1},
  {1,0,0,4,0,0,4,0,0,0,0,0,0,0,6,0,0,6,0,0,0,0,0,1},
  {1,0,0,4,0,0,4,3,3,3,3,3,3,2,6,0,0,6,7,7,7,7,7,1},
  {1,0,0,4,0,0,0,0,0,0,0,0,0,2,6,0,0,0,0,0,0,0,7,1},
  {1,0,0,4,0,0,0,0,0,0,0,0,0,2,6,0,0,0,0,0,0,0,8,1},
  {1,0,0,4,0,0,0,0,0,0,0,0,0,2,6,0,0,0,0,11,0,0,8,1},
  {1,0,0,3,3,3,3,3,3,2,0,0,0,2,6,0,0,0,0,0,0,0,8,1},
  {1,0,0,0,0,0,0,0,0,2,0,0,0,2,6,9,9,9,9,9,8,8,8,1},
  {1,0,0,0,0,0,0,0,0,2,0,0,0,2,0,0,0,0,0,0,0,0,0,1},
  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
};

#endif