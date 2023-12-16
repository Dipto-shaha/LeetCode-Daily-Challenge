/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    let tt =t.split('').sort().join('');
    let ss =s.split('').sort().join('');
    return tt===ss;
};