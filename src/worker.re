WebWorkers.setWorkerOnMessage(
    WebWorkers.window,
    (e: WebWorkers.MessageEvent.t) => {
        Js.log("I am the Web Worker and I have received a message:");
        Js.log(WebWorkers.MessageEvent.data(e));
        WebWorkers.postMessageFromW("my result");
    }
);