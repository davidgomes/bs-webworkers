// Generated by BUCKLESCRIPT VERSION 2.1.0, PLEASE EDIT WITH CARE
'use strict';


self.onmessage = (function (e) {
    console.log("I am the Web Worker and I have received a message:");
    console.log(e.data);
    postMessage("my result");
    return /* () */0;
  });

/*  Not a pure module */