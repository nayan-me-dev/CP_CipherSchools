//leetcode
class Solution {
  public:
    vector < int > nextGreaterElement(vector < int > & nums1, vector < int > & nums2)
    {
      map < int, int > map;
      vector<int>ans;
      int n = nums2.size();
      if (n == 0 || nums1.size() == 0) return ans;
      stack<int>st;
      for (int i = 0; i < n; i++) {
        if (st.size() == 0) {
          st.push(nums2[i]);
        } else {
          while (st.size() > 0 && nums2[i] > st.top()) {
            map[st.top()] = nums2[i];
            st.pop();
          }
          st.push(nums2[i]);
        }
      }
      for (int i = 0; i < nums1.size(); i++) {
        if (map.count(nums1[i])) {
          ans.push_back(map[nums1[i]]);
        } else {
          ans.push_back(-1);
        }
      }
      return ans;

    }
};
