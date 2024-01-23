class Solution {
public:
    // Function to find all unique triplets that sum up to the target
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Set the target sum to 0
        int target = 0;

        // Sort the input array for easier traversal and duplicate handling
        sort(nums.begin(), nums.end());

        // Use a set to store unique triplets
        set<vector<int>> s;

        // Vector to store the final output
        vector<vector<int>> output;

        // Iterate through the sorted array
        for (int i = 0; i < nums.size(); i++){
            // Initialize pointers for the second and third elements
            int j = i + 1;
            int k = nums.size() - 1;

            // Iterate through the remaining elements using two pointers
            while (j < k) {
                // Calculate the sum of the triplet
                int sum = nums[i] + nums[j] + nums[k];

                // Check if the sum is equal to the target
                if (sum == target) {
                    // Insert the triplet into the set to ensure uniqueness
                    s.insert({nums[i], nums[j], nums[k]});

                    // Move the pointers to avoid duplicates
                    j++;
                    k--;
                } else if (sum < target) {
                    // If the sum is less than the target, move the left pointer
                    j++;
                } else {
                    // If the sum is greater than the target, move the right pointer
                    k--;
                }
            }
        }

        // Copy unique triplets from the set to the output vector
        for(auto triplets : s)
            output.push_back(triplets);

        // Return the final output vector
        return output;
    }
};
