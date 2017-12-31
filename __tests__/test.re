open Jest;
open ExpectJs;


describe(
  "create_webworkers",
  () => {
    test(
      "to work",
      () => {
        let worker = WebWorkers.create_webworker("script.js");

        expect(worker##url)
        |> toEqual("script.js");
      }
    );
  }
);