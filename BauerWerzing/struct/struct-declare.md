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
