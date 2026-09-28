#include <stdio.h>
int main()
{
    int stat=0;
    int operation,device,mode;
    int flag=0;
    int result;
    int d=1<<0;
    int a=1<<1;
    int cctv=1<<2;
    int m=1<<3;
    printf("Smart Home Security Controller\n");
    printf("\nSelect operation:\n");
    printf("1.Activate device\n");
    printf("2.Deactivate device\n");
    printf("3.Check device status\n");
    printf("4.Toggle device\n");
    printf("5.Select security mode\n");
    printf("Enter your choice");
    scanf("%d",&operation);
    switch(operation)
    {
        case 1:
        {
            printf("\nSelect device to activate:\n");
            printf("1. Main door lock\n");
            printf("2. Alarm system\n");
            printf("3. Cctv camera\n");
            printf("4. Motion sensor\n");
            printf("Enter device: ");
            scanf("%d", &device);
        switch(device)
            {
                case 1:
                    flag=d;
                    printf("Main door lock selected\n");
                    break;
                case 2:
                    flag=a;
                    printf("Alarm system selected\n");
                    break;
                case 3:
                    flag=cctv;
                    printf("Cctv camera selected\n");
                    break;
                case 4:
                    flag=m;
                    printf("Motion sensor selected\n");
                    break;
                default:
                    printf("Invalid device\n");
                    flag=0;
            }
            if(flag!=0)
            {
                stat=stat|flag;
                printf("Device activated successfully\n");
            }
            break;
        }
        case 2:
        {
            printf("\nSelect device to deactivate:\n");
            printf("1.Main door lock\n");
            printf("2.Alarm system\n");
            printf("3.Cctv camera\n");
            printf("4.Motion sensor\n");
            printf("Enter device=");
            scanf("%d",&device);
            switch(device)
            {
                case 1:
                    flag=d;
                    break;
                case 2:
                    flag=a;
                    break;
                case 3:
                    flag=cctv;
                    break;
                case 4:
                    flag=m;
                    break;
                default:
                    printf("Invalid device\n");
                    flag=0;
            }
            if(flag!= 0)
            {
                stat =stat&(~flag);
                printf("Device deactivated successfully\n");
            }
            break;
        }
        case 3:
        {
            printf("\nSelect device to check status:\n");
            printf("1.Main door lock\n");
            printf("2.Alarm system\n");
            printf("3.Cctv camera\n");
            printf("4.Motion sensor\n");
            printf("Enter device: ");
            scanf("%d",&device);
            switch(device)
            {
                case 1:
                    flag=d;
                    break;
                case 2:
                    flag=a;
                    break;
                case 3:
                    flag=cctv;
                    break;
                case 4:
                    flag=m;
                    break;
                default:
                    printf("Invalid device\n");
                    flag = 0;
            }
            if(flag!=0)
            {
                result =stat&flag;
                printf("\nDevice status:%s\n", result?"Active":"Inactive");
            }
            break;
        }
        case 4:
        {
            printf("\nSelect device to toggle\n");
            printf("1.Main door lock\n");
            printf("2.Alarm system\n");
            printf("3.Cctv camera\n");
            printf("4.Motion sensor\n");
            printf("Enter device\t");
            scanf("%d",&device);
            switch(device)
            {
                case 1:
                    flag=d;
                    break;
                case 2:
                    flag=a;
                    break;
                case 3:
                    flag=cctv;
                    break;
                case 4:
                    flag=m;
                    break;
                default:
                    printf("Invalid device\n");
                    flag=0;
            }
            if(flag!=0)
            {
                stat=stat^flag;
                printf("Device toggled successfully\n");
            }
            break;
        }
        case 5:
        {
            printf("\nSelect security mode:\n");
            printf("1.Home mode\n");
            printf("2.Away mode\n");
            printf("3.Night mode\n");
            printf("Enter mode=");
            scanf("%d",&mode);
            switch(mode)
            {
                case 1:
                    stat=stat|(d|cctv);
                    printf("Home mode activated\n");
                    break;
                case 2:
                    stat=stat|(d|a|cctv|m);
                    printf("Away mode activated\n");
                    break;
                case 3:
                    stat=stat|(d|a|m);
                    printf("Night mode activated\n");
                    break;
                default:
                    printf("Invalid security mode\n");
            }
            break;
        }
        default:
            printf("Invalid operation\n");
    }
    printf("Current device status\n");
    printf("Main door lock 1= %s\n",(stat&d)?"Active":"Inactive");
    printf("Alarm system 2= %s\n", (stat & a) ? "Active" : "Inactive");
    printf("Cctv camera 4= %s\n", (stat & cctv) ? "Active" : "Inactive");
    printf("Motion sensor 8= %s\n", (stat & m) ? "Active" : "Inactive");
    printf("\nBinary status(Motion Cctv Alarm Door)= ");
    printf("%d%d%d%d\n",(stat&m)? 1:0,(stat&cctv)?1:0,(stat&a)?1:0,(stat&d)?1:0);
    if((stat&d)&&(stat&a)&&(stat&cctv)&&(stat&m))
    {
        printf("\nSecurity system Fully armed\n");
    }
    else
    {
        printf("\nSecurity system Not fully armed\n");
    }
    printf("Security status: %s\n", ((stat & (d|a|cctv|m)) == (d|a|cctv|m))?"All systems secured":"Some devices inactive");
    return 0;
}
