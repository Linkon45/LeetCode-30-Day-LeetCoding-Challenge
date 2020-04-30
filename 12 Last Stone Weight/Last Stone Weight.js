/**
 * @param {number[]} stones
 * @return {number}
 */
var lastStoneWeight = function (stones) {
    stones.sort((a, b) => a - b);
    while (1) {
        if (stones.length < 2)
            break;
        let diff = stones[stones.length - 1] - stones[stones.length - 2];
        stones.pop();
        stones.pop();
        if (diff != 0)
            stones.push(diff);
        stones.sort((a, b) => a - b);
    }
    if (stones.length == 1)
        return stones[0];
    else
        return 0;

};