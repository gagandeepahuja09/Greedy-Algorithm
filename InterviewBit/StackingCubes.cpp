/*
Stacking Cubes

You are given N cubes that are of the same size. You are allowed to stack cubes on top of each other.

You can choose P cubes from the N cubes, such that you should stack all the remaining cubes on top of the P cubes, and each of the P cubes should have equal number of cubes on top of them.

Eg: Let's say you have 4 cubes.
If P = 1, you can stack the remaing 3 cubes on top of 1 cube.
If P = 2, you can stack the remaining 2 cubes each on top of one P cube, such that you have 2 stacks of 2 cubes each (as each of the P cubes should have the same number of cubes stacked).

Given N number of cubes, find out the number of ways you can stack cubes on top of each other in the given manner.

Every cube has to be stacked, you cannot have unstacked cubes. No stack can consist of a total of just one cube.

Input:

N: Number of cubes

Output:

Number of ways you can stack cubes on top if each other in the above given manner.

Constraints:

2 <= N <= 10^5

Example:

Input:
N: 2

Output:
1

Only one cube is stacked on another cube.

Input:
N: 6

Output:
3

You can have 5 cubes stacked on one cube, or 2 cubes stacked on one cube with a total of two stacks, or 1 cube stacked on one cube with a total of 3 stacks.

×
-->
*/

int Solution::solve(int A) {
    int cnt = 0;
    for(int i = 1; i < A; i++) {
        if(A % i == 0)
            cnt++;
    }
    return cnt;
}

