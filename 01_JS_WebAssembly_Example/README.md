# Getting started



**Step 1** - CD into this folder

```powershell
cd 01_JS_WebAssembly_Example
```

**Step 2** - install dependencies

```js
npm install
```

**Step 3** - run

```js
node server.js
```

## Basic example - return a value from wasm

```c
int input();
int label(int val);

int main() { 
  return 42;
}

void updateNumber() {
  label(input() * 2);
}
```

![](../assets/2023-09-23-10-17-42.png)

```js
window.wasm.instance.exports.main()
```

![](../assets/2023-09-23-10-15-51.png)

## Basic example - pass into wasm a value and have it update the DOM

Open up browser developer tools and in the Console, enter `wasm.instance.exports.updateNumber()`

![](../assets/2023-09-24-16-15-09.png)


