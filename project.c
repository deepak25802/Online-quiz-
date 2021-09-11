#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int signin();
void signup();
void help();
void play();
void scores();

struct user
{
    char password[20];
    char username[20];
};

int main()
{
    int choice;
log:
    printf("\n\n\n==================================================================================================================\n\n\n");
    printf("\n Enter :\n\n");
    printf("\n 1. Sign in");
    printf("\n 2. Sign up\n\n");
    printf("\nEnter your choice here :-\t");
    int ans;
    scanf("%d", &ans);
    int c;
    switch (ans)
    {
    case 1:
        c = signin();
        if (c == 0)
        {
            printf("\t\t Re-enter");
            goto log;
        }
        break;
    case 2:
        signup();
        break;
    default:
        printf("Invalid!!!\n \t\t Re-enter");
        goto log;
    }
    printf("\n\n==================================================================================================================");
    printf("\n\n\nCHOICES\n\n1. Instructions for the quiz\n2. Start a new quiz\n3. View reults\n");
    printf("\nEnter your choice here:-\t");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        help();
        break;
    case 2:
        play();
        break;
    case 3:
        scores();
    }
    return 0;
}

void help()
{
    char c[5];
    printf("\n\n\n==================================================================================================================");
    printf("\n\n\t\t\t\t\tINSTRUCTIONS\n\n");
    printf("1. There will be 7 questions in total.\n2. Each correct answer carries 2 mark");
    printf("\n3. There will be no negative marks for wrong answer.\n4. You cannot revisit any question.");
    printf("\n\n==================================================================================================================");
    printf("\n\n\t\t\t\t\tBEST OF LUCK !!");
    printf("\n\n==================================================================================================================\n\n");
    printf("CONTINUE PLAYING ?\nEnter your choice in yes or no here :-\t");
    scanf("%s", &c);
    if (strcmpi(c, "yes") == 0)
        play();
    else if (strcmpi(c, "no") == 0)
    {
        printf("\n\n==================================================================================================================\n\n");
        printf("THANK YOU , HAVE A GOOD DAY.");
        printf("\n\n==================================================================================================================\n\n");
        exit(0);
    }
}

void play()
{
    FILE *r;
    char fname[1000], lname[100], email[200];
    char choice;
    int count = 0, marks;
    r = fopen("C:\\results.txt", "a");
    printf("\n\n==================================================================================================================");
    printf("\n\n\nEnter your credentials");
    printf("\nFIRST NAME:-\t");
    scanf("%s", &fname);
    fputs(fname, r);
    fprintf(r, " ");
    printf("\nLAST NAME:-\t");
    scanf("%s", &lname);
    fputs(lname, r);
    fprintf(r, "----------");
    printf("\nEMAIL:-\t");
    scanf("%s", &email);
    fputs(email, r);
    fprintf(r, "----------");
    printf("\n\n\n==================================================================================================================");
    printf("\n\n\t\t\t\t\t\tTHE QUIZ BEGINS!!");
    printf("\n\n\n------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\n\nQUESTION 1. In which type of material the magnetic suspectibility does not depend on temperature?\n 1. Diamagnetic \n 2. paramagnetic\n 3. Ferromagnetic\n 4. Ferrite\n");
    printf("\n\nEnter your answer here :-\t");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("\nCORRECT ANSWER!");
        count++;
    }
    else
    {
        printf("\nWRONG ANSWER . The coorect answer is option 1");
    }
    printf("\n\n\n------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\n\nQUESTION 2. A hemisphere is uniformly charged positively.The electric field at a point on a diameter away from the centre is directed.\n");
    printf("1. perpendicular to the diameter\n 2. parallel to the diameter\n 3. at an angle tilted towards the diameter\n 4. at an angle tilted away from the diameter\n");
    printf("\n\nEnter your answer here :-\t");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("\nCORRECT ANSWER!\n Explanation--\n When the point is situated at a point on diameter away from the centre of hemisphere charged uniforly positively,the electricfield is perpendicular to the diameter. The component of electric intensity parallel to the diameter cancels out.\n");
        count++;
    }
    else
    {
        printf("\nWRONG ANSWER . The coorect answer is option 1. \nExplanation--\n When the point is situated at a point on diameter away from the centre of hemisphere charged uniforly positively,the electricfield is perpendicular to the diameter. The component of electric intensity parallel to the diameter cancels out.");
    }
    printf("\n\n\n------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\n\nQUESTION 3. Total electric force on an electric dipole placed in a non-uniform electric field is:\n 1. always zero\n 2. never zero\n 3. zero when mid-point of dipole coincides with the point charge\n 4. zero when dipole axis is along any electric line of force");
    printf("\n\nEnter your answer here :-\t");
    scanf("%d", &choice);
    if (choice == 2)
    {
        printf("\nCORRECT ANSWER!\n Explanation--\n As Electric field is non-uniform,hence net force can never be zero\n");
        count++;
    }
    else
    {
        printf("\nWRONG ANSWER . The corect answer is option 2.\n Explanation--\n As Electric field is non-uniform,hence net force can never be zero\n");
    }
    printf("\n\n\n------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\n\nQUESTION 4. A current loop in a non-uniform magnetic field experiences:\n 1. a force of repulsion.\n 2. a force of attraction\n 3. a torque but not force\n 4. a force and a torque\n");
    printf("\n\nEnter your answer here :-\t");
    scanf("%d", &choice);
    if (choice == 4)
    {
        printf("\nCORRECT ANSWER! \nExplanation: In non-uniform magnetic field,current loop experiences an unequal opposite force which forms torque.\n");
        count++;
    }
    else
    {
        printf("\nWRONG ANSWER . The coorect answer is option 4. \nExplanation: In non-uniform magnetic field,current loop experiences an unequal opposite force which forms torque.\n");
    }
    printf("\n\n\n------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\n\nQUESTION 5.The magnetic susceptibilty of an ideal dimagnetic substance is \n 1. +1\n 2. 0\n 3. -1\n 4. infinity\n");
    printf("\n\nEnter your answer here :-\t");
    scanf("%d", &choice);
    if (choice == 3)
    {
        printf("\nCORRECT ANSWER!\n Explanation:\n Since for diamagnetic susceptibility varies from -1 to 0\n");
        count++;
    }
    else
    {
        printf("\nWRONG ANSWER . The correct answer is option 3.\n Explanation:\n Since for diamagnetic susceptibility varies from -1 to 0\n");
    }
    char opt[26];
    printf("\n\n\n------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\n\nQUESTION 6.Magnetic moment developed per unit volume of a material when placed in a magnetising field is known as _____ \n");
    printf("\n\nEnter your answer here :-\t");
    scanf("%s", &opt);
    if (strcmpi(opt, "Magnetisation") == 0)
    {
        printf("\nCORRECT ANSWER!\n");
        count++;
    }
    else
    {
        printf("\nWRONG ANSWER . The correct answer is Magnetisation\n");
    }
    printf("\n\n\n------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\n\nQUESTION 7.Gauss's law in magnetism indicates that magnetic ____ do not exist \n");
    printf("\n\nEnter your answer here :-\t");
    scanf("%s", &opt);
    if (strcmpi(opt, "monopole") == 0)
    {
        printf("\nCORRECT ANSWER!\n");
        count++;
    }
    else if (strcmpi(opt, "monopoles") == 0)
    {
        printf("\nCORRECT ANSWER!\n");
        count++;
    }
    else
    {
        printf("\nWRONG ANSWER . The correct answer is monopole(s)\n");
    }
    marks = count * 2;
    fprintf(r, "MARKS = %d\n\n\n----------------------------------------------------------------------------------------------------------------------\n\n\n", marks);
    printf("\n\n\n-----------------------------------------------------------------------------------------------------------------\n\n");
    printf("\nYOUR MARKS ARE :-\t%d\n", marks);
    fclose(r);
    printf("\n\n\n------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\n\t\t\t\t\t\tTHANK YOU\n\n\n");
}

void scores()
{
    FILE *r;
    char ch;
    printf("\n\n******\n\n\n");
    printf("\n\n\nThe result of all the candidates with their names and email is given below:-\n\n\n");
    printf("---------------------------------------------------------------------------------------------------------------------------------\n\n\n");
    r = fopen("C:\\results.txt", "r");
    r = freopen("C:\\results.txt", "r", r);
    do
    {
        ch = fgetc(r);
        putchar(ch);

    } while (ch != EOF);
    fclose(r);
}

int signin()
{
    struct user u;
    char file_username[20];
    char file_password[20];
    FILE *f;
    f = fopen("score.txt", "r");
    printf("\n\n==================================================================================================================");
    printf("\n\n Sign in by filling in the credentials below");
    printf("\n\n Enter Username:-\t");
    scanf("%s", &file_username);
    printf("\n\n Enter Password:-\t");
    scanf("%s", &file_password);
    while (fread(&u, sizeof(u),1,f))
    {
        if ((strcmp(file_username, u.username) == 0) && (strcmp(file_password, u.password) == 0))
        {
            printf("\n\t\t\t\t\tLogin SUCCESSFULL!!");
            return 1;
        }
    }
    printf("\nIncorrect login");
    return 0;
    fclose(f);
}

void signup()
{
    FILE *f;
    struct user u;
    char username[20];
    char password[20];
    f = fopen("score.txt", "a");
    printf("\n\n==================================================================================================================");
    printf("\n\n Sign up by filling in the credentials below");
    printf("\n\n Enter Username:-\t");
    scanf("%s", &u.username);
    printf("\n\n Enter Password:-\t");
    scanf("%s", &u.password);
    fwrite(&u, sizeof(u), 1, f);
    fclose(f);
    printf("\n\t\t Press any key to continue......\n");
}
