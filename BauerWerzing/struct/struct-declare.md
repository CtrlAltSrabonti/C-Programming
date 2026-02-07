#### Golden Rule (WRITE THIS):

. → structure variable

-> → pointer to structure

<img width="1097" height="605" alt="image" src="https://github.com/user-attachments/assets/6bfcf158-507f-4a6e-8927-65f175ba9c24" />

<img width="1097" height="605" alt="image" src="https://github.com/user-attachments/assets/9186cf9a-0159-41a3-ab1c-abc5bce832ec" />

<img width="1097" height="605" alt="image" src="https://github.com/user-attachments/assets/4b826fc4-f03c-4e44-ad4c-7a318275290b" />

## Array of struct 

<img width="757" height="157" alt="image" src="https://github.com/user-attachments/assets/cf580728-82b2-42f2-ada6-d03a6a3f471c" />

<img width="855" height="491" alt="image" src="https://github.com/user-attachments/assets/59b781c1-251d-4080-9dab-48ed84ebd59e" />

## Pointer to struct variable

- Accessing members of variable 'a' by using a pointer
  
<img width="1212" height="612" alt="image" src="https://github.com/user-attachments/assets/1a05209e-48a5-4c77-ab58-98586b622be1" />

````
-  ptr->x replaced by (*ptr).x replaced by (*&a).x. Now * and & get cancelled out. So  we left with 'a' only.
- printf("%d %d", a.x, a.y) means we are trying to get access the x member of variable a. Therefore a.x will get replaced by 0
````

<img width="923" height="491" alt="image" src="https://github.com/user-attachments/assets/c7ff6743-c6e5-4504-93d9-85453e0aac56" />

## Structure padding sizeof()

<img width="1235" height="678" alt="image" src="https://github.com/user-attachments/assets/1892cea7-edf9-4a8c-8919-a3704096a39f" />

## Importance of type casting in structure

- Without type casting pointer will point to the whole structure, NOT the address of the first member of structure
  
#### Example : Pointer to structure

- Previously q was pointing to the whole structure. But after type casting to '(char*)', q will point to the address of the first member of the structure

<img width="1235" height="678" alt="image" src="https://github.com/user-attachments/assets/d16a97c6-5a04-447a-bf31-fca6b50e4528" />

<img width="1235" height="678" alt="image" src="https://github.com/user-attachments/assets/7d7d4c00-f7a9-4363-9cfb-8bae1f094277" />

