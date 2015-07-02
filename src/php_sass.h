/**
 * Sass
 * PHP bindings to libsass - fast, native Sass parsing in PHP!
 *
 * https://github.com/jamierumbelow/sassphp
 * Copyright (c)2012 Jamie Rumbelow <http://jamierumbelow.net>
 */

#ifndef PHP_SASS_H
#define PHP_SASS_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#define SASS_VERSION "0.4.4-dev"
#define SASS_FLAVOR  "sassyphpras"

#include <php.h>
#include <ext/standard/info.h>
#include <Zend/zend_extensions.h>
#include <Zend/zend_exceptions.h>

#include "lib/libsass/sass_context.h"

zend_class_entry *sass_ce;
zend_class_entry *sass_exception_ce;

zend_class_entry *sass_get_exception_base();

PHP_METHOD(Sass, __construct);
PHP_METHOD(Sass, compile);
PHP_METHOD(Sass, compileFile);
PHP_METHOD(Sass, compileFileMap);
PHP_METHOD(Sass, getStyle);
PHP_METHOD(Sass, setStyle);
PHP_METHOD(Sass, getIncludePath);
PHP_METHOD(Sass, setIncludePath);
PHP_METHOD(Sass, getPrecision);
PHP_METHOD(Sass, setPrecision);
PHP_METHOD(Sass, getComments);
PHP_METHOD(Sass, setComments);

#endif
