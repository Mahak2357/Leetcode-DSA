class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int leftpointer=0;
        int rightpointer=n-1;
        int maxwater=0;

        while(leftpointer<rightpointer){
            int width = rightpointer-leftpointer;
            int h= min(height[leftpointer],height[rightpointer]);

            int currentwater= width*h;

            maxwater= max(currentwater, maxwater);
            if(height[leftpointer] < height[rightpointer]){
    leftpointer++;
}
else{
    rightpointer--;
}
        }
        return maxwater;
    }
};