let x: number = 5;
let y: any = "10";

x = y; // No error, despite y being of type 'any'

console.log(x); // Outputs: "10"
