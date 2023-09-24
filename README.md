# What is this?

This is my first attempt into exploring true Wasm (ergo, not .NET blazor).  I'll be honest with you, I don't really know what I'm doing and this
repo may ccntain some (👀) incorrect information. I'm sure this will naturally right itself in time, the more I get into the weeds.

## Motivation

My motivation for this is to learn of the opportunities from which Wasm can benefit the rapid, robust and resilient (did I just coin a new term - the 3 Rs?) software systems that we love to build, deploy and host.  This week I've learned that the original vision of Wasm has evolved and the new vision is quite something!  Sufficed to say, my interest has been peaked.

# Examples

These examples, through the least amount of code possible, should give you an insight into mechanics required to run a wasm in a binary format in your browser.  

Although the inital target is the browser, this is not the goal.  The goal is to run deploy a compiled language in a binary format to "outside" of the browser". See Cosmonic.

## Basic example

[Javascript WebAssembly API Example](/01_JS_WebAssembly_Example/README.md)

This example uses the WebAssembly API to serve up Wasm.
I build and download the wasm binry format file from a C file I created in [WasmFiddler](https://wasdk.github.io/WasmFiddle/).  

## Emscripten

Emscripten is the most mature solution in this space.  It c.ompiles C and C++ code (or any other code that uses LLVM) into Wasm.  It is a toolchain.

This example uses a docker container to build the wasm file, instead of install all the of the toolchain into your local environment.  

[Emscripten Example](/02_Emscripten_Example/README.md)
