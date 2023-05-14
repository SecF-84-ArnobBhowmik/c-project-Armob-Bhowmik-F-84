#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct books
{
    char bid[10],bname[100],av[3];
};
struct members
{
    char mid[10],mname[50],age[3],cont[12];
};
struct borret
{
    char b_id[10],m_id[10],bdate[10],rdate[10],status[3];
};

void main()
{
    int ch;
    char c='Y';
    while(c=='Y')
    {
        printf("Enter 1 for stock\n");
        printf("Enter 2 for membership\n");
        printf("Enter 3 for borrow or return list\n");
        scanf("%d",&ch);
        if (ch==1)
        {

            int ccc;
            printf("Enter 1 for adding book\n");
            printf("Enter 2 for updating\n");
            printf("Enter 3 for viewing\n");
            scanf("%d",&ccc);
            if(ccc==1)
            {

                int n;
                printf("enter no. of books you want to add\n");
                scanf("%d",&n);
                typedef struct books bk;
                bk x[n];
                for(int i=0; i<n; i++)
                {
                    printf("Enter book id,name,availability\n");
                    gets(x[i].bid);
                    gets(x[i].bname);
                    gets(x[i].av);

                }
            }


            else if(ccc==2)
            {
                char bbid[10],bbname[100],aav[3];
                typedef struct books bk;
                bk x[5000];
                printf("Enter id");
                gets(bbid);

                for(int i=0; i<5000; i++)
                {
                    if(x[i].bid==bbid)
                    {
                        printf("Enter new data");
                        scanf("%s%s",bbname,aav);
                        strcpy(x[i].bid,bbid);
                        strcpy(x[i].bname,bbname);
                        strcpy(x[i].av,aav);
                        break;
                    }
                }
            }
            else
            {
                typedef struct books bk;
                bk x[5000];
                printf("Book Id   Book name         Availability\n ");
                for(int i=0; i<5000; i++)
                {
                    printf("%s%s%s",x[i].bid,x[i].bname,x[i].av);
                }

            }
        }
        else if (ch==2)
        {
            int j;
            printf("Enter 1 for adding member\n");
            printf("Enter 2 for updating\n");
            printf("Enter 3 for viewing\n");
            scanf("%d",&j);
            if(j==1)
            {


                int n;
                printf("enter no. of members you want to add\n");
                scanf("%d",&n);
                typedef struct members mk;
                mk x[n];
                for(int i=0; i<n; i++)
                {
                    printf("Enter member id, member name,age, contact no.\n");
                    gets(x[i].mid);
                    gets(x[i].mname);
                    gets(x[i].age);
                    gets(x[i].cont);
                }

            }
            else if(j==2)
            {
                char mmid[10],mmname[50],aage[3],ccont[12];
                typedef struct members mk;
                mk x[5000];
                printf("Enter id");
                gets(mmid);

                for(int i=0; i<5000; i++)
                {
                    if(x[i].mid==mmid)
                    {
                        printf("Enter new data");
                        gets(mmname);
                        gets(aage);
                        gets(ccont);
                        strcpy(x[i].mid,mmid);
                        strcpy(x[i].mname,mmname);
                        strcpy(x[i].age,aage);
                        strcpy(x[i].cont,ccont);
                        break;
                    }
                }
            }
            else
            {
                typedef struct members mk;
                mk x[5000];
                printf("Member Id Member name      Age Contact no.\n ");
                for(int i=0; i<5000; i++)
                {
                    printf("%s%s%s%s\n",x[i].mid,x[i].mname,x[i].age,x[i].cont);
                }
            }
        }
        else
        {
            int h;
            printf("Enter 1 for updating\n");
            printf("Enter 2 for viewing\n");
            scanf("%d",&h);
            if(h==1)
            {

                char mmid[10],bbid[10],bbdate[10],rrdate[10],ret[3];
                typedef struct borret brk;
                brk x[5000];
                printf("Enter bookid , membershipid, borrow date, return date, return status\n");
                gets(bbid);
                gets(mmid);
                gets(bbdate);
                gets(rrdate);
                gets(ret);
                for(int i=0; i<5000; i++)
                {
                    strcpy(x[i].b_id,bbid);
                    strcpy(x[i].m_id,mmid);
                    strcpy(x[i].bdate,bbdate);
                    strcpy(x[i].rdate,rrdate);
                    strcpy(x[i].status,ret);


                }
            }
            else 
            {
                typedef struct borret brk;
                brk x[5000];
                printf("Book id    Member id     Borrow date Return date Status\n");
                for(int i=0; i<5000; i++)
                {
                    printf("%s%s%s%s%s",x[i].b_id,x[i].m_id,x[i].bdate,x[i].rdate,x[i].status);
                }
            }
        }


        printf("Do you want to continue?......Y/N\n");
        scanf("%s",c);
    }
}
