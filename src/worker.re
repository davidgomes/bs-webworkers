let onmessage = (e: WebWorkers.MessageEvent.t) => {
    Js.log("message received " ++ Js.String.make(e));
    WebWorkers.postMessageFromW("my result");
}