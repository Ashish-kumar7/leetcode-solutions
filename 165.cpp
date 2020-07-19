class Solution {
public:
    int compareVersion(string version1, string version2) {
        long long int vnum1=0;
        long long int vnum2=0;
        for (int i = 0, j = 0; (i < version1.length() || j < version2.length());) { 
		while (i < version1.length() && version1[i] != '.') { 
			vnum1 = vnum1 * 10 + (version1[i] - '0'); 
			i++; 
		} 
		while (j < version2.length() && version2[j] != '.') { 
			vnum2 = vnum2 * 10 + (version2[j] - '0'); 
			j++; 
		} 
		if (vnum1 > vnum2) 
			return 1; 
		if (vnum2 > vnum1) 
			return -1; 
		vnum1 = vnum2 = 0; 
		i++; 
		j++; 
	}  
        return 0;
    }
};