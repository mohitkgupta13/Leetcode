/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int n = numsSize;
    int issorted;
    int temp;
    *returnSize = n;
    int*arr = (int*)malloc(n*sizeof(int));
    for(int i = 0 ; i<n ; i++){
        arr[i] = pow(nums[i],2);
    }
    for(int i = 0 ; i<n-1 ; i++){
        issorted = 1;
        for(int j = 0 ; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                issorted = 0;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(issorted){
            break;
        }
    }

    return arr;
}