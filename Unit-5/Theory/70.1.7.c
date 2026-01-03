struct list* create(struct list *first) {
    char op;
    struct list *q = NULL, *temp;

    do {
        temp = (struct list*)malloc(sizeof(struct list));  // Allocate memory

        printf("Enter an integer value : ");
        scanf("%d", &temp->data);  // Read data

        temp->next = NULL;  // Place NULL

        if (first == NULL) {
            first = temp;  // First node
        } else {
            q->next = temp;  // Link last node to temp
        }

        q = temp;  // q becomes last node

        printf("Do u want another list (y|n) : ");
        scanf(" %c", &op);

    } while(op == 'y' || op == 'Y');

    return first;
}

void display(struct list *first) {
    struct list *temp = first;

    while (temp != NULL) {  // Stop when temp becomes NULL
        printf("%d-->", temp->data);
        temp = temp->next;  // Move to next node
    }

    printf("NULL\n");
}

