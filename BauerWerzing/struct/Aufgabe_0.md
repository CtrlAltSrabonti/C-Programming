Chatgpt https://chatgpt.com/share/6986c730-af60-8002-8361-47634a958e0d
- Aufgabe 0: https://chatgpt.com/share/69885042-f2e8-8002-a9d5-39f4990d80d0
  
<img width="962" height="686" alt="image" src="https://github.com/user-attachments/assets/8aff89fb-6b13-4fec-afcb-5ae52c157a34" />

# Implementation
## 1️. You must understand struct + pointers

<img width="1193" height="663" alt="image" src="https://github.com/user-attachments/assets/f151bbdf-654f-4b09-91e5-d716dbf290a2" />

## 2. You must know what a STACK (LIFO) mean

<img width="909" height="579" alt="image" src="https://github.com/user-attachments/assets/f6ccd37e-3d0f-4de7-81dd-3748b4a882fc" />

## 3. You must understand function contracts
You are GIVEN the function headers:
<img width="1083" height="715" alt="image" src="https://github.com/user-attachments/assets/6cec3a14-9bac-4ca0-b672-a88e4464fcec" />

### ablegen Function purpose (in words)
- ablegen creates a new node, puts the given character into it, links it to the current top node, and returns the new node as the new top of the stack.
  
#### Procedure
1.  Declare a pointer to a new node. This pointer will later point to the node that is pushed onto the stack.
2.  Allocate memory for one new node on the heap.
3.  Check whether memory allocation failed. If no memory is available, terminate the program.
4.  Store the value x in the data field of the new node.
5.  👉 Link the new node to the previous top node.
This line is what enforces the LIFO (stack) behavior.
6. Return the new node so it becomes the new top of the stack.
   
### entnehmen Function purpose (in words)
- Remove the top node from the stack, return its value, and update the top pointer.
  
#### Procedure:
1. Declare a pointer to a temporary node. This node will help store the current top node during removal.
2. Check whether the stack is empty. If there is no node on the stack, nothing can be removed.
3. Store the current top node in the temporary pointer help.
4. Move the top pointer to the next node in the stack. The second node now becomes the new top.
5. Detach the removed node from the stack
(optional, but makes the logic clear and safe).
6. Copy the data from the removed node into the variable provided by the caller.
7. Release the memory of the removed node.
8. Return the new top node of the stack.
   
###  empty ()
returns true when top == NULL

## 4. You must know dynamic memory (malloc / free)
<img width="899" height="308" alt="image" src="https://github.com/user-attachments/assets/9fa641c5-c081-4a15-bf5c-708a80c002a3" />

## What is main() doing overall?
### It tests all stack operations in the correct order:
1. test empty stack

2. test push (ablegen)

3. test stack order (LIFO)

4. test pop (entnehmen)

5. test empty again
   
#### Let's start
1. Create an empty stack
- top → NULL
- This represents an empty stack.
  
2. Define test data
- The word "gurt" is used as test input data.
<img width="1180" height="390" alt="image" src="https://github.com/user-attachments/assets/2fe9b17e-9305-4eaa-b42b-a9634f37f306" />

3️. Test printing an empty stack
- This checks:

    - a) empty detection

    - b) no crash on empty list

4. Test push (ablegen)
  
   ```
   for (i = 0; i < strlen(wort); i++)
    top = ablegen(top, wort[i]);

   ```
  <img width="988" height="637" alt="image" src="https://github.com/user-attachments/assets/d08c0dbe-4a90-4059-832d-b8a0432c1a3a" />


5.  Test stack content after pushes

- After pushing the characters of "gurt" onto the stack, the top element is 't', since it was pushed last.
  
6. Test pop (entnehmen)
   
   ````
   while (!empty(top)) {
    top = entnehmen(top, &x);
    printf("entnehme: %c\n", x);
   }

   ````
<img width="852" height="504" alt="image" src="https://github.com/user-attachments/assets/78a8a4c0-c6f1-4a0a-88d3-a278c3a1431d" />


7. Test empty stack again
- Confirms:
   - stack is empty again

   - no memory corruption

   - top correctly updated

