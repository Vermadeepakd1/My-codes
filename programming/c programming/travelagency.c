#include <stdio.h>
typedef struct driverdetails
{
    char name[50];
    char dlno[50];
    char route[50];
    int kmstravelled;
} dl;
int main()
{
    dl driver1, driver2, driver3;
    printf("Type the details of the driver \n");
    printf("For number 1 \n");
    printf("name: ");
    scanf("%s", &driver1.name);
    printf("driving license no.:");
    scanf("%s", &driver1.dlno);
    printf("route:");
    scanf("%s", &driver1.route);
    printf("kms travelled:");
    scanf("%d", &driver1.kmstravelled);

    printf("For number 2 \n");
    printf("name: ");
    scanf("%s", &driver2.name);
    printf("driving license no.:");
    scanf("%s", &driver2.dlno);
    printf("route:");
    scanf("%s", &driver2.route);
    printf("kms travelled:");
    scanf("%d", &driver2.kmstravelled);

    printf("For number 3 \n");
    printf("name: ");
    scanf("%s", &driver3.name);
    printf("driving license no.:");
    scanf("%s", &driver3.dlno);
    printf("route:");
    scanf("%s", &driver3.route);
    printf("kms travelled:");
    scanf("%d", &driver3.kmstravelled);

    printf("The details of the drivers are\n");
    printf("for Driver 1: \n");
    printf("name:%s \n", driver1.name);
    printf("driving license no.: \n", driver1.dlno);
    printf("route:%s \n", driver1.route);
    printf("kilometers travelled:%d \n \n", driver1.kmstravelled);

   
    printf("for Driver 2: \n");
    printf("name:%s \n", driver2.name);
    printf("driving license no.: \n", driver2.dlno);
    printf("route:%s \n", driver2.route);
    printf("kilometers travelled:%d \n \n", driver2.kmstravelled);

    
    printf("for Driver 3: \n");
    printf("name:%s \n", driver3.name);
    printf("driving license no.: \n", driver3.dlno);
    printf("route:%s \n", driver3.route);
    printf("kilometers travelled:%d \n \n", driver3.kmstravelled);

    return 0;
}