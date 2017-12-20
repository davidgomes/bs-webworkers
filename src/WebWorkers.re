module MessageEvent = {
  type t;
  [@bs.get] external data : t => string = "";
};

type webWorker = {.
    [@bs.set] "onMessage": (MessageEvent.t) => unit
};

[@bs.new] external create_webworker : string => webWorker = "Worker";

[@bs.val] external postMessageFromW : ('a) => unit = "postMessage";

[@bs.send] external postMessage : (webWorker, Js.t({..})) => unit = "postMessage";

[@bs.set] external onMessage : (webWorker, MessageEvent.t => unit) => unit = "onmessage";

type window;
[@bs.val] external window : window = "self";
[@bs.set] external setWorkerOnMessage : (window, MessageEvent.t => unit) => unit = "onmessage";