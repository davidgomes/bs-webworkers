# Reason Bindings for the Web Workers API 

This repository contains bindings for the [Web Workers API](https://developer.mozilla.org/en-US/docs/Web/API/Web_Workers_API/).

Read more about these [here](http://davidgom.es/2017/12/23/reasonml-webworkers-bindings.html), but keep in mind these bindings have been improved since this article was written.

## Example

The main script creates a new Web Worker from the `worker.re` script and posts a message to it. The Web Worker replies back to that message. The main thread listens to that and prints out the message it received from the Web Worker.

**main.re**
```ocaml
let worker = WebWorkers.create_webworker("worker.bs.js");

let msg = {"text": "Hello world"};

WebWorkers.postMessage(worker, msg);

let msgBackHandler = (e: WebWorkers.MessageEvent.t) => {
  Js.log("I am the main thread and I have received a message back from the worker:");
  Js.log(WebWorkers.MessageEvent.data(e))
};

WebWorkers.onMessage(worker, msgBackHandler);
```

**worker.re**
```ocaml
WebWorkers.setWorkerOnMessage(
  WebWorkers.self,
  (e: WebWorkers.MessageEvent.t) => {
    Js.log("I am the Web Worker and I have received a message:");
    Js.log(WebWorkers.MessageEvent.data(e));
    WebWorkers.postMessageFromWorker("my result")
  }
);
```

## Installation

1. Install the bindings using `npm install --save bs-webworkers`
2. Add the bindings to `bsconfig.json`:

```
{
  "bs-dependencies": [
      "bs-webworkers"
  ]
}
```

Look in the `example/` directory for an example of how to use the bindings.

## Build
```
npm install
npm run build
```

## Tests
```
npm install
npm run test
```

## Demo
```
npm install
npm run example
```

## Todo

The full Web Workers API is still not yet implemented (e.g. Shared Workers, Service Worker, WorkerNavigator, WorkerLocation, etc.). PRs are welcome!