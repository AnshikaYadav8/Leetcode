class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) 
            return findMedianSortedArrays(nums2, nums1);
        
        int m = nums1.size(), n = nums2.size();
        int left = 0, right = m, mid1, mid2;
        
        while (left <= right) {
            mid1 = left + (right - left) / 2;
            mid2 = (m + n + 1) / 2 - mid1;

            int maxLeft1 = (mid1 == 0) ? INT_MIN : nums1[mid1 - 1];
            int minRight1 = (mid1 == m) ? INT_MAX : nums1[mid1];

            int maxLeft2 = (mid2 == 0) ? INT_MIN : nums2[mid2 - 1];
            int minRight2 = (mid2 == n) ? INT_MAX : nums2[mid2];

            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                if ((m + n) % 2 == 0) 
                    return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
                else 
                    return max(maxLeft1, maxLeft2);
            }
            else if (maxLeft1 > minRight2) 
                right = mid1 - 1;
            else 
                left = mid1 + 1;
        }
        return 0.0;
    }
};