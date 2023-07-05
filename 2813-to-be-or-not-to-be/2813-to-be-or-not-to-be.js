/**
 * @param {string} val
 * @return {Object}
 */
var expect = (val) => ({
    toBe: (nextVal) => {
        if(val === nextVal) return true;
        throw new Error("Not Equal")
    },
    notToBe: (nextVal) => {
        if(val !== nextVal) return true;
        throw new Error("Equal")

    }
});

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */