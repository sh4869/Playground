DDC_TEST
======

Dart Dev Compilerのテストです.


## ディレクトリ構成

* es6 - dev compilerによってトランスパイルしたコードが入っている
* out - es6ディレクトリのjsを更にbabelでes5にトランスパイルしたものが入っている
* web - もとのdartのプロジェクトが入っている

## 動かし方

```zsh
$ npm install
$ pub get
$ gulp
```
