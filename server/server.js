const jpeg = require('jpeg-js')

module.exports.processJPEG = function(data) {
    try {
        jpeg.decode(data);
    } catch (e) {
        // Those are "valid" exceptions. we can't catch them in one line as
        // jpeg-js doesn't export/inherit from one exception class/style.
        if (e.message.indexOf('JPEG') !== -1 ||
            e.message.indexOf('length octect') !== -1 ||
            e.message.indexOf('Failed to') !== -1 ||
            e.message.indexOf('DecoderBuffer') !== -1 ||
            e.message.indexOf('invalid table spec') !== -1 ||
            e.message.indexOf('SOI not found') !== -1) {
        } else {
            throw e;
        }
    }
}


module.exports.find_newline = function(s) {
    let i = 0; 
    while(s[i] != '\n') {
        i++
    }
    return i
}


module.exports.palindrome = function(str) {
    var len = Math.floor(str.length / 2);
    for (var i = 0; i < len; i++)
        if (str[i] !== str[str.length - i - 1])
        return false;
    return true;
      
}

module.exports.check = function(x) {
       let check = null;
        if(x >= 0 && x <= 200) {
            check = true
        } else {
            check = false
        }
      
}