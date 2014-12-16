/* Jason Brooks Binary_Tree in C++ O(n) time */

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <stdio.h>
#include <stack>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>

/*
*  Make sure header files are in the same directory
*/
#include "binary_tree.h"
#include "tracer.h"

// Show you a trick on how not to repeat your self
#define FOR(i, n) for(int i = 0; i < n; i++)
#define FORE(i, n) for(int i = n; i >= 0; i++)

#define p(t) cout << (t);
#define pn(t) cout << (t) << endl;
#define in(n) scanf("%d", &n);
#define mset(a,b,c) {memset(a,b,c);}
#define readinput(input, size) {fread(input, 1, size, stdin)}

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;

template <class Data>
void visit(BinaryTreeNode<Data> * btnode) {
    cout << *(btnode->data) << " ";
}

int main(int argc, char const* argv[])
{


















    return 0;
}
