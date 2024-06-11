#include<stdio.h>

int check(char* );

void main(){

    char arr[9] = {' ',' ',' ',' ' ,' ',' ',' ',' ',' '};
    //int i;
    for(int i=1;i<10;i){
        int choice1,choice2;
        printf("Enter location for playef 1(x) 1 to 9:");
        scanf("%d",&choice1);                                          // take input of choice1
        if(choice1>0 && choice1<10 && arr[choice1-1] == ' '){
            arr[choice1-1] = 'x';                                      //check already store or not
        }
        else{
            printf("Enter New Location for player 1(x) 1 to 9:");
            scanf("%d",&choice1);
            if(choice1>0 && choice1<10 && arr[choice1-1] == ' ')                                  //if already store the give second chance to input
                arr[choice1-1] = 'x';
            else
                printf("you entered wrong choice");
        }
       

        if(i==9){
            printf("\n*** MATCH DRAW! ***");                            //if i==9 means all value store then it will print draw
            break;
        }

        printf("\n");
        
        for(int i=0;i<9;i++){
            if(i==3 || i==6){                                           // to print view of game after each input choice
                printf("\n");
            }
            printf("%c  ",arr[i]);
        }

        printf("\n\n");


        if(i>=5){
           // printf("in if\n");                // to check who is winning
                int res = check(arr);
                if(res==1){
                    break;
                }
        }
        i++;
        //printf("i = %d\n",i);

        printf("Enter location for player 2(o) 1 to 9:");               
        scanf("%d",&choice2);                                               // take input of choice1
        
        if(choice2>0 && choice2<10 && arr[choice2-1] == ' '){                       
            arr[choice2-1] = 'o';                                           //check already store or not
        }
        else{
            printf("Enter New Location for player 2(o) 1 to 9:");
            scanf("%d",&choice2);
            if(arr[choice2-1] == ' ')                                       //if already store the give second chance to input
                arr[choice2-1] = 'o';
            else    
                printf("You entered wrong choice");
        }    

        

        printf("\n");

        for(int i=0;i<9;i++){
            if(i==3 || i==6){
                printf("\n");                                    // to print view of game after each input choice
            }
            printf("%c  ",arr[i]);
        }

        printf("\n\n");



        if(i>=5){
            //printf("in if\n");
               int res = check(arr);
                if(res==1){
                    break;
                }
        }
        i++;
        // printf("i = %d\n",i);
    }
    
    printf("\n");
    
    printf("Final View of game:\n");                    
    for(int i=0;i<9;i++){                           // to print final view of game.
        if(i==3 || i==6){                          
            printf("\n");
        }
        printf("%c  ",arr[i]);
    }
    
}


int check(char* arr){
             int flag=0;
                if(arr[0] != ' '){
                    if(arr[0] == arr[1] && arr[0] == arr[2]  || arr[0] == arr[3] && arr[0] == arr[6] ||  arr[0] == arr[4] && arr[0] == arr[8]){
                        char check = arr[0];
                        if(check =='x'){
                            printf("Player1 (x) is Winning\n");
                            flag=1;
                        }
                    
                        else{  
                            printf("Player2 (0) is Winning\n"); 
                            flag=1;
                        }
                    } 
                if(arr[1] != ' '){
                    if(arr[1] == arr[4] && arr[1] == arr[7]){
                        char check = arr[1];
                        if(check == 'x'){
                            printf("Player1 (x) is Winning\n");
                            flag=1;
                        }
                        else  {
                            printf("Player2 (0) is Winning\n"); 
                            flag=1;
                        }
                            
                    }
                }

                if(arr[2] != ' '){
                    if(arr[2] == arr[4] && arr[2] == arr[6]  || arr[2] == arr[5] && arr[2] == arr[8] )  {
                        char check = arr[2];
                        if(check =='x'){
                            printf("Player1 (x) is Winning\n");
                            flag=1;
                        }
                        else  {
                            printf("Player2 (0) is Winning\n"); 
                            flag=1;
                        }
                    }
                }

                if(arr[3] != ' '){
                    if(arr[3] == arr[4] && arr[3] == arr[5]){
                        char check = arr[3];
                        if(check =='x'){
                            printf("Player1 (x) is Winning\n");
                            flag=1;
                        }
                        else{
                            printf("Player2 (0) is Winnin \n");
                            flag=1; 
                        }
                    }
                }

                if(arr[6] != ' '){
                    if(arr[6] == arr[7] && arr[6] == arr[8]){
                        char check = arr[6];
                        if(check =='x'){
                            printf("Player1 (x) is Winning\n");
                            flag=1;
                        }
                        else {
                            printf("Player2 (0) is Winning\n"); 
                            flag=1;
                        }
                    }
                }
                
                }
            return flag;
}