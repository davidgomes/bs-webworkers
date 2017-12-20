const path = require('path');
const ROOT_DIR = __dirname;

module.exports = {
    entry: {
        demo: "./src/demo.bs.js",
        worker: "./src/worker.bs.js"
    },
    devServer: {
        contentBase: path.resolve(ROOT_DIR, "dist"),
        publicPath: "/"
    },
    output: {
        path: path.resolve(ROOT_DIR, "dist"),
        filename: "[name].js",
        publicPath: "/"
    },
    resolve: {
        modules: [path.resolve(ROOT_DIR, "src"), "node_modules"]
    },
    module: {
        rules: [
            {
                test: /\.worker\.js$/,
                use: [
                    { loader: "worker-loader" },
                    { loader: "babel-loader?cacheDirectory" }
                ]
            }
        ]
    }
};