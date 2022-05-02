char * countAndSay(int n){
    //递归终止条件
    if(n==1){
        return "1";
    }
    //递归未终止，进行递归
    char* k=countAndSay(n-1);
    char* ans=(char*)malloc(sizeof(char)*(2*strlen(k)+1));
    int count=0,j=0;
    char rec=k[0];
    for(int i=0;i<strlen(k);i++){
        //接下来的一个数字与前面的数字不同，为输出串赋值
        if(k[i]!=rec){
            rec=k[i];
            ans[j++]=count+'0';
            ans[j++]=k[i-1];
            count=1;
        //接下来的一个数字与前面的数字相同，计数加一
        }else{
            count++;
        }
 
    }
    //结束，赋上最后一组数字的信息
    ans[j++]=count+'0';
    ans[j++]=k[strlen(k)-1];

    ans[j]='\0';
    return ans;
}