#include<stdio.h>
int main(){
    char ch[100];
    int arr[100];
    int i;
    arr[i]=0;
    int count=0;
    scanf("%s",&ch[100]);
    int length=0;
    // while(ch[length]!='\0')
    // {
    //     length++;
    // }
    // for(int i=0;i<100;i++){
    //    scanf("%s",&ch[i]);
    // }
    switch(ch[i]){
        case 'a':{
            
            arr[0]=1;

            
            }
            case 'b':{
                
              arr[1]=1;
              
            }
            case 'c':{
                
              arr[2]=1;
            }
            case 'd':{
                
              arr[3]=1;
            }
            case 'e':{
                
            arr[4]=1;
            }
             case 'f':{
                 
            arr[5]=1;
            }
            case 'g':{
                
            arr[6]=1;
            }
            case 'h':{
                
            arr[7]=1;
            }
            case 'i':{
             
            arr[8]=1;
            }
            case 'j':{
             
            arr[9]=1;
            }
             case 'k':{
              
            arr[10]=1;
            }
            case 'l':{
                
            arr[11]=1;
            }
            case 'm':{
             
            arr[12]=1;
            }
            case 'n':{
             
            arr[13]=1;
            }
            case 'o':{
              
              
              arr[14]=1;
            }
             case 'p':{
            
            arr[15]=1;
            }
            case 'q':{
            
            arr[16]=1;
            }
            case 'r':{
            
            arr[17]=1;
            }
            case 's':{
            
            arr[18]=1;
            }
            case 't':{
            
            arr[19]=1;
            }
             case 'u':{
            
            arr[20]=1;
            }
            case 'v':{
            
            arr[21]=1;
            }
            case 'w':{
            
            arr[22]=1;
            }
            case 'x':{
            
            arr[23]=1;
            }
            case 'y':{
            
            arr[24]=1;
            }
            case 'z':{
            
            arr[25]=1;
        
          }
    }
    
     for(int i=0;i<=length;i++){
         if(arr[i]!=1){
             count=count+1;
         }
         else{
             printf("NO");
             break;
         }

     }
     if(count+1==25){
          printf("yes");
     }
    //printf("%d",count);
}

     