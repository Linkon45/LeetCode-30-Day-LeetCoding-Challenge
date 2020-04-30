/**
 * @param {string} s
 * @param {number[][]} shift
 * @return {string}
 */
var stringShift = function (s, shift) {
  for (let i = 0; i < shift.length; i++) {
    let x = shift[i][0];
    let y = shift[i][1] % s.length;
    if (x == 0) {
      let temp1 = s.substr(0, y);
      let temp2 = s.substr(y, s.length - y);
      s = temp2 + temp1;
    }
    else {
      let temp1 = s.substr(0, s.length - y);
      let temp2 = s.substr(s.length - y, y);
      s = temp2 + temp1;
    }
  }
  return s;
};