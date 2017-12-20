Js.log("Hello, BuckleScript and Reason!");

let worker = WebWorkers.create_webworker("worker.js");

let msg = {"text": "Hello world"};

WebWorkers.postMessage(worker, msg);

let msgBackHandler = (name) => {
    Js.log("msgBackHandler");
    Js.log(name);
};

WebWorkers.onMessage(worker, msgBackHandler);