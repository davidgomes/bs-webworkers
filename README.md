# Reason Bindings for the Web Workers API 

This repository contains bindings for the [Web Workers API](https://developer.mozilla.org/en-US/docs/Web/API/Web_Workers_API/).

Read more about these [here](http://davidgom.es/2017/12/23/reasonml-webworkers-bindings.html), but keep in mind these bindings have been improved since this article was written.

# Using this

1. Install the bindings using `npm install --save bs-webworkers`
2. Add the bindings to `bsconfig.json`:

```
{
  "bs-dependencies": [
      "bs-webworkers"
  ]
}
```

# Build
```
npm install
npm run build
```

# Tests
```
npm install
npm run test
```

# Demo
```
npm install
npm run example
```

# Todo

The full Web Workers API is still not yet implemented (Shared Workers are missing, for instance). PRs are welcome!