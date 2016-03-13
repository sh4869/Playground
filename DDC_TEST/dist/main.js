dart_library.library('main', null, /* Imports */['dart/_runtime', 'dart/html'], /* Lazy imports */[], function (exports, dart, html) {
  'use strict';

  let dartx = dart.dartx;
  function main() {
    html.querySelector('#output')[dartx.text] = 'Your Dart app is running.';
  }
  dart.fn(main, dart.void, []);
  // Exports:
  exports.main = main;
});
//# sourceMappingURL=main.js.map