#include <emscripten.h>

int main() { 
  return 42;
}

// this needs to be defined before it is called
// EM_JS(void, call_js, (char * name), {

//   // get ref to dom element textarea 'output' and update to
//   // demonstrate you can update DOM/JS from within wasm binary
//   document.getElementById("label").innerText = name
// }); 

char * getString(char * name) {
  // call_js(name);
  return "GARRARD";
}
