#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
    class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;

   int i=0, j=0, k=0;

   while(i<m && j<n)
   {
       if(nums1[i]<nums2[j])
       {
           res[k++]=nums1[i];
       }
       else
       {
           res[k++]=nums1[j];
       }
   }

   while(i<m)
   {
       res[k++]=nums1[i];
   }

   while(j<n)
   {
       res[k++]=nums2[i];
   }
    }
       
};
