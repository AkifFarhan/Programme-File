#include<bits/stdc++.h>
#include<string.h>
struct nametype
{
    char first[20];
    char last[20];
};
struct student
{
    int id;
    struct nametype name;
};
int main()
{
    struct student one;

    scanf("%d",&one.id);
    scanf("%s",one.name.first);
    scanf("%s",one.name.last);

    printf("ID : %d\n",one.id);
    printf("name :%s %s",one.name.first,one.name.last);

    return 0;
}
