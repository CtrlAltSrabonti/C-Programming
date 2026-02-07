## Push operation

<img width="1244" height="696" alt="image" src="https://github.com/user-attachments/assets/740e28cd-b7c6-4deb-bcfa-4364216ea500" />

## Pop operation

<img width="1244" height="696" alt="image" src="https://github.com/user-attachments/assets/101bbf34-ec13-4a13-bef8-e97c2f7517e8" />

### Basic to remember to code Stack using LIFO
- 1. Stack overflow
- 2. stack underflow / Stack is empty
     
<img width="1244" height="696" alt="image" src="https://github.com/user-attachments/assets/4060e40c-c322-4977-82ce-34940ded54b3" />

## Represent stack with the help of simply linked list
### 1. Structure of the node
- We need a '*top' pointer to implement linked list
- WICHTIG: Declare the top pointer globally in the node
- Initialise '*top' = NULL which represent stack is emplty

  ```
  struct node {
       int data;
       struct node *link;
  } *top = NULL;
  

  `````
  ### 2. How does push() function in stacks

  <img width="642" height="473" alt="image" src="https://github.com/user-attachments/assets/d57cb453-caef-4ec9-93c6-fd1739b14563" />

  #### Procedure:
  - 1. Create a new node with the help of calling malloc ().
       - a. Update data part
       - b. Update link part of the created new node
  - 2. We will update the link part of the new node by the address of the 'top' pointer. So, link part of the new node will now point to the first node of the initial linked list
        
  - 3. Update the top pointer and make it point to the new node of the linked list.
       
<img width="1172" height="377" alt="image" src="https://github.com/user-attachments/assets/70a29062-3d74-4736-a781-89332b76306f" />

### 3. Complete function
<img width="1156" height="627" alt="image" src="https://github.com/user-attachments/assets/97b2eb9d-4125-4ba2-a30d-a742338f464a" />
