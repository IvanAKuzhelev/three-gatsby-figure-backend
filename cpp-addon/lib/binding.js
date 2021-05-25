const addon = require('../build/Release/cpp-addon-native');

function CppAddon(name) {
    this.greet = function(str) {
        return _addonInstance.greet(str);
    }

    var _addonInstance = new addon.CppAddon(name);
}

module.exports = CppAddon;
