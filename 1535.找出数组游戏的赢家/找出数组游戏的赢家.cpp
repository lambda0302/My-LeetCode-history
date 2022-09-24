int getWinner(int* arr, int arrSize, int k){
    int rec,temp;
    int count=0;
    int i=0;
    if(k>arrSize){
        k=arrSize;
    }
    while(count<k){
        if(arr[i%arrSize]>arr[(i+1)%arrSize]){
            rec=arr[i%arrSize];
            count++;
            temp=arr[(i+1)%arrSize];
            arr[(i+1)%arrSize]=arr[i%arrSize];
            arr[i%arrSize]=temp;
        }else{
            rec=arr[(i+1)%arrSize];
            count=1;
        }
        i++;
    }
    return rec;
}