int findLUSlength(char ** strs, int strsSize){

    int ans=-1;
    

    for(int i=0;i<strsSize;i++){
        for(int j=0;j<strsSize;j++){
            int t=0;
            for(int k=0;k<strlen(strs[j]);k++){
                if(strs[i][t]==strs[j][k]){
                    t++;
                }
            }
            if(t==strlen(strs[i])&&i!=j){
                break;
            }
            if(j==(strsSize-1)){
                int length=strlen(strs[i]);
                if(length>ans){
                    ans=strlen(strs[i]);
                    
                }
            }
        }
    }

return ans;

}