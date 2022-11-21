There are two types of people .some mark after pushing into queue and some mark the maze after popping. In this question it's better to mark visited as soon as we push into queue becuase of Test Cases

A Z
X B
when we deal with cell X, we push A and B in queue.
next round, when we deal with A we push Z in queue, when we deal with B we push Z in queue again.
Here is the problem. At the third round we do the same work for Z twice.
In correct version, when we deal with X, we mark Z as visited cell immediately. So when we deal with B, we would pass Z as it has already been visited
