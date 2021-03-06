/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2007 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Alexandre Kalendarev akalend@mail.ru Copyright (c) 2009-2010 |
  | Lead:                                                                |
  | - Pieter de Zwart                                                    |
  | Maintainers:                                                         |
  | - Brad Rodriguez                                                     |
  | - Jonathan Tansavatdi                                                |
  +----------------------------------------------------------------------+
*/

/* $Id: amqp_connection.h 326660 2012-07-17 05:32:34Z pdezwart $ */

extern zend_class_entry *amqp_connection_class_entry;

int php_amqp_connect(amqp_connection_object *amqp_connection, zend_bool persistent, INTERNAL_FUNCTION_PARAMETERS);
void php_amqp_disconnect_force(amqp_connection_resource *resource TSRMLS_DC);

PHP_METHOD(amqp_connection_class, __construct);
PHP_METHOD(amqp_connection_class, isConnected);
PHP_METHOD(amqp_connection_class, connect);
PHP_METHOD(amqp_connection_class, pconnect);
PHP_METHOD(amqp_connection_class, pdisconnect);
PHP_METHOD(amqp_connection_class, disconnect);
PHP_METHOD(amqp_connection_class, reconnect);
PHP_METHOD(amqp_connection_class, preconnect);

PHP_METHOD(amqp_connection_class, getLogin);
PHP_METHOD(amqp_connection_class, setLogin);

PHP_METHOD(amqp_connection_class, getPassword);
PHP_METHOD(amqp_connection_class, setPassword);

PHP_METHOD(amqp_connection_class, getHost);
PHP_METHOD(amqp_connection_class, setHost);

PHP_METHOD(amqp_connection_class, getPort);
PHP_METHOD(amqp_connection_class, setPort);

PHP_METHOD(amqp_connection_class, getVhost);
PHP_METHOD(amqp_connection_class, setVhost);

PHP_METHOD(amqp_connection_class, getTimeout);
PHP_METHOD(amqp_connection_class, setTimeout);

PHP_METHOD(amqp_connection_class, getReadTimeout);
PHP_METHOD(amqp_connection_class, setReadTimeout);

PHP_METHOD(amqp_connection_class, getWriteTimeout);
PHP_METHOD(amqp_connection_class, setWriteTimeout);

PHP_METHOD(amqp_connection_class, getUsedChannels);
PHP_METHOD(amqp_connection_class, getMaxChannels);
PHP_METHOD(amqp_connection_class, getHeartbeatInterval);
PHP_METHOD(amqp_connection_class, getMaxFrameSize);
PHP_METHOD(amqp_connection_class, isPersistent);

PHP_MINIT_FUNCTION(amqp_connection);

/*
*Local variables:
*tab-width: 4
*c-basic-offset: 4
*End:
*vim600: noet sw=4 ts=4 fdm=marker
*vim<600: noet sw=4 ts=4
*/
