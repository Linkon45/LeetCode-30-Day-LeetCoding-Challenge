/**
 * initialize your data structure here.
 */
let stack = [];
var MinStack = function () {
    while (stack.length !== 0)
        stack.pop();

};

/** 
 * @param {number} x
 * @return {void}
 */
MinStack.prototype.push = function (x) {
    if (stack.length !== 0) {
        let temp = stack.pop();
        stack.push(temp);
        let mn = Math.min(x, temp[1]);
        stack.push([x, mn]);
    }
    else
        stack.push([x, x]);


};

/**
 * @return {void}
 */
MinStack.prototype.pop = function () {
    stack.pop();
};

/**
 * @return {number}
 */
MinStack.prototype.top = function () {
    let temp = stack.pop();
    stack.push(temp);
    return temp[0];


};

/**
 * @return {number}
 */
MinStack.prototype.getMin = function () {
    let temp = stack.pop();
    stack.push(temp);
    return temp[1];
};

/**
 * Your MinStack object will be instantiated and called as such:
 * var obj = new MinStack()
 * obj.push(x)
 * obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.getMin()
 */