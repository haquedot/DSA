#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define SIZE 100

//declaring function globally
intenQueue();
intdeQueue();
intdisplay();

intitems[SIZE], front = -1, rear = -1;
inti,value;
intmain(){
    intchoice;    
    printf("Operations in Queue \n");
    printf("For enQueue press 1. \n");
    printf("For deQueue press 2. \n");
    printf("For Exit press 3 \n" );

    while (1)
    {
        printf("Enter Your Choice : \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case1/* -expression */:
            /* code */
            enQueue();
            break;
        case2/* -expression */:
            /* code */
            deQueue();
            break;
        case3/* -expression */:
            /* code */
            display();
            break;
        case4:
            exit(0);
            break;
        default:
            printf("Wrong selection Darling! \n");
            break;
        }
    }
    // you can done this program by this also
    //enQueue 5 elements
    // enQueue(342);
    // enQueue(234);
    // enQueue(133324);
    // enQueue(234);
    // enQueue(421);
    // enQueue(3241);
    // enQueue(352);
    // enQueue(1424);
    // enQueue(32);
    
    //displaying elements
    // display();

    // //deQueue removes element entered first i.e. 1
    // deQueue();

    // //displaying elements
    // display();

    return0    
}
intenQueue(){
    printf("Enter the element to EnQueue : \n");
    scanf("%d", &value);
    if(rear == SIZE - 1){
        printf("Queue is Full! \n");
    }else{

        if(front == -1){
            front = 0;
        }
        rear++;
        items[rear] = value;
        printf("INSERTED ->%d\n", value);
    }
}
intdeQueue(){
    if(front == -1){
        printf("Queue is empty !!! \n");
    }else{
        printf("Deleted : %d\n",items[front]);
        front++;
        if(front>rear){
            front = rear = -1
        }
    }
}
intdisplay(){
    if(rear == -1){
        printf("Queue is Empty !!! \n")
    }else{
        inti;
        printf("Queue elements are : \n ")
        for(i = front; i<= rear; i++){
            printf("%d\n", items[i])
        }
    }
    printf("\n");
}

