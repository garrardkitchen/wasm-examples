#include <emscripten.h>

int main() { 
  return 42;
}

// this needs to be defined before it is called
EM_JS(void, call_js, (), {

  // get ref to dom element textarea 'output' and update to
  // demonstrate you can update DOM/JS from within wasm binary
  document.getElementById("output").value = "GARRARD";

  // demonstrate browser func
  alert('hello world!');

  // demonstrate throw surfacing in browser
  throw 'all done';
}); 

void updateNumber() {
  call_js();
}
