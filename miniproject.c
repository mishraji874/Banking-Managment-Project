#include<stdio.h>
int flag =0;
int logout_ =0;
void login(void);
void signup(void);
void accounttype(char name[50]);
void Loan(char name[50]);
void Savings(char name[50]);
void logout(void);
int main()
{
    int l_sp;
    printf("Hello user, Welcome!\n\n\t\t");
    printf("Press '1' for login\n\t\tPress '2' for sign up\n");
    scanf("%d",&l_sp);
    if(l_sp == 1)
    {
        login();
    }
    else if(l_sp == 2)
    {
        signup();
    }
    return 0;
}
void login()
{
    char namea[50];
    char password[50];
    printf("Enter your Full name : ");
    scanf("%s",namea);
    printf("Enter password : ");
    scanf("%s",password);
    if(namea=="pavankumar" && flag%2 !=0)
    {
        printf("User Not Exists.. Please signup\n");
    }
    else
    {
        accounttype(namea);
    }
}
void signup()
{
    char name[50];
    char password[50];
    char email[50];
    char DOB[50];
    printf("Enter your Full name : \n");
    scanf("%s",name);
    if(name == "varunkumar")
    {
        printf("User Already exists will redirect to login page......");
    }
    if(name == "pavankumar")
    {
        flag++;
    }
    printf("Enter password : \n");
    scanf("%s",password);
    printf("Enter your email: \n");
    scanf("%s",email);
    printf("Enter your DOB: \n");
    scanf("%s",DOB);
    printf("Your details has been recorded....\n\n\t\t");
}
void accounttype(char name[50])
{
    printf("Please enter the Account type:\n");
    printf("\n\t\tType L for loan type\n\t\tType S for savings type\n");
    char acc_typ[100];
    scanf("%s",acc_typ);
    if(acc_typ[0] == 'L')
    {
        printf("You have selected Loan account\n");
        Loan(name);
    }
    else if(acc_typ[0]=='S')
    {
        printf("You have selected Savings account\n");
        Savings(name);
        }
    else
    {
        printf("Wrong entry found.. Please Enter valid account type again\n");
        //accounttype(name);
    }
}
void Loan(char name[100])
{
    printf("please select the type of loan you are requesting for:\n");
    printf("\n\t\tType P for personal loan type\n\t\tType E for educational loan type\n");
    char loantype[100];
    scanf("%s",loantype);
    if(loantype[0] == 'P')//personal
    {
        if(name[0] == 'v')
        {
            printf("You are not eligible for the personal loan\n");
        }
        if(name[0] == 'p')
        {
            printf("You are eligible for the personal loan upto 50000\n");
        }
        else
        {
            printf("Please contact branch manager for your loan approval\n");
            //Loan(name);
        }
        printf("To logout enter 1 or to go to savings account enter 2\n");
        scanf("%d",&logout_);
        if(logout_ == 1)
        {
            logout();
        }
        else
        {
            Savings(name);
        }
    }
    if(loantype[0] == 'E')//Education
    {
        if(name[0] == 'p')
        {
            printf("You are not eligible for the Education loan\n");
        }
        if(name[0] == 'v')
        {
            printf("You are eligible for the Education loan upto 50000\n");
        }
        else
        {
            printf("Please contact branch manager for your loan approval\n");
        }
    }
    else
    {
        printf("please select correct loan type or contact branch manager for eligibility process\n");
    }
}
void Savings(char name[100])
{
    printf("Enter 1 to check balance, 2 for transaction\n");
    int choice;
    scanf("%d",&choice);
    if(choice == 1)
    {
        printf("Your balance is 50010 rupees only\n");
    }
    else if(choice == 2)
    {
        printf("Enter account number:\n");
        int accountnumber;
        scanf("%d",&accountnumber);
        printf("Enter amount:\n");
        int amount;
        scanf("%d",&amount);
        printf("Amount transferred successfully");
    }
    logout();
}
void logout()
{
    printf("Loggedout sucessfully");
}