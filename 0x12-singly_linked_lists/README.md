Project Title: 0x12. C - Singly linked lists

Resources
0. [Linked Lists](https://intranet.alxswe.com/rltoken/joxg32-tt4lUh8Afgst8tA)
1. [Google](https://intranet.alxswe.com/rltoken/USaZbNdfcuIFII-K2YPsKQ)
2. [Youtube](https://intranet.alxswe.com/rltoken/epKUCIcoA6XaN1T3Vtr_9w)

Learning Objectives
To be able to explain to anyone, without the help of Google the following:
0. When and why using linked lists vs arrays
1. How to build and use linked lists

The Singly Code Syntaxe
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

Project Tasks: 
0. Print list
1. List length
2. Add node
3. Add node at the end
4. Free list
5. The Hare and the Tortoise
6. Real programmers can write assembly code in any language
