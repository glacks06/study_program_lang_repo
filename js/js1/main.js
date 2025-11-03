const target= {};

class Target2 {
    constructor() {
        this.a = 10;
        this.b = 20;
    }
}

class Target3 extends Target2{
    constructor(){
        super();
        this.c = 30;
        this.d = 40;
    }
}



const t = new Target2();
console.log(t);

const proxy = new Proxy(t, {
    get(t, props, receiver){
        console.log(t, props, receiver);
        return t[props];
    }
});
console.log(proxy.a);
console.log("----------------")

const t2 = new Target3();
const proxy2 = new Proxy(t2, {
    get(t, props, receiver){
        console.log(t, props, receiver);
        return t[props];
    }
});
console.log(proxy2.a);