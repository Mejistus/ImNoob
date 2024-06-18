var fs = require("fs");
var data = fs.readFileSync("data.txt");
process.stdout.write(data.toString());

fs.readFile("data.txt", function (err, data) {
    if (err) return console.error(err);
    process.stdout.write(data.toString());
});

console.log("程序执行结束!");
