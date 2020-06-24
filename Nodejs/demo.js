
const path = require("path");
const fs = require("fs");
// Promise.resolve(3).then(res => console.log(res));
// process.nextTick(() => console.log("nextTick"));

// process.nextTick(function A() {
//     console.log(1);
//     process.nextTick(function B(){
//         console.log(2);
//     });
// });

// setTimeout(function timeout() {
//     console.log('TIMEOUT FIRED');
// }, 0)

// nextTick
// 1
// 2
// 3
// TIMEOUT FIRED


// setTimeout(() => console.log("setTimeout"), 0);
// setImmediate(() => console.log("setImmediate"));

// const now = new Date();
// while(new Date() - now < 200) {}
// console.log("main process")

eventLoopTimer(1);

const file = path.resolve(__dirname, "../README.md");
fs.readFile(file, (err, data) => {
    if(err) {
        return console.log({file, err});
    }
    eventLoopTimer(2);
})

function eventLoopTimer(flag) {
    setTimeout(() => console.log("setTimeout" + flag), 0);
    setImmediate(() => console.log("setImmediate" + flag));
}