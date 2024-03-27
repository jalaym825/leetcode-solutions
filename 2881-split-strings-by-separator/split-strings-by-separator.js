/**
 * @param {string[]} words
 * @param {character} separator
 * @return {string[]}
 */
var splitWordsBySeparator = function(words, separator) {
    const arr = [];
    for(const word of words){
        arr.push(...(word.split(separator).filter(x => x != '')));
    }
    return arr;
};