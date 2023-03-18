class BrowserHistory {
public:
    vector<string>s;
    int current=-1,last=0;
    BrowserHistory(string homepage) {
        s.resize(101);
        current++;
        s[current]=homepage;
        last=current;
    }
    
    void visit(string url) {
        current++;
        s[current]=url;
        last=current;
    }
    
    string back(int steps) {
        while(steps>0 && current>0)
        {
            current--;
            steps--;
        }
        return s[current];
    }
    
    string forward(int steps) {
        while(steps>0 && current<last)
        {
            current++;
            steps--;
        }
        return s[current];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */