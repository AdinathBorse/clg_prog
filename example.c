#include <stdio.h>
#include <stdlib.h>

int nodetotal = 0, nodeleaf = 0;

struct NODE {
    struct NODE *lc;
    int data;
    struct NODE *rc;
};

typedef struct NODE node;

node *getnode() {
    node *temp;
    temp = (node*)malloc(sizeof(node));
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->lc = NULL;
    temp->rc = NULL;
    return temp;
}

node *create() {
    node *temp, *root, *ptr;
    char ch;
    root = NULL;
    do {
        temp = getnode();
        if (root == NULL) {
            root = temp;
        } else {
            ptr = root;
            while (ptr != NULL) {
                if (temp->data < ptr->data) {
                    if (ptr->lc == NULL) {
                        ptr->lc = temp;
                        break;
                    } else {
                        ptr = ptr->lc;
                    }
                } else {
                    if (ptr->rc == NULL) {
                        ptr->rc = temp;
                        break;
                    } else {
                        ptr = ptr->rc;
                    }
                }
            }
        }
        printf("ADD MORE (y/n): ");
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');
    return root;
}

int totalnode(node *ptr) {
    if (ptr != NULL) {
        nodetotal++;
        totalnode(ptr->lc);
        totalnode(ptr->rc);
    }
    return nodetotal; // Return the total number of nodes
}

/*int leafcount(node *ptr) {
    if (ptr != NULL) {
        leafcount(ptr->lc);
        if (ptr->lc == NULL && ptr->rc == NULL) {
            nodeleaf++;
        }
        leafcount(ptr->rc);
    }
    return nodeleaf; // Return the total number of leaf nodes
}*/

int main() {
    node *root;
    root = create();
    printf("\n");

    nodetotal = 0; // Reset before counting
  //  nodeleaf = 0;  // Reset before counting

    totalnode(root);
   // leafcount(root);

    printf("Total number of nodes in tree: %d\n", nodetotal);
   // printf("Total number of leaf nodes in tree: %d\n", nodeleaf);

    return 0;
}