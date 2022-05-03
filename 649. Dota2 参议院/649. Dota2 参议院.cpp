char * predictPartyVictory(char * senate){
    int n=strlen(senate);
    //两个数组，分别记录各方参议员序号
    int* R_index=(int*)malloc(4*n);
    int* D_index=(int*)malloc(4*n);
    int R_size=0,D_size=0;
    //为两数组赋值
    for(int i=0;i<n;i++){
        if(senate[i]=='R'){
            R_index[R_size++]=i;
        }else{
            D_index[D_size++]=i;
        }
    }
    //如果原串中只有一方参议员，结束
    if(R_size==0){
        return "Dire";
    }
    if(D_size==0){
        return "Radiant";
    }
    int kR=0,kD=0;
    int recR=0,recD=0;
    while(1){
        //两数组中参议员都有权利
        if(R_index[kR%R_size]!=-1&&D_index[kD%D_size]!=-1){
            //序号较大的丧失权利，记为-1，序号较小的+n，等待下一轮投票
            if(R_index[kR%R_size]>D_index[kD%D_size]){
                R_index[(kR++)%R_size]=-1;
                D_index[(kD++)%D_size]+=n;
            }else{
                D_index[(kD++)%D_size]=-1;
                R_index[(kR++)%R_size]+=n;
            }
        //R组对应参议员有权利
        }else if(R_index[kR%R_size]!=-1){
            //循环查找下一个有权利的D组参议员
            for(int i=0;i<D_size;i++){
                if(D_index[(kD+i)%D_size]!=-1){
                    kD=kD+i;
                    //找到了，recD记为1
                    recD=1;
                    break;
                }
            }
            //如果没找到，结束
            if(recD==0){
                return "Radiant";
            //如果找到了，重置recD值
            }else{
                recD=0;
            }
            //序号较大的丧失权利，记为-1，序号较小的+n，等待下一轮投票
            if(R_index[kR%R_size]>D_index[kD%D_size]){
                R_index[(kR++)%R_size]=-1;
                D_index[(kD++)%D_size]+=n;
            }else{
                D_index[(kD++)%D_size]=-1;
                R_index[(kR++)%R_size]+=n;
            }
        //D组对应参议员有权利，类似上方处理
        }else if(D_index[kD%D_size]!=-1){
            for(int i=0;i<R_size;i++){
                if(R_index[(kR+i)%R_size]!=-1){
                    kR=kR+i;
                    recR=1;
                    break;
                }
            }
            if(recR==0){
                return "Dire";
            }else{
                recR=0;
            }
            if(R_index[kR%R_size]>D_index[kD%D_size]){
                R_index[(kR++)%R_size]=-1;
                D_index[(kD++)%D_size]+=n;
            }else{
                D_index[(kD++)%D_size]=-1;
                R_index[(kR++)%R_size]+=n;
            }
        //两组对应参议员都没有权利
        }else{
            //查找下一个有权利的D组参议员
            for(int i=0;i<D_size;i++){
                if(D_index[(kD+i)%D_size]!=-1){
                    kD=kD+i;
                    recD=1;
                    break;
                }
            }
            if(recD==0){
                return "Radiant";
            }else{
                recD=0;
            }
            //查找下一个有权利的R组参议员
            for(int i=0;i<R_size;i++){
                if(R_index[(kR+i)%R_size]!=-1){
                    kR=kR+i;
                    recR=1;
                    break;
                }
            }
            if(recR==0){
                return "Dire";
            }else{
                recR=0;
            }

            if(R_index[kR%R_size]>D_index[kD%D_size]){
                R_index[(kR++)%R_size]=-1;
                D_index[(kD++)%D_size]+=n;
            }else{
                D_index[(kD++)%D_size]=-1;
                R_index[(kR++)%R_size]+=n;
            }

        }
        
    }

}