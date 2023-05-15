# ESE_124_Final_Project_Stack info
Contributors: Meicheng, Leo, Charleson, Sabreen

push Funtion
------------
Type: Void
Input: x, y

Checks if stack is full by comparing MAX_SIZE-1 to top
Prints Overflow
Otherwise, 
  increase value of top by 1
  Push x, y, values into VA_Memory.x and VA_Memory.y at top
  
pop Funtion
------------
Type: VA_Memory
Input: Void
 
Checks if Stack is empty or top==-1
Otherwise,
  decrement top
  return memory at top+1
 
peek Function
-------------
Type: VA_Memory
Input: Void

Returns VA_Memory at top, does not change stack

clear Function
--------------
Type: Void
Input: Void

While VA_Memory is not empty
  pop VA_Memory
  
CWL/CWR/CWD/CWU Function
------------------------
Type: Void
Input: Maze array

m=0
Check each space between ant and wall
  if there is a pheremone, flag m spaces away in VA_Action
  set x direction to 1 (itch check)
 Else
  increment m
  
mark Function
-------------
Type:Void
Input: Array

Current location of ant is marked with an x
Input Array at current x, current y = 'x'

move_F/move_B/move_R/move_L Function
------------------------------------
Type: int
Input: Maze array

if there is no wall in a given direction, increment num_step
VA_Action current location is updated in given direction
checks good deed
