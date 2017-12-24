module MessageEvent = {
  type t;
  [@bs.get] external data : t => 'a = "";
};

type webWorker;

[@bs.new] external create_webworker : string => webWorker = "Worker";

[@bs.send] external postMessage : (webWorker, 'a) => unit = "postMessage";

[@bs.set] external onMessage : (webWorker, MessageEvent.t => unit) => unit = "onmessage";

[@bs.val] external postMessageFromWorker : 'a => unit = "postMessage";

type window;

[@bs.val] external self : window = "";

[@bs.set] external setWorkerOnMessage : (window, MessageEvent.t => unit) => unit = "onmessage";
