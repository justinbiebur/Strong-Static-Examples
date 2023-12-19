add(a : number, b: number) {
        return "$" + (a + b).toString();
}

add('5', '6'); // Type string is not assignable to type number
