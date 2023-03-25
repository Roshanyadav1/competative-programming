let arr = ["5", "-2", "4", "C", "D", "9", "+", "+"];

const calculateSum = (arr) => {
    let newArr = []
    arr.forEach(ele => {
        if (ele === "+") {
            //previous ke two
            let sum = (newArr.length - 1) + (newArr.length - 2);
            newArr.push(sum)
        } else if (ele === "C") {
            //remove an element
            newArr.pop()
        } else if (ele === "D") {
            //double previous element
            let pro = (newArr.length - 1) * 2
            newArr.push(pro)
        } else {
            newArr.push(ele)
        }
    });

    let sum = 0;
    newArr.forEach((ele) => {
        sum += ele;
    })
    return sum
}

console.log(calculateSum(arr))

