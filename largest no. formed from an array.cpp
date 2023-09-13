class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
static bool cmp(string a,string b){
        string first=a+b;
        string second=b+a;
        return first>second;
    }
    string printLargest(vector<string> &arr) {
        
        sort(arr.begin(),arr.end(),cmp);
        string ans="";
        for(int i=0;i<arr.size();i++) ans+=arr[i];
        return ans;
        
    }
};
