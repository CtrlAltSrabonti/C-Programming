## Swap integer
- The goal is *NOT*
  1. to compute a number
  2. to produce a new value
- The goal *IS*
  1. To change existing variables in the caller
*IMPORTANT*
- If a function's purpose is to modify existing variables, it should usually return 'void'
  1. swap
  2. modify
  3. update
- If its purpose is to compute a value, it should return that value
  
## Simple walkthrough How call by value and call by reference works
- x and y as two boxes in my room (main function)
- Their values as what's inside the boxes

### 1.Version 1:
- Box A has 5, Box B has 6
You write down the numbers on paper and swap the numbers on paper.
--- Your boxes at home stay the same

### 2. Version 2:
Because the function receives the addresses of (main's) x and y, it can change the values stored inside the boxes
    
