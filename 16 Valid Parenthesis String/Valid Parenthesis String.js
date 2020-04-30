/**
 * @param {string} s
 * @return {boolean}
 */
var checkValidString = function (s) {
    let leftParenthesis = [], star = [];
    for (let i = 0; i < s.length; i++) {
        if (s[i] == '(')
            leftParenthesis.push(i);
        else if (s[i] == ')') {
            if (leftParenthesis.length > 0)
                leftParenthesis.pop();
            else if (star.length > 0)
                star.pop();
            else
                return false;
        }
        else
            star.push(i);
    }
    while (leftParenthesis.length > 0 && star.length > 0) {
        if (leftParenthesis[leftParenthesis.length - 1] > star[star.length - 1])
            return false;
        else {
            leftParenthesis.pop();
            star.pop();
        }
    }
    if (leftParenthesis.length == 0)
        return true;
    else
        return false;;

};