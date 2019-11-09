#include<stdio.h>
struct student
    {
        char name[50];
        int ID;
        float cgpa;
    }s[4];
int main()
{
    int i,j;
    int name;
    int id=1;

    for(i=0; i<3; i++){
        s[i].ID = id++;
        scanf("%s",&s[i].name);
        scanf("%f",&s[i].cgpa);

    }
    float max = s[i].cgpa;

    for(j=0; j<3; j++){
        if(max <s[j].cgpa){
            max = s[j].cgpa;
            name = j;

        }
    }
    printf("%d.",s[name].ID);
    printf("%s\n",s[name].name);
    printf("Max CGPA:%.2f",max);

}
