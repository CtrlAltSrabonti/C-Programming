## Pass by reference
- numerator ≠ 0 → reduce using ggT
- numerator = 0 → force denominator = 1
<img width="954" height="678" alt="image" src="https://github.com/user-attachments/assets/b5510461-b5d2-4aae-af8e-85e8d79244d2" />

<img width="963" height="691" alt="image" src="https://github.com/user-attachments/assets/7caced77-7e6b-47d5-98a9-82d5bb268b25" />
<img width="954" height="712" alt="image" src="https://github.com/user-attachments/assets/eb04cd5f-3cbd-47f1-926f-73cc07a32164" />
# Programm

```
/*Uses pointers to modify the original values*/
void kuerze (unsigned long long *z, unsigned long long *n) { // *z means : the value stored at the memory address that z points to

    unsigned long long g; // unsigned long long ensures big range
    if (*z != NULL) { // Numerator = 0 is a special case
        g = ggt(*z, *n); // Dereferencing
        *z = *z /g;
        *n = *n /g;
    }
    else

        *n = NULL; // 0 / 1 normalize

}

```
