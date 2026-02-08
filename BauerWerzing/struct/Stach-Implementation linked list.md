## Push operation

<img width="1244" height="696" alt="image" src="https://github.com/user-attachments/assets/740e28cd-b7c6-4deb-bcfa-4364216ea500" />

## Pop operation

<img width="1244" height="696" alt="image" src="https://github.com/user-attachments/assets/101bbf34-ec13-4a13-bef8-e97c2f7517e8" />

### Basic to remember to code Stack using LIFO
- 1. Stack overflow
- 2. stack underflow / Stack is empty
     
<img width="1244" height="696" alt="image" src="https://github.com/user-attachments/assets/4060e40c-c322-4977-82ce-34940ded54b3" />

## Represent stack with the help of simply linked list push () function
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

## Represent stack with the help of simply linked list pop () function
### Procedure

<img width="1156" height="627" alt="image" src="https://github.com/user-attachments/assets/7d1e4f9d-320f-49d2-af16-1566283df13f" />

- pop () will not only delete the element from the top of the stack, but return the first element of the stack back to the caller. So return type will NOT 'void'

```
int pop(){}

```

<img width="551" height="579" alt="image" src="https://github.com/user-attachments/assets/9a6f7baa-259e-43f8-bef9-5548aa7b854c" />

#### Pictogram
1. <img width="539" height="191" alt="image" src="https://github.com/user-attachments/assets/5804bfee-af63-4c14-83ed-41cd86ea901b" />

2. <img width="694" height="132" alt="image" src="https://github.com/user-attachments/assets/37c183be-c74d-4697-92f0-fb053d28649a" />

3.<img width="694" height="203" alt="image" src="https://github.com/user-attachments/assets/713482da-36c4-4b37-b13b-dc023069503e" />

4. <img width="689" height="201" alt="image" src="https://github.com/user-attachments/assets/1001cfd9-3272-446d-bf00-3caffd60d821" />

5. <img width="723" height="211" alt="image" src="https://github.com/user-attachments/assets/b5ecfbc5-4902-4771-aae7-732177aa8b41" />

6. <img width="848" height="247" alt="image" src="https://github.com/user-attachments/assets/be6b9def-ffda-455b-8e05-50bbb2c4228d" />

## Represent stack with the help of simply linked list isEmpty() function

- top will return NULL, when the linked list is empty

  <img width="976" height="480" alt="image" src="https://github.com/user-attachments/assets/9845a1fa-d844-4aa3-acfa-22e411a8627f" />

<img width="1194" height="638" alt="image" src="https://github.com/user-attachments/assets/516f4615-2fcf-42ad-aea6-e80c883fe035" />

<img width="1194" height="638" alt="image" src="https://github.com/user-attachments/assets/04a4430a-a6d4-4a4e-9fa9-9f0c1895447f" />




