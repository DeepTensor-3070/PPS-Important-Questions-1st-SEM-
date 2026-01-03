void read1(struct student *s) {
    printf("Student number: ");
    scanf("%d", &s->regdno);

    printf("Student name: ");
    scanf("%s", s->name);

    printf("Joining date: ");
    scanf("%d %d %d", &s->doj.day, &s->doj.month, &s->doj.year);
}

void display(struct student s) {
    printf("Number: %d\n", s.regdno);
    printf("Name: %s\n", s.name);
    printf("Joining date: %d-%d-%d\n", s.doj.day, s.doj.month, s.doj.year);
}


