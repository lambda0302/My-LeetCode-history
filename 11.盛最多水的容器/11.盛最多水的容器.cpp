#define MIN(a,b) ((a)<(b)?(a):(b))

int maxArea(int* height, int heightSize){
    int ans=0;
    for(int i=0;i<heightSize;){
        for(int j=heightSize-1;j>=0;){
            if(MIN(height[i],height[j])*(j-i)>ans){
                ans=MIN(height[i],height[j])*(j-i);
            }
            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
            if(i>=j){
                return ans;
            }
        }
    }
return 0;
}