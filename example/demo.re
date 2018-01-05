let worker = WebWorkers.create_webworker("worker.bs.js");

let msg = {"text": "Hello world"};

WebWorkers.postMessage(worker, msg);

let msgBackHandler = (e: WebWorkers.MessageEvent.t) => {
  Js.log("I am the main thread and I have received a message back from the worker:");
  Js.log(WebWorkers.MessageEvent.data(e))
};

WebWorkers.onMessage(worker, msgBackHandler);
