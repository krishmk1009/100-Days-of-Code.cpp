class Solution {
public:
    string ans;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        ans = longUrl;
        return "";
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return ans;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
