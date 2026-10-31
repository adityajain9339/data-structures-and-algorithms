Of course! Let's understand **how to return an array from a function in C** step by step.

This is an important concept in C programming, especially when you start solving DSA problems.

## 1. First, understand the problem

Suppose you have an array:

```c
int arr[] = {10, 20, 30, 40, 50};
```

Now, you want to create a function that returns this array to the `main()` function.

You might think of writing:

```c
int function() {
    int arr[] = {10, 20, 30, 40, 50};
    return arr;  // Wrong!
}
```

**Why is this wrong?**

Because C does not allow you to return an entire array directly from a function.

But don't worry! There are several ways to achieve this.

## 2. Method 1: Return an array using a pointer (dynamic memory allocation)

This is one of the most useful approaches.

We use `malloc()` to allocate memory dynamically.

```c
#include <stdio.h>
#include <stdlib.h>

int *CreateArray() {
    int *arr = malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 10;
    }

    return arr;
}

int main() {

    int *result = CreateArray();

    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }

    free(result);

    return 0;
}
```

**Output:**
```text
10 20 30 40 50
```

### Understand the logic

Let's understand three important things:

**Step 1:**

```c
int *CreateArray()
```

Here, `int *` means that the function returns an integer pointer.

**Step 2:**

```c
int *arr = malloc(5 * sizeof(int));
```

We are dynamically allocating memory for 5 integers.

**Step 3:**

```c
return arr;
```

We return the address of the first element of the dynamically allocated array.

In `main()`:

```c
int *result = CreateArray();
```

We receive that address in the `result` pointer.

Now we can access the array using:

```c
result[0]
result[1]
result[2]
```

Remember to use `free(result)` when you no longer need the dynamically allocated memory.

---

## 3. Method 2: Pass an array as an argument (very important)

Another approach is to pass an array to a function and modify it inside that function.

For example:

```c
#include <stdio.h>

void CreateArray(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
    }
}

int main() {

    int arr[5];

    CreateArray(arr, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

**Output:**
```text
10 20 30 40 50
```

Here, we are not returning an array.

Instead, we pass the array to the function and modify its original elements.

This works because the array argument is adjusted to a pointer to its first element.

---

## 4. Method 3: Return a pointer to a static array

You can also use a static array.

```c
#include <stdio.h>

int *CreateArray() {

    static int arr[5] = {10, 20, 30, 40, 50};

    return arr;
}

int main() {

    int *result = CreateArray();

    for (int i = 0; i < 5; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
```

Why does this work?

Because a `static` variable remains alive even after the function finishes executing.

Therefore, returning its address is valid.

---

## 5. Comparison of all three approaches

| Method | How it works | Common use |
|---|---|---|
| Dynamic memory (`malloc`) | Returns a pointer to allocated memory | DSA problems |
| Pass array as argument | Modifies the original array | Sorting, reversing |
| Static array | Returns a pointer to a static array | Fixed-size data |

### ⚠️ Important concept

Never do this:

```c
int *function() {
    int arr[5] = {1, 2, 3, 4, 5};
    return arr;
}
```

Why?

Because `arr` is a local automatic array. Its lifetime ends when the function returns. Returning its address creates a dangling pointer.

---

## 6. Now let's test your understanding!

I want you to solve this small question.

**Question: Create an array using a function and return it to `main()`.**

Requirements:

1. Create a function named `CreateArray()`.
2. The function should create an array of 5 integers.
3. Store `{10, 20, 30, 40, 50}` in it.
4. Return the array using dynamic memory allocation.
5. Receive the returned array in `main()`.
6. Print all elements.

**Hint:**

Your function declaration should look like this:

```c
int *CreateArray() {
    // Your logic
}
```

Try writing the code yourself. Send me your implementation, and I'll check it line by line.

I want you to understand the concept rather than just memorize the syntax!