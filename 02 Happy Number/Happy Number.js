/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function (n) {
    let set = new Set();
    while (1) {
      let sum = 0;
      while (n > 0) {
        let rem = n % 10;
        sum += rem * rem;
        n = Math.floor(n / 10);
      }
      if (set.has(sum)) {
        flag = 1;
        break;
      } else if (sum === 1) return true;
      else set.add(sum);
      n = sum;
    }
    return false;
  };
  