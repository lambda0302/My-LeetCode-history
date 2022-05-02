char ** fizzBuzz(int n, int* returnSize){
    char** answer=(char**)malloc(sizeof(char*)*n);
    *returnSize=n;
    for(int i=0;i<n;i++){
        if(!((i+1)%15)){
            answer[i]=(char*)malloc(sizeof(char)*10);
            strcpy(answer[i],"FizzBuzz");
        }else if(!((i+1)%3)){
            answer[i]=(char*)malloc(sizeof(char)*10);
         strcpy(answer[i],"Fizz");
        }else if(!((i+1)%5)){
            answer[i]=(char*)malloc(sizeof(char)*10);
            strcpy(answer[i],"Buzz");
        }else{
            answer[i]=(char*)malloc(sizeof(char)*10);
            sprintf(answer[i],"%d",i+1);
        }


    }
    return answer;
}
