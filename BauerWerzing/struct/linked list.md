# Introduction to linked list:

<img width="1113" height="500" alt="image" src="https://github.com/user-attachments/assets/3dbd39fd-1886-4b34-984f-83240a384804" />

<img width="1207" height="654" alt="image" src="https://github.com/user-attachments/assets/3c4d1965-db2c-48e8-b947-e735ddfe328b" />


<img width="1040" height="574" alt="image" src="https://github.com/user-attachments/assets/0fef853b-4259-46f3-a9cb-495f0865b072" />

## How linked list is organised

  <img width="1207" height="654" alt="image" src="https://github.com/user-attachments/assets/f8583100-8f0f-4442-b355-c072d3d936eb" />
  
## How to access the first node of the linked list??

- To access the first node of the linked list, you need a "pointer"
<img width="1207" height="654" alt="image" src="https://github.com/user-attachments/assets/59d171c7-0cc3-4697-980e-860e60993cc3" />

## How single linked list direction works?

<img width="1207" height="654" alt="image" src="https://github.com/user-attachments/assets/7792d6fc-18bf-4237-a12d-c13458fd8923" />

>> IMPORTANT: Linked list is scattered allocation of memory

## How node is created in a linked list?
#### Please note that node is a self referential structure

<img width="1207" height="654" alt="image" src="https://github.com/user-attachments/assets/b14dc167-bab2-4834-a12d-b4cb52589675" />

- 1. Declare '*Head' pointer which  points to the first block of the list. *WHY needed pointer??*
     - Answer: *To access node, we need a pointer to the node*

- 2. malloc is called to allocate memory for 'struct' node / malloc help to create node
    -  *why I am calling this malloc function. malloc function is used to allocate memory at heap. Why we want to allocate memory at heap?*
    -  Answer: Heap memory allocated with malloc does not disappear when a function ends, so returning its pointer is safe, unlike stack memory which is automatically destroyed after the function finishes.
      
- 3. Address will be stored in the head pointer
 
  ````
  head = (struct node *)malloc(sizeof(struct node));
  ````

<img width="1207" height="654" alt="image" src="https://github.com/user-attachments/assets/770f38ad-24d7-4874-866d-7d61b98885cb" />

- 4. With the help of Arrow operator, we can access data using head pointer
<img width="887" height="482" alt="image" src="https://github.com/user-attachments/assets/792ee2b9-0a86-4267-b06a-18ec735087a8" />

##  Creating the first two nodes of the single linked list / Creating a Single Linked List 

<img width="1244" height="696" alt="image" src="https://github.com/user-attachments/assets/5d990fb0-6bb9-44bb-be92-f238af6a10ab" />

