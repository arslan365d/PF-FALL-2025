//Poblem Link: https://leetcode.com/problems/merge-sorted-array/
int *merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    for(int i=0;i<nums1Size-m;i++){
        nums1[i+m] = nums2[i];
    }

    for(int i=0;i<nums1Size;i++){
        for(int j=0;j<nums1Size-i-1;j++){
            if(nums1[j]>nums1[j+1]){
           int temp = nums1[j];
           nums1[j] = nums1[j+1];
           nums1[j+1] = temp;
            }
        }
    }

    return nums1;
}
