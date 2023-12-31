# What is this?

This is my first attempt into exploring true Wasm (ergo, not .NET blazor).  I'll be honest with you, I don't really know what I'm doing and this repo may contain some (👀) incorrect information. I'm sure this will naturally right itself in time, the deeper I get into the weeds. I am using this repository as a means to help document my learning journey.

## Motivation

My motivation for this is to learn of the opportunities from which Wasm can benefit the rapid, robust and resilient (did I just coin a new term - the 3 Rs?) software systems that we love to build, test, deploy and host (and observe, maintain, evergreen,...).  This week I've learned that the original vision of Wasm (WebAssembly) has evolved and this _new vision_ is quite something!  Sufficed to say, my interest has been peaked.

# Examples

These examples, through the least amount of code possible, should give you an insight into the mechanics required to run a wasm binary format file in your browser.  

Although the initial target is the browser, this is not the goal.  The goal is to run a compiled language in a binary format to "outside" of the browser". See Cosmonic.

## Basic example

[Javascript WebAssembly API Example](/01_JS_WebAssembly_Example/README.md)

This example uses the JS WebAssembly API to serve up Wasm.
I build and download the wasm binry format file from a C file I created in [WasmFiddler](https://wasdk.github.io/WasmFiddle/).  

## Emscripten example - html + js file

Emscripten is the most mature solution in this space.  It compiles C and C++ code (or any other code that uses LLVM) into Wasm.  It is a compiler and toolchain.

This example uses a docker container to build the wasm file, instead of install all the of the toolchain into your local environment.  

[Emscripten Example](/02_Emscripten_Example/README.md)

## Emscripten example - js file

In this next example, we're not delegating the creation of the html file to the emscripten.  Instead, I only create the .js file.  In this example I am also passing in an integer to then have this output to the DOM.

This example uses a docker container to build the wasm file, instead of install all the of the toolchain into your local environment.  

[Emscripten Example](/03_Emscripten_Example_Simpler/README.md)

## Emscripten example - return a string

Here we show how to return a value and how to update it's value in memory. 

[Emscripten Example](/04_Emscripten_Example_String/README.md)