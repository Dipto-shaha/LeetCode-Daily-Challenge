/**
 * @param {string} path
 * @return {boolean}
 */
var isPathCrossing = function(path) {
    let st = new Set(),x=0,y=0;
    st.add("0,0");
    for(let s of path )
    {
        if(s == 'N')
            y++;
        else if(s=='E')
            x++;
        else if(s=='S')
            y--;
        else x--;
        
        let pos = `${x},${y}`;
        if(st.has(pos))
            return true;
        st.add(pos);
    }
    return false;
    
    
};