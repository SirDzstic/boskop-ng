/*
 * libisp -- Lisp evaluator based on SICP
 * (C) 2013 Martin Wolters
 *
 * This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://sam.zoy.org/wtfpl/COPYING for more details.
 */

#include "lispdefs.h"

#ifndef THREAD_H_
#define THREAD_H_

size_t thread_timeout;
int thread_running;

data_t *eval_thread(const data_t *exp, data_t *env);

#endif
