const server = require('./server/server')

// defining the fuzz target
//npx jazzer FuzzTarget

module.exports.fuzz = function (data /*: Buffer */) {
	const fuzzerData = data.toString();
	server.find_newline(fuzzerData);
};
