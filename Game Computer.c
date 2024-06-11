#include<stdio.h>
void display(char* );
int check(char* );
int win(char* ,int );
int stopWin(char* , int );

void main(){
    char arr[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    int choice;
    for(int i=0;i<9;i){
        printf("\nenter the user choice (O) 1 to 9:");
        scanf("%d",&choice);
        if(choice>0 && choice<10 && arr[choice-1] == ' '){
            arr[choice-1] = 'O';
        }
        else{
            printf("Enter New Location user choice (O) 1 to 9:");
            scanf("%d",&choice);
            if(choice>0 && choice<10 && arr[choice-1] == ' ')                                //if already store the give second chance to input
                arr[choice-1] = 'O';
            else
                printf("you entered wrong choice");
        }
      
        i++;

        if(i>=5){
            int res = check(arr);
            if(res==1){                                             //if i>5 it start checkih who is winning or not
                printf("res ==1\n");
                break;
            }
        }

        if(i==9){
            printf("\n*** MATCH DRAW! ***\n");                            //if i==9 means all value store means match draw then it will print draw
            display(arr);
            break;
        }
        int flag =0;

        if(i>=5)
            flag = win(arr,i);                                  //win function call it can give input(X) to win computer
         

        if(flag==0 && i>=3)
            flag =stopWin(arr,i);                       // stopWin fun call it can give input(O) to stop win the user
            
        if(flag==0){ 
            if(arr[0] == ' '){
                    arr[0] = 'X';
            }
            else if(arr[1] == ' '){
                    arr[1] = 'X';
            }
            else if(arr[2] == ' '){
                    arr[2] = 'X';
            }
            else if(arr[3] == ' '){
                    arr[3] = 'X';
            }
            else if(arr[4] == ' '){
                    arr[4] = 'X';
            }
            else if(arr[5] == ' '){
                    arr[5] = 'X';
            }
            else if(arr[6] == ' '){
                    arr[6] = 'X';
            }
            else if(arr[7] == ' '){
                    arr[7] = 'X';
            }
            else if(arr[8] == ' '){
                    arr[8] = 'X';
            }     
        }
      
        display(arr);
        i++;
        if(i>=5){
            int res = check(arr);
            if(res==1){
                break;
            }
        }
    }
}





void display(char* arr){
    for(int i=0;i<9;i++){                          
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
                        if(check =='X'){
                            printf("Player1 (x) is Winning \n");
                            flag=1;
                        }
                    
                        else{  
                            printf("Player2 (0) is Winning \n");
                            display(arr); 
                            flag=1;
                        }
                    } 
                if(arr[1] != ' '){
                    if(arr[1] == arr[4] && arr[1] == arr[7]){
                        char check = arr[1];
                        if(check == 'X'){
                            printf("\nPlayer1 (x) is Winning \n");
                            flag=1;
                        }
                        else  {
                            printf("\nPlayer2 (0) is Winning \n"); 
                            display(arr);
                            flag=1;
                        }
                            
                    }
                }

                if(arr[2] != ' '){
                    if(arr[2] == arr[4] && arr[2] == arr[6]  || arr[2] == arr[5] && arr[2] == arr[8] )  {
                        char check = arr[2];
                        if(check =='X'){
                            printf("\nPlayer1 (x) is Winning \n");
                            flag=1;
                        }
                        else  {
                            printf("\nPlayer2 (0) is Winning \n"); 
                            display(arr);
                            flag=1;
                        }
                    }
                }

                if(arr[3] != ' '){
                    if(arr[3] == arr[4] && arr[3] == arr[5]){
                        char check = arr[3];
                        if(check =='X'){
                            printf("\nPlayer1 (x) is Winning \n");
                            flag=1;
                        }
                        else{
                            printf("\nPlayer2 (0) is Winning\n");
                            display(arr);
                            flag=1; 
                        }
                    }
                }

                if(arr[6] != ' '){
                    if(arr[6] == arr[7] && arr[6] == arr[8]){
                        char check = arr[6];
                        if(check =='X'){
                            printf("\nPlayer1 (x) is Winning \n");
                            flag=1;
                        }
                        else {
                            printf("\nPlayer2 (0) is Winning \n"); 
                            display(arr);
                            flag=1;
                        }
                    }
                }
                
                }
            return flag;
}

int win(char* arr,int i){

    int flag=0;
    if(i>=5 &&( (arr[0] == 'X' && arr[1] == 'X') || (arr[0] == 'X' && arr[4] == 'X') || (arr[0] == 'X' && arr[3] == 'X') || (arr[0] == 'X' && arr[2] == 'X') || (arr[0] == 'X' && arr[8] == 'X') || (arr[0] == 'X' && arr[6] == 'X') || 
                        (arr[1] == 'X' && arr[4] == 'X') ||  (arr[1] == 'X' && arr[7] == 'X') || (arr[1] == 'X' && arr[0] == 'X') || (arr[1] == 'X' && arr[2] == 'X') ||
                        (arr[2] == 'X' && arr[1] == 'X') || (arr[2] == 'X' && arr[4] == 'X') || (arr[2] == 'X' && arr[5] == 'X') || (arr[2] == 'X' && arr[0] == 'X') || (arr[2] == 'X' && arr[6] == 'X') || (arr[2] == 'X' && arr[8] == 'X') ||
                        (arr[3] == 'X' && arr[4] == 'X') || (arr[3] == 'X' && arr[0] == 'X') || (arr[3] == 'X' && arr[6] == 'X') || (arr[3] == 'X' && arr[5] == 'X') ||
                        (arr[4] == 'X' && arr[0] == 'X') || (arr[4] == 'X' && arr[1] == 'X') || (arr[4] == 'X' && arr[2] == 'X') || (arr[4] == 'X' && arr[3] == 'X') || (arr[4] == 'X' && arr[5] == 'X') || (arr[4] == 'X' && arr[6] == 'X') || (arr[4] == 'X' && arr[7] == 'X') || (arr[4] == 'X' && arr[8] == 'X') ||
                        (arr[5] == 'X' && arr[2] == 'X') || (arr[5] == 'X' && arr[4] == 'X') || (arr[5] == 'X' && arr[3] == 'X') || (arr[5] == 'X' && arr[8] == 'X') || 
                        (arr[6] == 'X' && arr[3] == 'X') || (arr[6] == 'X' && arr[4]== 'X') || (arr[6] == 'X' && arr[7]== 'X') || (arr[6] == 'X' && arr[0]== 'X') || (arr[6] == 'X' && arr[2]== 'X') || (arr[6] == 'X' && arr[8]== 'X') ||
                        (arr[7] == 'X' && arr[4] == 'X') || (arr[7] == 'X' && arr[8]== 'X') || (arr[7] == 'X' && arr[1] == 'X') || (arr[7] == 'X' && arr[6]== 'X') ||
                        (arr[8] == 'X' && arr[5] == 'X') || (arr[8] == 'X' && arr[4] == 'X') || (arr[8] == 'X' && arr[7]== 'X') || (arr[8] == 'X' && arr[2] == 'X') || (arr[8] == 'X' && arr[0] == 'X') || (arr[8] == 'X' && arr[6]== 'X')
                        ))
    {
        if(flag==0){
            if(arr[0] == 'X' && arr[1] == 'X'){     //1         for 0
                if(arr[2] == ' '){
                    flag=1;
                    arr[2] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[0] == 'X' && arr[4] == 'X'){      //2
                if(arr[8] == ' '){
                    flag=1;
                    arr[8] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[0] == 'X' && arr[3] == 'X'){     //3
                if(arr[6] == ' '){          
                    flag=1;
                    arr[6] = 'X'; 
                } 
            }
        }
        if(flag==0){
            if(arr[0] == 'X' && arr[2] == 'X'){       //4
                if(arr[1] == ' '){
                    flag=1;
                    arr[1] = 'X'; 
                } 
            }
        }
        if(flag==0){
            if(arr[0] == 'X' && arr[8] == 'X'){         //5
                if(arr[4] == ' '){
                    flag=1;
                    arr[4] = 'X'; 
                } 
            }
        }
        if(flag==0){
            if(arr[0] == 'X' && arr[6] == 'X'){         //6
                if(arr[3] == ' '){
                    flag=1;
                    arr[3] = 'X'; 
                } 
            }
        }
        if(flag==0){
            if(arr[1] == 'X' && arr[4] == 'X'){         //7         for 1
                if(arr[7] == ' '){
                    flag=1;
                    arr[7] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[1] == 'X' && arr[7] == 'X'){        //8
                if(arr[4] == ' '){
                    flag=1;
                    arr[4] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[1] == 'X' && arr[0] == 'X'){         //9
                if(arr[2] == ' '){
                    flag=1;
                    arr[2] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[1] == 'X' && arr[2] == 'X'){         //10
                if(arr[0] == ' '){
                    flag=1;
                    arr[0] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[2] == 'X' && arr[1] == 'X'){        //11        for 2
                if(arr[0] == ' '){
                    flag=1;
                    arr[0] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[2] == 'X' && arr[4] == 'X'){     //12
                if(arr[6] == ' '){
                    flag=1;
                    arr[6] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[2] == 'X' && arr[5] == 'X'){         //13
                if(arr[8] == ' '){
                    flag=1;
                    arr[8] = 'X';
                }
                }
            }
        if(flag==0){
            if(arr[2] == 'X' && arr[0] == 'X'){        //14
                if(arr[1] == ' '){
                    flag=1;
                    arr[1] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[2] == 'X' && arr[6] == 'X'){     //15
                if(arr[4] == ' '){
                    flag=1;
                    arr[4] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[2] == 'X' && arr[8] == 'X'){         //16
                if(arr[5] == ' '){
                    flag=1;
                    arr[5] = 'X';
                }
            }
        }        
        if(flag==0){
            if(arr[3] == 'X' && arr[4] == 'X'){        //17        for 3
                if(arr[5] == ' '){
                    flag=1;
                    arr[5] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[3] == 'X' && arr[0] == 'X'){        //18
                if(arr[6] == ' '){
                    flag=1;
                    arr[6] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[3] == 'X' && arr[6] == 'X'){        //19
                if(arr[0] == ' '){
                    flag=1;
                    arr[0] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[3] == 'X' && arr[5] == 'X'){       //20
                if(arr[4] == ' '){
                    flag=1;
                    arr[4] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[4] == 'X' && arr[0] == 'X'){        //21        for 4
                if(arr[8] == ' '){
                    flag=1;
                    arr[8] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[4] == 'X' && arr[1] == 'X'){            //22
                    if(arr[7] == ' '){
                        flag=1;
                        arr[7] = 'X';
                    }
            }
        }
        if(flag==0){
            if(arr[4] == 'X' && arr[2] == 'X'){         //23
                if(arr[6] == ' '){
                    flag=1;
                    arr[6] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[4] == 'X' && arr[3] == 'X'){         //24
                if(arr[5] == ' '){
                    flag=1;
                    arr[5] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[4] == 'X' && arr[5] == 'X'){         //25
                if(arr[3] == ' '){
                    flag=1;
                    arr[3] = 'X';
                    }
                }
            }
        if(flag==0){
            if(arr[4] == 'X' && arr[6] == 'X'){            //26
                if(arr[2] == ' '){
                    flag=1;
                    arr[2] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[4] == 'X' && arr[7] == 'X'){        //27
                if(arr[1] == ' '){
                    flag=1;
                    arr[1] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[4] == 'X' && arr[8] == 'X'){        //28
                if(arr[0] == ' '){
                    flag=1;
                    arr[0] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[5] == 'X' && arr[2] == 'X'){     //29            for 5
                if(arr[8] == ' '){
                    flag=1;
                    arr[8] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[5] == 'X' && arr[4] == 'X'){         //30
                if(arr[3] == ' '){
                    flag=1;
                    arr[3] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[5] == 'X' && arr[3] == 'X'){         //31
                if(arr[4] == ' '){
                    flag=1;
                    arr[4] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[5] == 'X' && arr[8] == 'X'){        //32
                if(arr[2] == ' '){
                    flag=1;
                    arr[2] = 'X';
                }
            }
        }
        if(flag==0){
            if (arr[6] == 'X' && arr[3]== 'X'){         //33            for 6
                if(arr[0] == ' '){
                    flag=1;
                    arr[0] = 'X';
                }
            }
        }
        if(flag==0){
            if (arr[6] == 'X' && arr[4]== 'X'){     //34
                if(arr[2] == ' '){
                    flag=1;
                    arr[2] = 'X';
                }
            }
        }
        if(flag==0){
            if (arr[6] == 'X' && arr[7]== 'X'){        //35
                if(arr[8] == ' '){
                    flag=1;
                    arr[8] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[6] == 'X' && arr[0]== 'X'){     //36
                if(arr[3] == ' '){
                    flag=1;
                    arr[3] = 'X';
                }
            }
        }
        if(flag==0){
            if (arr[6] == 'X' && arr[2]== 'X'){    //37
                if(arr[4] == ' '){
                    flag=1;
                    arr[4] = 'X';
                }
            }
        }
        if(flag==0){
            if (arr[6] == 'X' && arr[8]== 'X'){        //38
                if(arr[7] == ' '){
                    flag=1;
                    arr[7] = 'X';
                }
            }
        }
        if(flag==0){   
            if(arr[7] == 'X' && arr[4] == 'X'){        //39                for 7
                if(arr[1] == ' '){
                    flag=1;
                    arr[1] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[7] == 'X' && arr[8]== 'X'){     //40
                if(arr[6] == ' '){
                    flag=1;
                    arr[6] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[7] == 'X' && arr[1] == 'X'){        //41
                if(arr[4] == ' '){
                    flag=1;
                    arr[4] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[7] == 'X' && arr[6]== 'X'){     //42
                if(arr[8] == ' '){
                    flag=1;
                    arr[8] = 'X';
                }
            }
        }            
        if(flag==0){
            if(arr[8] == 'X' && arr[5] == 'X'){        //43                for 8
                if(arr[2] == ' '){
                    flag=1;
                    arr[2] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[8] == 'X' && arr[4] == 'X'){        //44
                if(arr[0] == ' '){
                    flag=1;
                    arr[0] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[8] == 'X' && arr[7]== 'X'){     //45
                if(arr[6] == ' '){
                    flag=1;
                    arr[6] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[8] == 'X' && arr[2] == 'X'){        //46
                if(arr[5] == ' '){
                    flag=1;
                    arr[5] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[8] == 'X' && arr[0] == 'X'){        //47
                if(arr[4] == ' '){
                    flag=1;
                    arr[4] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[8] == 'X' && arr[6]== 'X'){     //48
                if(arr[7] == ' '){
                    flag=1;
                    arr[7] = 'X';
                }
            }          
        }
                        
    }            
    return flag;
}

int stopWin(char* arr, int i){
    int flag=0;
    if(i>=3 && ((arr[0] == 'O' && arr[1] == 'O') || (arr[0] == 'O' && arr[4] == 'O') || (arr[0] == 'O' && arr[3] == 'O') || (arr[0] == 'O' && arr[2] == 'O') || (arr[0] == 'O' && arr[8] == 'O') || (arr[0] == 'O' && arr[6] == 'O') || 
                            (arr[1] == 'O' && arr[4] == 'O') ||  (arr[1] == 'O' && arr[7] == 'O') || (arr[1] == 'O' && arr[0] == 'O') || (arr[1] == 'O' && arr[2] == 'O') ||
                            (arr[2] == 'O' && arr[1] == 'O') || (arr[2] == 'O' && arr[4] == 'O') || (arr[2] == 'O' && arr[5] == 'O') || (arr[2] == 'O' && arr[0] == 'O') || (arr[2] == 'O' && arr[6] == 'O') || (arr[2] == 'O' && arr[8] == 'O') ||
                            (arr[3] == 'O' && arr[4] == 'O') || (arr[3] == 'O' && arr[0] == 'O') || (arr[3] == 'O' && arr[6] == 'O') || (arr[3] == 'O' && arr[5] == 'O') ||
                            (arr[4] == 'O' && arr[0] == 'O') || (arr[4] == 'O' && arr[1] == 'O') || (arr[4] == 'O' && arr[2] == 'O') || (arr[4] == 'O' && arr[3] == 'O') || (arr[4] == 'O' && arr[5] == 'O') || (arr[4] == 'O' && arr[6] == 'O') || (arr[4] == 'O' && arr[7] == 'O') || (arr[4] == 'O' && arr[8] == 'O') ||
                            (arr[5] == 'O' && arr[2] == 'O') || (arr[5] == 'O' && arr[4] == 'O') || (arr[5] == 'O' && arr[3] == 'O') || (arr[5] == 'O' && arr[8] == 'O') || 
                            (arr[6] == 'O' && arr[3] == 'O') || (arr[6] == 'O' && arr[4] == 'O') || (arr[6] == 'O' && arr[7] == 'O') || (arr[6] == 'O' && arr[0] == 'O') || (arr[6] == 'O' && arr[2]== 'O') || (arr[6] == 'O' && arr[8]== 'O') ||
                            (arr[7] == 'O' && arr[4] == 'O') || (arr[7] == 'O' && arr[8] == 'O') || (arr[7] == 'O' && arr[1] == 'O') || (arr[7] == 'O' && arr[6] == 'O') ||
                            (arr[8] == 'O' && arr[5] == 'O') || (arr[8] == 'O' && arr[4] == 'O') || (arr[8] == 'O' && arr[7] == 'O') || (arr[8] == 'O' && arr[2] == 'O') || (arr[8] == 'O' && arr[0] == 'O') || (arr[8] == 'O' && arr[6]== 'O')
                        ))
    {
        if(flag==0){
            if(arr[0] == 'O' && arr[1] == 'O' ){
                if(arr[2] == ' '){
                    flag=1;
                    arr[2] = 'X';
                }
            }
        }
        if(flag==0){
            if(arr[0] == 'O' && arr[4] == 'O'){
                if(arr[8] == ' '){
                    flag=1;
                    arr[8] = 'X';
                }
            }
            if(flag==0){
                if(arr[0] == 'O' && arr[3] == 'O'){
                    if(arr[6] == ' '){
                        flag=1;
                        arr[6] = 'X'; 
                    } 
                }
            }
            if(flag==0){
                if(arr[0] == 'O' && arr[2] == 'O'){
                    if(arr[1] == ' '){
                    flag=1;
                    arr[1] = 'X'; 
                    } 
                }
            }
            if(flag==0){
                if(arr[0] == 'O' && arr[8] == 'O'){
                    if(arr[4] == ' '){
                        flag=1;
                        arr[4] = 'X'; 
                    } 
                }
            }
            if(flag==0){
                if(arr[0] == 'O' && arr[6] == 'O'){
                    if(arr[3] == ' '){
                        flag=1;
                        arr[3] = 'X'; 
                    } 
                }
            }
            if(flag==0){
                if(arr[1] == 'O' && arr[4] == 'O'){
                    if(arr[7] == ' '){
                        flag=1;
                        arr[7] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[1] == 'O' && arr[7] == 'O'){
                    if(arr[4] == ' '){
                        flag=1;
                        arr[4] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[1] == 'O' && arr[0] == 'O'){
                    if(arr[2] == ' '){
                        flag=1;
                        arr[2] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[1] == 'O' && arr[2] == 'O'){
                    if(arr[0] == ' '){
                        flag=1;
                        arr[0] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[2] == 'O' && arr[1] == 'O'){
                    if(arr[0] == ' '){
                        flag=1;
                        arr[0] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[2] == 'O' && arr[4] == 'O'){
                    if(arr[6] == ' '){
                        flag=1;
                        arr[6] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[2] == 'O' && arr[5] == 'O'){
                    if(arr[8] == ' '){
                        flag=1;
                        arr[8] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[2] == 'O' && arr[0] == 'O'){
                    if(arr[1] == ' '){
                        flag=1;
                        arr[1] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[2] == 'O' && arr[6] == 'O'){
                    if(arr[4] == ' '){
                        flag=1;
                        arr[4] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[2] == 'O' && arr[8] == 'O'){
                    if(arr[5] == ' '){
                        flag=1;
                        arr[5] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[3] == 'O' && arr[4] == 'O'){
                    if(arr[5] == ' '){
                        flag=1;
                        arr[5] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[3] == 'O' && arr[0] == 'O'){
                    if(arr[6] == ' '){
                        flag=1;
                        arr[6] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[3] == 'O' && arr[6] == 'O'){
                    if(arr[0] == ' '){
                        flag=1;
                        arr[0] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[3] == 'O' && arr[5] == 'O'){
                    if(arr[4] == ' '){
                        flag=1;
                        arr[4] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[4] == 'O' && arr[0] == 'O'){
                    if(arr[8] == ' '){
                        flag=1;
                        arr[8] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[4] == 'O' && arr[1] == 'O'){
                    if(arr[7] == ' '){
                        flag=1;
                        arr[7] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[4] == 'O' && arr[2] == 'O'){
                    if(arr[6] == ' '){
                        flag=1;
                        arr[6] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[4] == 'O' && arr[3] == 'O'){
                    if(arr[5] == ' '){
                        flag=1;
                        arr[5] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[4] == 'O' && arr[5] == 'O'){
                    if(arr[3] == ' '){
                        flag=1;
                        arr[3] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[4] == 'O' && arr[6] == 'O'){
                    if(arr[2] == ' '){
                        flag=1;
                        arr[2] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[4] == 'O' && arr[7] == 'O'){
                    if(arr[1] == ' '){
                        flag=1;
                        arr[1] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[4] == 'O' && arr[8] == 'O'){
                    if(arr[0] == ' '){
                        flag=1;
                        arr[0] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[5] == 'O' && arr[2] == 'O'){
                    if(arr[8] == ' '){
                        flag=1;
                        arr[8] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[5] == 'O' && arr[4] == 'O'){
                    if(arr[3] == ' '){
                        flag=1;
                        arr[3] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[5] == 'O' && arr[3] == 'O'){
                    if(arr[4] == ' '){
                        flag=1;
                        arr[4] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[5] == 'O' && arr[8] == 'O'){
                    if(arr[2] == ' '){
                        flag=1;
                        arr[2] = 'X';
                    }
                }
            }
            if(flag==0){
                if (arr[6] == 'O' && arr[3]== 'O'){
                    if(arr[0] == ' '){
                        flag=1;
                        arr[0] = 'X';
                    }
                }
            }
            if(flag==0){
                if (arr[6] == 'O' && arr[4]== 'O'){
                    if(arr[2] == ' '){
                        flag=1;
                        arr[2] = 'X';
                    }
                }
            }
            if(flag==0){
                if (arr[6] == 'O' && arr[7]== 'O'){
                    if(arr[8] == ' '){
                        flag=1;
                        arr[8] = 'X';
                    }
                }
            }
            if(flag==0){
                if (arr[6] == 'O' && arr[0]== 'O'){
                    if(arr[3] == ' '){
                        flag=1;
                        arr[3] = 'X';
                    }
                }
            }
            if(flag==0){
                if (arr[6] == 'O' && arr[2]== 'O'){
                    if(arr[4] == ' '){
                        flag=1;
                        arr[4] = 'X';
                    }
                }
            }
            if(flag==0){
                if (arr[6] == 'O' && arr[8]== 'O'){
                    if(arr[7] == ' '){
                        flag=1;
                        arr[7] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[7] == 'O' && arr[4] == 'O'){
                    if(arr[1] == ' '){
                        flag=1;
                        arr[1] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[7] == 'O' && arr[8]== 'O'){
                    if(arr[6] == ' '){
                        flag=1;
                        arr[6] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[7] == 'O' && arr[1] == 'O'){
                    if(arr[4] == ' '){
                        flag=1;
                        arr[4] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[7] == 'O' && arr[6]== 'O'){
                    if(arr[8] == ' '){
                        flag=1;
                        arr[8] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[8] == 'O' && arr[5] == 'O'){
                    if(arr[2] == ' '){
                        flag=1;
                        arr[2] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[8] == 'O' && arr[4] == 'O'){
                    if(arr[0] == ' '){
                        flag=1;
                        arr[0] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[8] == 'O' && arr[7]== 'O'){
                    if(arr[6] == ' '){
                        flag=1;
                        arr[6] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[8] == 'O' && arr[2] == 'O'){
                    if(arr[5] == ' '){
                        flag=1;
                        arr[5] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[8] == 'O' && arr[0] == 'O'){
                    if(arr[4] == ' '){
                        flag=1;
                        arr[4] = 'X';
                    }
                }
            }
            if(flag==0){
                if(arr[8] == 'O' && arr[6]== 'O'){
                    if(arr[7] == ' '){
                        flag=1;
                        arr[7] = 'X';
                    }
                } 
            }
                        
        }
                
    }
        return flag;
}