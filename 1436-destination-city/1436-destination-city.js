/**
 * @param {string[][]} paths
 * @return {string}
 */
var destCity = function(paths) {
    for(let city of paths)
    {
        var value=paths.find(item => item[0]==city[1]);
        if(value==undefined)
            return city[1];
    }
    return "";
};