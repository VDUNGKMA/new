#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <conio.h>

void loading()
{
    int x;
    printf("nhap vao pass\n");
    scanf("%d",&x);
    if(x!=123045)
    {
        printf("\nsai pass nhap lai\n");
        printf("nhap vao pass\n");
        scanf("%d",&x);
    }
    printf("\t\t\t\t\t\t\t\t\tLOADING\n");
    printf("\n\t\t\t\t\t\t");

    for(int i=0;i<55;i++)
    {
         printf(".");
         //Sleep(50);
    }
    //system("cls");
    printf("\n\t\t\t\t\t\t\t\tLOADING complete\n");
    system("color A");
   // Sleep(10);
   // system("cls");
}

int main()
{
    loading();

    std::fstream f;
    f.open("v.txt", std::ios::in);
    if (f.is_open())
    {
        std::string tp;
        while (getline(f, tp))
        {
            system("color A");
            std::cout << tp << std::endl;
            //Sleep(50);
        }
        f.close();
    }

    std::string a;
    std::cin >> a;
    return 0;
}