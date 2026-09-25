class Solution {
public:
    bool validMountainArray(vector<int>& arr) { 
        int n=arr.size();

        if(n<3)
        return false;

        int i=0;

    while(i+1<n && arr[i]<arr[i+1]){  //INCREASING PART
          i++;
    } 

if(i==0 || i==n-1) // PEAK ELEMENTS CANNOT BE STARTING OR ENDING PT OF AN ARR
    return false;

    while(i+1<n && arr[i]>arr[i+1]){
        i++;
    }

    if(i==n-1) //CHECK ELEMENT TRAVERSED UPTO LAST ELEMENT OR NOT
    return true;

    else{
        return false;
    }
    }
};