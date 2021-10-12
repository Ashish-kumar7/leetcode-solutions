class Solution {
public:
  int findSpecialInteger(vector<int>& arr) {
	  double count = 1;
	  int s = arr.size();
	  for (int i = 1; i < arr.size(); i++) {
		  if (arr[i - 1] == arr[i]) count++;
		  if (count / s > 0.25) return arr[i - 1];
		  if(arr[i-1] != arr[i]) count = 1;
	  }
	  return arr[0];
  }
};