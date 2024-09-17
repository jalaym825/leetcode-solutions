/**
 * @param {string} s1
 * @param {string} s2
 * @return {string[]}
 */
var uncommonFromSentences = function(s1, s2) {
    const map = new Map();
    
    s1.split(" ").forEach(s => {
        map.set(s, (map.get(s) || 0) + 1);
    });
    
    s2.split(" ").forEach(s => {
        map.set(s, (map.get(s) || 0) + 1);
    });
    
    const ans = [];
    map.forEach((val, key) => {
        if (val === 1) {
            ans.push(key);
        }
    });
    
    return ans;
};
