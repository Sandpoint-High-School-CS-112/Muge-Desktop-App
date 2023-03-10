/* Generated code for Python module '__main__'
 * created by Nuitka version 1.4.8
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module___main__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[81];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[81];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("__main__"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 81; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 1
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 81; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_3182da30bac8d719e3554a31527a509a;
static PyCodeObject *codeobj_9d5f2413fca32abc86b5125b21e67b31;
static PyCodeObject *codeobj_7fe73c7fb5dc8c46fe3810b379b26e0a;
static PyCodeObject *codeobj_872c4f3064924f9c26abdc0865d54183;
static PyCodeObject *codeobj_741f03e7ce5dd415b54f64bdc05a8025;
static PyCodeObject *codeobj_e73e910a74e6dd4ff4f2874724b9b82c;
static PyCodeObject *codeobj_9c1463e1239de56861f418f3f3c7ee4e;
static PyCodeObject *codeobj_825ae33dc61592060fec9e4c65571626;
static PyCodeObject *codeobj_87bf6fb4aaa9944cf0fc392e55b2b4c6;
static PyCodeObject *codeobj_714d93fcb9549af8db5e4b14e48ce246;
static PyCodeObject *codeobj_4eb62e62c119e11b62b0e60bd7189218;
static PyCodeObject *codeobj_8eea39e161c3d4ee7db712b98bb32353;
static PyCodeObject *codeobj_08fd0bb76f038e88b50d526bdac97562;
static PyCodeObject *codeobj_643fe4fe728a3172c36cf69fc0af9454;
static PyCodeObject *codeobj_6cd94fe2cfafb00a7a813ebe108d6e82;
static PyCodeObject *codeobj_53c35cba6a7af9e0bc5c80ae4acc27e3;
static PyCodeObject *codeobj_7a17e11b0021048edd51a6af3ff2aee3;
static PyCodeObject *codeobj_9f425a8fa7f4b2133c957f6d342b59db;
/* For use in "MainProgram.c". */
PyCodeObject *codeobj_main = NULL;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[63]; CHECK_OBJECT(module_filename_obj);
    codeobj_3182da30bac8d719e3554a31527a509a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[79], mod_consts[79], NULL, NULL, 0, 0, 0);
    codeobj_main = codeobj_3182da30bac8d719e3554a31527a509a;
    codeobj_9d5f2413fca32abc86b5125b21e67b31 = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], NULL, NULL, 0, 0, 0);
    codeobj_7fe73c7fb5dc8c46fe3810b379b26e0a = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[80], NULL, 0, 0, 0);
    codeobj_872c4f3064924f9c26abdc0865d54183 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], NULL, NULL, 0, 0, 0);
    codeobj_741f03e7ce5dd415b54f64bdc05a8025 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[39], NULL, NULL, 0, 0, 0);
    codeobj_e73e910a74e6dd4ff4f2874724b9b82c = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[29], NULL, NULL, 0, 0, 0);
    codeobj_9c1463e1239de56861f418f3f3c7ee4e = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], NULL, NULL, 0, 0, 0);
    codeobj_825ae33dc61592060fec9e4c65571626 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], NULL, NULL, 0, 0, 0);
    codeobj_87bf6fb4aaa9944cf0fc392e55b2b4c6 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_714d93fcb9549af8db5e4b14e48ce246 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], NULL, NULL, 0, 0, 0);
    codeobj_4eb62e62c119e11b62b0e60bd7189218 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[43], NULL, NULL, 0, 0, 0);
    codeobj_8eea39e161c3d4ee7db712b98bb32353 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[45], NULL, NULL, 0, 0, 0);
    codeobj_08fd0bb76f038e88b50d526bdac97562 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], NULL, NULL, 0, 0, 0);
    codeobj_643fe4fe728a3172c36cf69fc0af9454 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[49], mod_consts[49], NULL, NULL, 0, 0, 0);
    codeobj_6cd94fe2cfafb00a7a813ebe108d6e82 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[51], NULL, NULL, 0, 0, 0);
    codeobj_53c35cba6a7af9e0bc5c80ae4acc27e3 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], NULL, NULL, 0, 0, 0);
    codeobj_7a17e11b0021048edd51a6af3ff2aee3 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], NULL, NULL, 0, 0, 0);
    codeobj_9f425a8fa7f4b2133c957f6d342b59db = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[57], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION___main__$$$function__10_setmonkey();


static PyObject *MAKE_FUNCTION___main__$$$function__11_setoctopus();


static PyObject *MAKE_FUNCTION___main__$$$function__12_setparrot();


static PyObject *MAKE_FUNCTION___main__$$$function__13_setpeacock();


static PyObject *MAKE_FUNCTION___main__$$$function__14_setpenguin();


static PyObject *MAKE_FUNCTION___main__$$$function__15_setsnake();


static PyObject *MAKE_FUNCTION___main__$$$function__16_setwalrus();


static PyObject *MAKE_FUNCTION___main__$$$function__17_petbtns();


static PyObject *MAKE_FUNCTION___main__$$$function__1_back();


static PyObject *MAKE_FUNCTION___main__$$$function__2_setcat();


static PyObject *MAKE_FUNCTION___main__$$$function__3_setdog();


static PyObject *MAKE_FUNCTION___main__$$$function__4_setbird();


static PyObject *MAKE_FUNCTION___main__$$$function__5_setgiraffe();


static PyObject *MAKE_FUNCTION___main__$$$function__6_setfish();


static PyObject *MAKE_FUNCTION___main__$$$function__7_setbunny();


static PyObject *MAKE_FUNCTION___main__$$$function__8_sethedgehog();


static PyObject *MAKE_FUNCTION___main__$$$function__9_setkoala();


// The module function definitions.
static PyObject *impl___main__$$$function__1_back(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_9d5f2413fca32abc86b5125b21e67b31;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9d5f2413fca32abc86b5125b21e67b31 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9d5f2413fca32abc86b5125b21e67b31)) {
        Py_XDECREF(cache_frame_9d5f2413fca32abc86b5125b21e67b31);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d5f2413fca32abc86b5125b21e67b31 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d5f2413fca32abc86b5125b21e67b31 = MAKE_FUNCTION_FRAME(codeobj_9d5f2413fca32abc86b5125b21e67b31, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9d5f2413fca32abc86b5125b21e67b31->m_type_description == NULL);
    frame_9d5f2413fca32abc86b5125b21e67b31 = cache_frame_9d5f2413fca32abc86b5125b21e67b31;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_9d5f2413fca32abc86b5125b21e67b31);
    assert(Py_REFCNT(frame_9d5f2413fca32abc86b5125b21e67b31) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        frame_9d5f2413fca32abc86b5125b21e67b31->m_frame.f_lineno = 9;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[1],
            PyTuple_GET_ITEM(mod_consts[2], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        frame_9d5f2413fca32abc86b5125b21e67b31->m_frame.f_lineno = 10;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[4]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9d5f2413fca32abc86b5125b21e67b31, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d5f2413fca32abc86b5125b21e67b31->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d5f2413fca32abc86b5125b21e67b31, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d5f2413fca32abc86b5125b21e67b31,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_9d5f2413fca32abc86b5125b21e67b31 == cache_frame_9d5f2413fca32abc86b5125b21e67b31) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9d5f2413fca32abc86b5125b21e67b31);
        cache_frame_9d5f2413fca32abc86b5125b21e67b31 = NULL;
    }

    assertFrameObject(frame_9d5f2413fca32abc86b5125b21e67b31);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__2_setcat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_e73e910a74e6dd4ff4f2874724b9b82c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e73e910a74e6dd4ff4f2874724b9b82c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e73e910a74e6dd4ff4f2874724b9b82c)) {
        Py_XDECREF(cache_frame_e73e910a74e6dd4ff4f2874724b9b82c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e73e910a74e6dd4ff4f2874724b9b82c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e73e910a74e6dd4ff4f2874724b9b82c = MAKE_FUNCTION_FRAME(codeobj_e73e910a74e6dd4ff4f2874724b9b82c, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e73e910a74e6dd4ff4f2874724b9b82c->m_type_description == NULL);
    frame_e73e910a74e6dd4ff4f2874724b9b82c = cache_frame_e73e910a74e6dd4ff4f2874724b9b82c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_e73e910a74e6dd4ff4f2874724b9b82c);
    assert(Py_REFCNT(frame_e73e910a74e6dd4ff4f2874724b9b82c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        frame_e73e910a74e6dd4ff4f2874724b9b82c->m_frame.f_lineno = 13;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        frame_e73e910a74e6dd4ff4f2874724b9b82c->m_frame.f_lineno = 14;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[9], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e73e910a74e6dd4ff4f2874724b9b82c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e73e910a74e6dd4ff4f2874724b9b82c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e73e910a74e6dd4ff4f2874724b9b82c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e73e910a74e6dd4ff4f2874724b9b82c,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_e73e910a74e6dd4ff4f2874724b9b82c == cache_frame_e73e910a74e6dd4ff4f2874724b9b82c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e73e910a74e6dd4ff4f2874724b9b82c);
        cache_frame_e73e910a74e6dd4ff4f2874724b9b82c = NULL;
    }

    assertFrameObject(frame_e73e910a74e6dd4ff4f2874724b9b82c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__3_setdog(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_9c1463e1239de56861f418f3f3c7ee4e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9c1463e1239de56861f418f3f3c7ee4e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9c1463e1239de56861f418f3f3c7ee4e)) {
        Py_XDECREF(cache_frame_9c1463e1239de56861f418f3f3c7ee4e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9c1463e1239de56861f418f3f3c7ee4e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9c1463e1239de56861f418f3f3c7ee4e = MAKE_FUNCTION_FRAME(codeobj_9c1463e1239de56861f418f3f3c7ee4e, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9c1463e1239de56861f418f3f3c7ee4e->m_type_description == NULL);
    frame_9c1463e1239de56861f418f3f3c7ee4e = cache_frame_9c1463e1239de56861f418f3f3c7ee4e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_9c1463e1239de56861f418f3f3c7ee4e);
    assert(Py_REFCNT(frame_9c1463e1239de56861f418f3f3c7ee4e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_9c1463e1239de56861f418f3f3c7ee4e->m_frame.f_lineno = 16;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_9c1463e1239de56861f418f3f3c7ee4e->m_frame.f_lineno = 17;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[10], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9c1463e1239de56861f418f3f3c7ee4e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9c1463e1239de56861f418f3f3c7ee4e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9c1463e1239de56861f418f3f3c7ee4e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9c1463e1239de56861f418f3f3c7ee4e,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_9c1463e1239de56861f418f3f3c7ee4e == cache_frame_9c1463e1239de56861f418f3f3c7ee4e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9c1463e1239de56861f418f3f3c7ee4e);
        cache_frame_9c1463e1239de56861f418f3f3c7ee4e = NULL;
    }

    assertFrameObject(frame_9c1463e1239de56861f418f3f3c7ee4e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__4_setbird(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_872c4f3064924f9c26abdc0865d54183;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_872c4f3064924f9c26abdc0865d54183 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_872c4f3064924f9c26abdc0865d54183)) {
        Py_XDECREF(cache_frame_872c4f3064924f9c26abdc0865d54183);

#if _DEBUG_REFCOUNTS
        if (cache_frame_872c4f3064924f9c26abdc0865d54183 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_872c4f3064924f9c26abdc0865d54183 = MAKE_FUNCTION_FRAME(codeobj_872c4f3064924f9c26abdc0865d54183, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_872c4f3064924f9c26abdc0865d54183->m_type_description == NULL);
    frame_872c4f3064924f9c26abdc0865d54183 = cache_frame_872c4f3064924f9c26abdc0865d54183;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_872c4f3064924f9c26abdc0865d54183);
    assert(Py_REFCNT(frame_872c4f3064924f9c26abdc0865d54183) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        frame_872c4f3064924f9c26abdc0865d54183->m_frame.f_lineno = 19;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        frame_872c4f3064924f9c26abdc0865d54183->m_frame.f_lineno = 20;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_872c4f3064924f9c26abdc0865d54183, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_872c4f3064924f9c26abdc0865d54183->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_872c4f3064924f9c26abdc0865d54183, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_872c4f3064924f9c26abdc0865d54183,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_872c4f3064924f9c26abdc0865d54183 == cache_frame_872c4f3064924f9c26abdc0865d54183) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_872c4f3064924f9c26abdc0865d54183);
        cache_frame_872c4f3064924f9c26abdc0865d54183 = NULL;
    }

    assertFrameObject(frame_872c4f3064924f9c26abdc0865d54183);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__5_setgiraffe(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_87bf6fb4aaa9944cf0fc392e55b2b4c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_87bf6fb4aaa9944cf0fc392e55b2b4c6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_87bf6fb4aaa9944cf0fc392e55b2b4c6)) {
        Py_XDECREF(cache_frame_87bf6fb4aaa9944cf0fc392e55b2b4c6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_87bf6fb4aaa9944cf0fc392e55b2b4c6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_87bf6fb4aaa9944cf0fc392e55b2b4c6 = MAKE_FUNCTION_FRAME(codeobj_87bf6fb4aaa9944cf0fc392e55b2b4c6, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_87bf6fb4aaa9944cf0fc392e55b2b4c6->m_type_description == NULL);
    frame_87bf6fb4aaa9944cf0fc392e55b2b4c6 = cache_frame_87bf6fb4aaa9944cf0fc392e55b2b4c6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_87bf6fb4aaa9944cf0fc392e55b2b4c6);
    assert(Py_REFCNT(frame_87bf6fb4aaa9944cf0fc392e55b2b4c6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        frame_87bf6fb4aaa9944cf0fc392e55b2b4c6->m_frame.f_lineno = 22;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        frame_87bf6fb4aaa9944cf0fc392e55b2b4c6->m_frame.f_lineno = 23;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[12], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_87bf6fb4aaa9944cf0fc392e55b2b4c6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_87bf6fb4aaa9944cf0fc392e55b2b4c6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_87bf6fb4aaa9944cf0fc392e55b2b4c6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_87bf6fb4aaa9944cf0fc392e55b2b4c6,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_87bf6fb4aaa9944cf0fc392e55b2b4c6 == cache_frame_87bf6fb4aaa9944cf0fc392e55b2b4c6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_87bf6fb4aaa9944cf0fc392e55b2b4c6);
        cache_frame_87bf6fb4aaa9944cf0fc392e55b2b4c6 = NULL;
    }

    assertFrameObject(frame_87bf6fb4aaa9944cf0fc392e55b2b4c6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__6_setfish(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_825ae33dc61592060fec9e4c65571626;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_825ae33dc61592060fec9e4c65571626 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_825ae33dc61592060fec9e4c65571626)) {
        Py_XDECREF(cache_frame_825ae33dc61592060fec9e4c65571626);

#if _DEBUG_REFCOUNTS
        if (cache_frame_825ae33dc61592060fec9e4c65571626 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_825ae33dc61592060fec9e4c65571626 = MAKE_FUNCTION_FRAME(codeobj_825ae33dc61592060fec9e4c65571626, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_825ae33dc61592060fec9e4c65571626->m_type_description == NULL);
    frame_825ae33dc61592060fec9e4c65571626 = cache_frame_825ae33dc61592060fec9e4c65571626;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_825ae33dc61592060fec9e4c65571626);
    assert(Py_REFCNT(frame_825ae33dc61592060fec9e4c65571626) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        frame_825ae33dc61592060fec9e4c65571626->m_frame.f_lineno = 25;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        frame_825ae33dc61592060fec9e4c65571626->m_frame.f_lineno = 26;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[13], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_825ae33dc61592060fec9e4c65571626, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_825ae33dc61592060fec9e4c65571626->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_825ae33dc61592060fec9e4c65571626, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_825ae33dc61592060fec9e4c65571626,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_825ae33dc61592060fec9e4c65571626 == cache_frame_825ae33dc61592060fec9e4c65571626) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_825ae33dc61592060fec9e4c65571626);
        cache_frame_825ae33dc61592060fec9e4c65571626 = NULL;
    }

    assertFrameObject(frame_825ae33dc61592060fec9e4c65571626);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__7_setbunny(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_741f03e7ce5dd415b54f64bdc05a8025;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_741f03e7ce5dd415b54f64bdc05a8025 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_741f03e7ce5dd415b54f64bdc05a8025)) {
        Py_XDECREF(cache_frame_741f03e7ce5dd415b54f64bdc05a8025);

#if _DEBUG_REFCOUNTS
        if (cache_frame_741f03e7ce5dd415b54f64bdc05a8025 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_741f03e7ce5dd415b54f64bdc05a8025 = MAKE_FUNCTION_FRAME(codeobj_741f03e7ce5dd415b54f64bdc05a8025, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_741f03e7ce5dd415b54f64bdc05a8025->m_type_description == NULL);
    frame_741f03e7ce5dd415b54f64bdc05a8025 = cache_frame_741f03e7ce5dd415b54f64bdc05a8025;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_741f03e7ce5dd415b54f64bdc05a8025);
    assert(Py_REFCNT(frame_741f03e7ce5dd415b54f64bdc05a8025) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        frame_741f03e7ce5dd415b54f64bdc05a8025->m_frame.f_lineno = 28;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        frame_741f03e7ce5dd415b54f64bdc05a8025->m_frame.f_lineno = 29;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[14], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_741f03e7ce5dd415b54f64bdc05a8025, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_741f03e7ce5dd415b54f64bdc05a8025->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_741f03e7ce5dd415b54f64bdc05a8025, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_741f03e7ce5dd415b54f64bdc05a8025,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_741f03e7ce5dd415b54f64bdc05a8025 == cache_frame_741f03e7ce5dd415b54f64bdc05a8025) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_741f03e7ce5dd415b54f64bdc05a8025);
        cache_frame_741f03e7ce5dd415b54f64bdc05a8025 = NULL;
    }

    assertFrameObject(frame_741f03e7ce5dd415b54f64bdc05a8025);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__8_sethedgehog(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_714d93fcb9549af8db5e4b14e48ce246;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_714d93fcb9549af8db5e4b14e48ce246 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_714d93fcb9549af8db5e4b14e48ce246)) {
        Py_XDECREF(cache_frame_714d93fcb9549af8db5e4b14e48ce246);

#if _DEBUG_REFCOUNTS
        if (cache_frame_714d93fcb9549af8db5e4b14e48ce246 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_714d93fcb9549af8db5e4b14e48ce246 = MAKE_FUNCTION_FRAME(codeobj_714d93fcb9549af8db5e4b14e48ce246, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_714d93fcb9549af8db5e4b14e48ce246->m_type_description == NULL);
    frame_714d93fcb9549af8db5e4b14e48ce246 = cache_frame_714d93fcb9549af8db5e4b14e48ce246;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_714d93fcb9549af8db5e4b14e48ce246);
    assert(Py_REFCNT(frame_714d93fcb9549af8db5e4b14e48ce246) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        frame_714d93fcb9549af8db5e4b14e48ce246->m_frame.f_lineno = 31;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        frame_714d93fcb9549af8db5e4b14e48ce246->m_frame.f_lineno = 32;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_714d93fcb9549af8db5e4b14e48ce246, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_714d93fcb9549af8db5e4b14e48ce246->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_714d93fcb9549af8db5e4b14e48ce246, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_714d93fcb9549af8db5e4b14e48ce246,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_714d93fcb9549af8db5e4b14e48ce246 == cache_frame_714d93fcb9549af8db5e4b14e48ce246) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_714d93fcb9549af8db5e4b14e48ce246);
        cache_frame_714d93fcb9549af8db5e4b14e48ce246 = NULL;
    }

    assertFrameObject(frame_714d93fcb9549af8db5e4b14e48ce246);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__9_setkoala(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_4eb62e62c119e11b62b0e60bd7189218;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4eb62e62c119e11b62b0e60bd7189218 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4eb62e62c119e11b62b0e60bd7189218)) {
        Py_XDECREF(cache_frame_4eb62e62c119e11b62b0e60bd7189218);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4eb62e62c119e11b62b0e60bd7189218 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4eb62e62c119e11b62b0e60bd7189218 = MAKE_FUNCTION_FRAME(codeobj_4eb62e62c119e11b62b0e60bd7189218, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4eb62e62c119e11b62b0e60bd7189218->m_type_description == NULL);
    frame_4eb62e62c119e11b62b0e60bd7189218 = cache_frame_4eb62e62c119e11b62b0e60bd7189218;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_4eb62e62c119e11b62b0e60bd7189218);
    assert(Py_REFCNT(frame_4eb62e62c119e11b62b0e60bd7189218) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        frame_4eb62e62c119e11b62b0e60bd7189218->m_frame.f_lineno = 34;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        frame_4eb62e62c119e11b62b0e60bd7189218->m_frame.f_lineno = 35;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4eb62e62c119e11b62b0e60bd7189218, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4eb62e62c119e11b62b0e60bd7189218->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4eb62e62c119e11b62b0e60bd7189218, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4eb62e62c119e11b62b0e60bd7189218,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_4eb62e62c119e11b62b0e60bd7189218 == cache_frame_4eb62e62c119e11b62b0e60bd7189218) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4eb62e62c119e11b62b0e60bd7189218);
        cache_frame_4eb62e62c119e11b62b0e60bd7189218 = NULL;
    }

    assertFrameObject(frame_4eb62e62c119e11b62b0e60bd7189218);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__10_setmonkey(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_8eea39e161c3d4ee7db712b98bb32353;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8eea39e161c3d4ee7db712b98bb32353 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8eea39e161c3d4ee7db712b98bb32353)) {
        Py_XDECREF(cache_frame_8eea39e161c3d4ee7db712b98bb32353);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8eea39e161c3d4ee7db712b98bb32353 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8eea39e161c3d4ee7db712b98bb32353 = MAKE_FUNCTION_FRAME(codeobj_8eea39e161c3d4ee7db712b98bb32353, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8eea39e161c3d4ee7db712b98bb32353->m_type_description == NULL);
    frame_8eea39e161c3d4ee7db712b98bb32353 = cache_frame_8eea39e161c3d4ee7db712b98bb32353;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_8eea39e161c3d4ee7db712b98bb32353);
    assert(Py_REFCNT(frame_8eea39e161c3d4ee7db712b98bb32353) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        frame_8eea39e161c3d4ee7db712b98bb32353->m_frame.f_lineno = 37;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        frame_8eea39e161c3d4ee7db712b98bb32353->m_frame.f_lineno = 38;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[17], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8eea39e161c3d4ee7db712b98bb32353, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8eea39e161c3d4ee7db712b98bb32353->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8eea39e161c3d4ee7db712b98bb32353, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8eea39e161c3d4ee7db712b98bb32353,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_8eea39e161c3d4ee7db712b98bb32353 == cache_frame_8eea39e161c3d4ee7db712b98bb32353) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8eea39e161c3d4ee7db712b98bb32353);
        cache_frame_8eea39e161c3d4ee7db712b98bb32353 = NULL;
    }

    assertFrameObject(frame_8eea39e161c3d4ee7db712b98bb32353);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__11_setoctopus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_08fd0bb76f038e88b50d526bdac97562;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_08fd0bb76f038e88b50d526bdac97562 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_08fd0bb76f038e88b50d526bdac97562)) {
        Py_XDECREF(cache_frame_08fd0bb76f038e88b50d526bdac97562);

#if _DEBUG_REFCOUNTS
        if (cache_frame_08fd0bb76f038e88b50d526bdac97562 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_08fd0bb76f038e88b50d526bdac97562 = MAKE_FUNCTION_FRAME(codeobj_08fd0bb76f038e88b50d526bdac97562, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_08fd0bb76f038e88b50d526bdac97562->m_type_description == NULL);
    frame_08fd0bb76f038e88b50d526bdac97562 = cache_frame_08fd0bb76f038e88b50d526bdac97562;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_08fd0bb76f038e88b50d526bdac97562);
    assert(Py_REFCNT(frame_08fd0bb76f038e88b50d526bdac97562) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        frame_08fd0bb76f038e88b50d526bdac97562->m_frame.f_lineno = 40;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        frame_08fd0bb76f038e88b50d526bdac97562->m_frame.f_lineno = 41;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[18], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_08fd0bb76f038e88b50d526bdac97562, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_08fd0bb76f038e88b50d526bdac97562->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08fd0bb76f038e88b50d526bdac97562, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_08fd0bb76f038e88b50d526bdac97562,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_08fd0bb76f038e88b50d526bdac97562 == cache_frame_08fd0bb76f038e88b50d526bdac97562) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_08fd0bb76f038e88b50d526bdac97562);
        cache_frame_08fd0bb76f038e88b50d526bdac97562 = NULL;
    }

    assertFrameObject(frame_08fd0bb76f038e88b50d526bdac97562);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__12_setparrot(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_643fe4fe728a3172c36cf69fc0af9454;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_643fe4fe728a3172c36cf69fc0af9454 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_643fe4fe728a3172c36cf69fc0af9454)) {
        Py_XDECREF(cache_frame_643fe4fe728a3172c36cf69fc0af9454);

#if _DEBUG_REFCOUNTS
        if (cache_frame_643fe4fe728a3172c36cf69fc0af9454 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_643fe4fe728a3172c36cf69fc0af9454 = MAKE_FUNCTION_FRAME(codeobj_643fe4fe728a3172c36cf69fc0af9454, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_643fe4fe728a3172c36cf69fc0af9454->m_type_description == NULL);
    frame_643fe4fe728a3172c36cf69fc0af9454 = cache_frame_643fe4fe728a3172c36cf69fc0af9454;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_643fe4fe728a3172c36cf69fc0af9454);
    assert(Py_REFCNT(frame_643fe4fe728a3172c36cf69fc0af9454) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        frame_643fe4fe728a3172c36cf69fc0af9454->m_frame.f_lineno = 43;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_643fe4fe728a3172c36cf69fc0af9454->m_frame.f_lineno = 44;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[19], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_643fe4fe728a3172c36cf69fc0af9454, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_643fe4fe728a3172c36cf69fc0af9454->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_643fe4fe728a3172c36cf69fc0af9454, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_643fe4fe728a3172c36cf69fc0af9454,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_643fe4fe728a3172c36cf69fc0af9454 == cache_frame_643fe4fe728a3172c36cf69fc0af9454) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_643fe4fe728a3172c36cf69fc0af9454);
        cache_frame_643fe4fe728a3172c36cf69fc0af9454 = NULL;
    }

    assertFrameObject(frame_643fe4fe728a3172c36cf69fc0af9454);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__13_setpeacock(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_6cd94fe2cfafb00a7a813ebe108d6e82;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6cd94fe2cfafb00a7a813ebe108d6e82 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6cd94fe2cfafb00a7a813ebe108d6e82)) {
        Py_XDECREF(cache_frame_6cd94fe2cfafb00a7a813ebe108d6e82);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6cd94fe2cfafb00a7a813ebe108d6e82 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6cd94fe2cfafb00a7a813ebe108d6e82 = MAKE_FUNCTION_FRAME(codeobj_6cd94fe2cfafb00a7a813ebe108d6e82, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6cd94fe2cfafb00a7a813ebe108d6e82->m_type_description == NULL);
    frame_6cd94fe2cfafb00a7a813ebe108d6e82 = cache_frame_6cd94fe2cfafb00a7a813ebe108d6e82;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_6cd94fe2cfafb00a7a813ebe108d6e82);
    assert(Py_REFCNT(frame_6cd94fe2cfafb00a7a813ebe108d6e82) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        frame_6cd94fe2cfafb00a7a813ebe108d6e82->m_frame.f_lineno = 46;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        frame_6cd94fe2cfafb00a7a813ebe108d6e82->m_frame.f_lineno = 47;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[20], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6cd94fe2cfafb00a7a813ebe108d6e82, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6cd94fe2cfafb00a7a813ebe108d6e82->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6cd94fe2cfafb00a7a813ebe108d6e82, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6cd94fe2cfafb00a7a813ebe108d6e82,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_6cd94fe2cfafb00a7a813ebe108d6e82 == cache_frame_6cd94fe2cfafb00a7a813ebe108d6e82) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6cd94fe2cfafb00a7a813ebe108d6e82);
        cache_frame_6cd94fe2cfafb00a7a813ebe108d6e82 = NULL;
    }

    assertFrameObject(frame_6cd94fe2cfafb00a7a813ebe108d6e82);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__14_setpenguin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_53c35cba6a7af9e0bc5c80ae4acc27e3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_53c35cba6a7af9e0bc5c80ae4acc27e3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_53c35cba6a7af9e0bc5c80ae4acc27e3)) {
        Py_XDECREF(cache_frame_53c35cba6a7af9e0bc5c80ae4acc27e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53c35cba6a7af9e0bc5c80ae4acc27e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53c35cba6a7af9e0bc5c80ae4acc27e3 = MAKE_FUNCTION_FRAME(codeobj_53c35cba6a7af9e0bc5c80ae4acc27e3, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_53c35cba6a7af9e0bc5c80ae4acc27e3->m_type_description == NULL);
    frame_53c35cba6a7af9e0bc5c80ae4acc27e3 = cache_frame_53c35cba6a7af9e0bc5c80ae4acc27e3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_53c35cba6a7af9e0bc5c80ae4acc27e3);
    assert(Py_REFCNT(frame_53c35cba6a7af9e0bc5c80ae4acc27e3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        frame_53c35cba6a7af9e0bc5c80ae4acc27e3->m_frame.f_lineno = 49;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        frame_53c35cba6a7af9e0bc5c80ae4acc27e3->m_frame.f_lineno = 50;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[21], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_53c35cba6a7af9e0bc5c80ae4acc27e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53c35cba6a7af9e0bc5c80ae4acc27e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53c35cba6a7af9e0bc5c80ae4acc27e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53c35cba6a7af9e0bc5c80ae4acc27e3,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_53c35cba6a7af9e0bc5c80ae4acc27e3 == cache_frame_53c35cba6a7af9e0bc5c80ae4acc27e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_53c35cba6a7af9e0bc5c80ae4acc27e3);
        cache_frame_53c35cba6a7af9e0bc5c80ae4acc27e3 = NULL;
    }

    assertFrameObject(frame_53c35cba6a7af9e0bc5c80ae4acc27e3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__15_setsnake(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_7a17e11b0021048edd51a6af3ff2aee3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7a17e11b0021048edd51a6af3ff2aee3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7a17e11b0021048edd51a6af3ff2aee3)) {
        Py_XDECREF(cache_frame_7a17e11b0021048edd51a6af3ff2aee3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a17e11b0021048edd51a6af3ff2aee3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a17e11b0021048edd51a6af3ff2aee3 = MAKE_FUNCTION_FRAME(codeobj_7a17e11b0021048edd51a6af3ff2aee3, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7a17e11b0021048edd51a6af3ff2aee3->m_type_description == NULL);
    frame_7a17e11b0021048edd51a6af3ff2aee3 = cache_frame_7a17e11b0021048edd51a6af3ff2aee3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_7a17e11b0021048edd51a6af3ff2aee3);
    assert(Py_REFCNT(frame_7a17e11b0021048edd51a6af3ff2aee3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        frame_7a17e11b0021048edd51a6af3ff2aee3->m_frame.f_lineno = 52;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        frame_7a17e11b0021048edd51a6af3ff2aee3->m_frame.f_lineno = 53;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[22], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7a17e11b0021048edd51a6af3ff2aee3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a17e11b0021048edd51a6af3ff2aee3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a17e11b0021048edd51a6af3ff2aee3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a17e11b0021048edd51a6af3ff2aee3,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_7a17e11b0021048edd51a6af3ff2aee3 == cache_frame_7a17e11b0021048edd51a6af3ff2aee3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7a17e11b0021048edd51a6af3ff2aee3);
        cache_frame_7a17e11b0021048edd51a6af3ff2aee3 = NULL;
    }

    assertFrameObject(frame_7a17e11b0021048edd51a6af3ff2aee3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__16_setwalrus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_9f425a8fa7f4b2133c957f6d342b59db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9f425a8fa7f4b2133c957f6d342b59db = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9f425a8fa7f4b2133c957f6d342b59db)) {
        Py_XDECREF(cache_frame_9f425a8fa7f4b2133c957f6d342b59db);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f425a8fa7f4b2133c957f6d342b59db == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f425a8fa7f4b2133c957f6d342b59db = MAKE_FUNCTION_FRAME(codeobj_9f425a8fa7f4b2133c957f6d342b59db, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9f425a8fa7f4b2133c957f6d342b59db->m_type_description == NULL);
    frame_9f425a8fa7f4b2133c957f6d342b59db = cache_frame_9f425a8fa7f4b2133c957f6d342b59db;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_9f425a8fa7f4b2133c957f6d342b59db);
    assert(Py_REFCNT(frame_9f425a8fa7f4b2133c957f6d342b59db) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        frame_9f425a8fa7f4b2133c957f6d342b59db->m_frame.f_lineno = 55;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        frame_9f425a8fa7f4b2133c957f6d342b59db->m_frame.f_lineno = 56;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[8],
            PyTuple_GET_ITEM(mod_consts[23], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9f425a8fa7f4b2133c957f6d342b59db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f425a8fa7f4b2133c957f6d342b59db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f425a8fa7f4b2133c957f6d342b59db, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f425a8fa7f4b2133c957f6d342b59db,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_9f425a8fa7f4b2133c957f6d342b59db == cache_frame_9f425a8fa7f4b2133c957f6d342b59db) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9f425a8fa7f4b2133c957f6d342b59db);
        cache_frame_9f425a8fa7f4b2133c957f6d342b59db = NULL;
    }

    assertFrameObject(frame_9f425a8fa7f4b2133c957f6d342b59db);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function__17_petbtns(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_btn = NULL;
    PyObject *var_cat = NULL;
    PyObject *var_dog = NULL;
    PyObject *var_bird = NULL;
    PyObject *var_giraffe = NULL;
    PyObject *var_fish = NULL;
    PyObject *var_bunny = NULL;
    PyObject *var_hedgehog = NULL;
    PyObject *var_koala = NULL;
    PyObject *var_monkey = NULL;
    PyObject *var_octopus = NULL;
    PyObject *var_parrot = NULL;
    PyObject *var_peacock = NULL;
    PyObject *var_penguin = NULL;
    PyObject *var_snake = NULL;
    PyObject *var_walrus = NULL;
    struct Nuitka_FrameObject *frame_7fe73c7fb5dc8c46fe3810b379b26e0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7fe73c7fb5dc8c46fe3810b379b26e0a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7fe73c7fb5dc8c46fe3810b379b26e0a)) {
        Py_XDECREF(cache_frame_7fe73c7fb5dc8c46fe3810b379b26e0a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7fe73c7fb5dc8c46fe3810b379b26e0a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7fe73c7fb5dc8c46fe3810b379b26e0a = MAKE_FUNCTION_FRAME(codeobj_7fe73c7fb5dc8c46fe3810b379b26e0a, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_type_description == NULL);
    frame_7fe73c7fb5dc8c46fe3810b379b26e0a = cache_frame_7fe73c7fb5dc8c46fe3810b379b26e0a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_7fe73c7fb5dc8c46fe3810b379b26e0a);
    assert(Py_REFCNT(frame_7fe73c7fb5dc8c46fe3810b379b26e0a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[25];
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 60;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_btn == NULL);
        var_btn = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = mod_consts[28];
        tmp_kw_call_value_1_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
            tmp_kw_call_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_kw_call_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 61;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cat == NULL);
        var_cat = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = mod_consts[30];
        tmp_kw_call_value_1_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_kw_call_value_1_3 == NULL)) {
            tmp_kw_call_value_1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_kw_call_value_1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 62;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dog == NULL);
        var_dog = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = mod_consts[32];
        tmp_kw_call_value_1_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_value_1_4 == NULL)) {
            tmp_kw_call_value_1_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_value_1_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 63;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4};

            tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bird == NULL);
        var_bird = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = mod_consts[34];
        tmp_kw_call_value_1_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_kw_call_value_1_5 == NULL)) {
            tmp_kw_call_value_1_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_kw_call_value_1_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 64;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5};

            tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_giraffe == NULL);
        var_giraffe = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = mod_consts[36];
        tmp_kw_call_value_1_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_kw_call_value_1_6 == NULL)) {
            tmp_kw_call_value_1_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_kw_call_value_1_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 65;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6};

            tmp_assign_source_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fish == NULL);
        var_fish = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_kw_call_value_1_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_7 = mod_consts[38];
        tmp_kw_call_value_1_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_kw_call_value_1_7 == NULL)) {
            tmp_kw_call_value_1_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_kw_call_value_1_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 66;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7};

            tmp_assign_source_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bunny == NULL);
        var_bunny = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_kw_call_value_1_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_8 = mod_consts[40];
        tmp_kw_call_value_1_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_kw_call_value_1_8 == NULL)) {
            tmp_kw_call_value_1_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_kw_call_value_1_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 67;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8};

            tmp_assign_source_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_hedgehog == NULL);
        var_hedgehog = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_9;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_kw_call_value_1_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_9 = mod_consts[42];
        tmp_kw_call_value_1_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_kw_call_value_1_9 == NULL)) {
            tmp_kw_call_value_1_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_kw_call_value_1_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 68;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9};

            tmp_assign_source_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_9, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_koala == NULL);
        var_koala = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_10;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_kw_call_value_1_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = mod_consts[44];
        tmp_kw_call_value_1_10 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_kw_call_value_1_10 == NULL)) {
            tmp_kw_call_value_1_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_kw_call_value_1_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 69;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_10};

            tmp_assign_source_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_10, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_monkey == NULL);
        var_monkey = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_11;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_kw_call_value_1_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_11 = mod_consts[46];
        tmp_kw_call_value_1_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_kw_call_value_1_11 == NULL)) {
            tmp_kw_call_value_1_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_kw_call_value_1_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 70;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_11};

            tmp_assign_source_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_11, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_octopus == NULL);
        var_octopus = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_12;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_kw_call_value_1_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_12 = mod_consts[48];
        tmp_kw_call_value_1_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_kw_call_value_1_12 == NULL)) {
            tmp_kw_call_value_1_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_kw_call_value_1_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 71;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_12};

            tmp_assign_source_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_12, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_parrot == NULL);
        var_parrot = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_13;
        PyObject *tmp_kw_call_value_0_13;
        PyObject *tmp_kw_call_value_1_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_13 = mod_consts[50];
        tmp_kw_call_value_1_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_kw_call_value_1_13 == NULL)) {
            tmp_kw_call_value_1_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_kw_call_value_1_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 72;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_13, tmp_kw_call_value_1_13};

            tmp_assign_source_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_13, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_peacock == NULL);
        var_peacock = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_14;
        PyObject *tmp_kw_call_value_0_14;
        PyObject *tmp_kw_call_value_1_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_14 = mod_consts[52];
        tmp_kw_call_value_1_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_kw_call_value_1_14 == NULL)) {
            tmp_kw_call_value_1_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_kw_call_value_1_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 73;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_14, tmp_kw_call_value_1_14};

            tmp_assign_source_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_14, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_penguin == NULL);
        var_penguin = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_15;
        PyObject *tmp_kw_call_value_0_15;
        PyObject *tmp_kw_call_value_1_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_15 = mod_consts[54];
        tmp_kw_call_value_1_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_kw_call_value_1_15 == NULL)) {
            tmp_kw_call_value_1_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_kw_call_value_1_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 74;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_15, tmp_kw_call_value_1_15};

            tmp_assign_source_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_15, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_snake == NULL);
        var_snake = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_16;
        PyObject *tmp_kw_call_value_0_16;
        PyObject *tmp_kw_call_value_1_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_16 = mod_consts[56];
        tmp_kw_call_value_1_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_kw_call_value_1_16 == NULL)) {
            tmp_kw_call_value_1_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_kw_call_value_1_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 75;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_16, tmp_kw_call_value_1_16};

            tmp_assign_source_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_16, kw_values, mod_consts[27]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_walrus == NULL);
        var_walrus = tmp_assign_source_16;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_dog);
        tmp_called_instance_1 = var_dog;
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 77;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[58]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_cat);
        tmp_called_instance_2 = var_cat;
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 78;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[58]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_bird);
        tmp_called_instance_3 = var_bird;
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 79;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[58]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_giraffe);
        tmp_called_instance_4 = var_giraffe;
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 80;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[58]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(var_fish);
        tmp_called_instance_5 = var_fish;
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 81;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[58]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_bunny);
        tmp_called_instance_6 = var_bunny;
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 82;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[58]);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(var_hedgehog);
        tmp_called_instance_7 = var_hedgehog;
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 83;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[58]);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(var_koala);
        tmp_called_instance_8 = var_koala;
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 84;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[58]);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(var_monkey);
        tmp_called_instance_9 = var_monkey;
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 85;
        tmp_call_result_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[58]);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(var_octopus);
        tmp_called_instance_10 = var_octopus;
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 86;
        tmp_call_result_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[58]);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(var_parrot);
        tmp_called_instance_11 = var_parrot;
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 87;
        tmp_call_result_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[58]);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(var_peacock);
        tmp_called_instance_12 = var_peacock;
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 88;
        tmp_call_result_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[58]);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_13;
        CHECK_OBJECT(var_penguin);
        tmp_called_instance_13 = var_penguin;
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 89;
        tmp_call_result_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, mod_consts[58]);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_call_result_14;
        CHECK_OBJECT(var_snake);
        tmp_called_instance_14 = var_snake;
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 90;
        tmp_call_result_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[58]);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_call_result_15;
        CHECK_OBJECT(var_walrus);
        tmp_called_instance_15 = var_walrus;
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 91;
        tmp_call_result_15 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, mod_consts[58]);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_16;
        CHECK_OBJECT(var_btn);
        tmp_expression_value_1 = var_btn;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[59]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame.f_lineno = 92;
        tmp_call_result_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[60], 0), mod_consts[61]);
        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7fe73c7fb5dc8c46fe3810b379b26e0a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7fe73c7fb5dc8c46fe3810b379b26e0a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7fe73c7fb5dc8c46fe3810b379b26e0a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7fe73c7fb5dc8c46fe3810b379b26e0a,
        type_description_1,
        var_btn,
        var_cat,
        var_dog,
        var_bird,
        var_giraffe,
        var_fish,
        var_bunny,
        var_hedgehog,
        var_koala,
        var_monkey,
        var_octopus,
        var_parrot,
        var_peacock,
        var_penguin,
        var_snake,
        var_walrus
    );


    // Release cached frame if used for exception.
    if (frame_7fe73c7fb5dc8c46fe3810b379b26e0a == cache_frame_7fe73c7fb5dc8c46fe3810b379b26e0a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7fe73c7fb5dc8c46fe3810b379b26e0a);
        cache_frame_7fe73c7fb5dc8c46fe3810b379b26e0a = NULL;
    }

    assertFrameObject(frame_7fe73c7fb5dc8c46fe3810b379b26e0a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_btn);
    Py_DECREF(var_btn);
    var_btn = NULL;
    CHECK_OBJECT(var_cat);
    Py_DECREF(var_cat);
    var_cat = NULL;
    CHECK_OBJECT(var_dog);
    Py_DECREF(var_dog);
    var_dog = NULL;
    CHECK_OBJECT(var_bird);
    Py_DECREF(var_bird);
    var_bird = NULL;
    CHECK_OBJECT(var_giraffe);
    Py_DECREF(var_giraffe);
    var_giraffe = NULL;
    CHECK_OBJECT(var_fish);
    Py_DECREF(var_fish);
    var_fish = NULL;
    CHECK_OBJECT(var_bunny);
    Py_DECREF(var_bunny);
    var_bunny = NULL;
    CHECK_OBJECT(var_hedgehog);
    Py_DECREF(var_hedgehog);
    var_hedgehog = NULL;
    CHECK_OBJECT(var_koala);
    Py_DECREF(var_koala);
    var_koala = NULL;
    CHECK_OBJECT(var_monkey);
    Py_DECREF(var_monkey);
    var_monkey = NULL;
    CHECK_OBJECT(var_octopus);
    Py_DECREF(var_octopus);
    var_octopus = NULL;
    CHECK_OBJECT(var_parrot);
    Py_DECREF(var_parrot);
    var_parrot = NULL;
    CHECK_OBJECT(var_peacock);
    Py_DECREF(var_peacock);
    var_peacock = NULL;
    CHECK_OBJECT(var_penguin);
    Py_DECREF(var_penguin);
    var_penguin = NULL;
    CHECK_OBJECT(var_snake);
    Py_DECREF(var_snake);
    var_snake = NULL;
    CHECK_OBJECT(var_walrus);
    Py_DECREF(var_walrus);
    var_walrus = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_btn);
    var_btn = NULL;
    Py_XDECREF(var_cat);
    var_cat = NULL;
    Py_XDECREF(var_dog);
    var_dog = NULL;
    Py_XDECREF(var_bird);
    var_bird = NULL;
    Py_XDECREF(var_giraffe);
    var_giraffe = NULL;
    Py_XDECREF(var_fish);
    var_fish = NULL;
    Py_XDECREF(var_bunny);
    var_bunny = NULL;
    Py_XDECREF(var_hedgehog);
    var_hedgehog = NULL;
    Py_XDECREF(var_koala);
    var_koala = NULL;
    Py_XDECREF(var_monkey);
    var_monkey = NULL;
    Py_XDECREF(var_octopus);
    var_octopus = NULL;
    Py_XDECREF(var_parrot);
    var_parrot = NULL;
    Py_XDECREF(var_peacock);
    var_peacock = NULL;
    Py_XDECREF(var_penguin);
    var_penguin = NULL;
    Py_XDECREF(var_snake);
    var_snake = NULL;
    Py_XDECREF(var_walrus);
    var_walrus = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION___main__$$$function__10_setmonkey() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__10_setmonkey,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8eea39e161c3d4ee7db712b98bb32353,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__11_setoctopus() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__11_setoctopus,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_08fd0bb76f038e88b50d526bdac97562,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__12_setparrot() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__12_setparrot,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_643fe4fe728a3172c36cf69fc0af9454,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__13_setpeacock() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__13_setpeacock,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6cd94fe2cfafb00a7a813ebe108d6e82,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__14_setpenguin() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__14_setpenguin,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_53c35cba6a7af9e0bc5c80ae4acc27e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__15_setsnake() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__15_setsnake,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7a17e11b0021048edd51a6af3ff2aee3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__16_setwalrus() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__16_setwalrus,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9f425a8fa7f4b2133c957f6d342b59db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__17_petbtns() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__17_petbtns,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7fe73c7fb5dc8c46fe3810b379b26e0a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__1_back() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__1_back,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9d5f2413fca32abc86b5125b21e67b31,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__2_setcat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__2_setcat,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e73e910a74e6dd4ff4f2874724b9b82c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__3_setdog() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__3_setdog,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9c1463e1239de56861f418f3f3c7ee4e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__4_setbird() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__4_setbird,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_872c4f3064924f9c26abdc0865d54183,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__5_setgiraffe() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__5_setgiraffe,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_87bf6fb4aaa9944cf0fc392e55b2b4c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__6_setfish() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__6_setfish,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_825ae33dc61592060fec9e4c65571626,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__7_setbunny() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__7_setbunny,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_741f03e7ce5dd415b54f64bdc05a8025,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__8_sethedgehog() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__8_sethedgehog,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_714d93fcb9549af8db5e4b14e48ce246,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function__9_setkoala() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__9_setkoala,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4eb62e62c119e11b62b0e60bd7189218,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable___main__[] = {
    impl___main__$$$function__1_back,
    impl___main__$$$function__2_setcat,
    impl___main__$$$function__3_setdog,
    impl___main__$$$function__4_setbird,
    impl___main__$$$function__5_setgiraffe,
    impl___main__$$$function__6_setfish,
    impl___main__$$$function__7_setbunny,
    impl___main__$$$function__8_sethedgehog,
    impl___main__$$$function__9_setkoala,
    impl___main__$$$function__10_setmonkey,
    impl___main__$$$function__11_setoctopus,
    impl___main__$$$function__12_setparrot,
    impl___main__$$$function__13_setpeacock,
    impl___main__$$$function__14_setpenguin,
    impl___main__$$$function__15_setsnake,
    impl___main__$$$function__16_setwalrus,
    impl___main__$$$function__17_petbtns,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable___main__;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable___main__) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable___main__[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module___main__,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode___main__(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("__main__");

    // Store the module for future use.
    module___main__ = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 1
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("__main__: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("__main__: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("__main__: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in init__main__\n");

    moduledict___main__ = MODULE_DICT(module___main__);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict___main__,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module___main__);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !1
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 1
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module___main__);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_3182da30bac8d719e3554a31527a509a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;

    // Module code.
    frame_3182da30bac8d719e3554a31527a509a = MAKE_MODULE_FRAME(codeobj_3182da30bac8d719e3554a31527a509a, module___main__);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_3182da30bac8d719e3554a31527a509a);
    assert(Py_REFCNT(frame_3182da30bac8d719e3554a31527a509a) == 2);

    // Framed code:
    {
        PyObject *tmp_imported_value_1;
        frame_3182da30bac8d719e3554a31527a509a->m_frame.f_lineno = 1;
        tmp_imported_value_1 = IMPORT_HARD_SITE();
        if (tmp_imported_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[67];
        frame_3182da30bac8d719e3554a31527a509a->m_frame.f_lineno = 1;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[68];
        tmp_globals_arg_value_2 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_2 = (PyObject *)moduledict___main__;
        tmp_fromlist_value_2 = mod_consts[69];
        tmp_level_value_2 = mod_consts[67];
        frame_3182da30bac8d719e3554a31527a509a->m_frame.f_lineno = 2;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module___main__, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        frame_3182da30bac8d719e3554a31527a509a->m_frame.f_lineno = 4;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[71]);

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        frame_3182da30bac8d719e3554a31527a509a->m_frame.f_lineno = 6;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION___main__$$$function__1_back();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION___main__$$$function__2_setcat();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION___main__$$$function__3_setdog();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION___main__$$$function__4_setbird();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION___main__$$$function__5_setgiraffe();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION___main__$$$function__6_setfish();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION___main__$$$function__7_setbunny();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION___main__$$$function__8_sethedgehog();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION___main__$$$function__9_setkoala();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION___main__$$$function__10_setmonkey();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION___main__$$$function__11_setoctopus();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION___main__$$$function__12_setparrot();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION___main__$$$function__13_setpeacock();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION___main__$$$function__14_setpenguin();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION___main__$$$function__15_setsnake();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION___main__$$$function__16_setwalrus();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION___main__$$$function__17_petbtns();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_24);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_called_value_3 == NULL));
        frame_3182da30bac8d719e3554a31527a509a->m_frame.f_lineno = 94;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[74]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        frame_3182da30bac8d719e3554a31527a509a->m_frame.f_lineno = 98;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[75]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_3182da30bac8d719e3554a31527a509a->m_frame.f_lineno = 99;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[76],
            PyTuple_GET_ITEM(mod_consts[77], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        frame_3182da30bac8d719e3554a31527a509a->m_frame.f_lineno = 100;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[78]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3182da30bac8d719e3554a31527a509a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3182da30bac8d719e3554a31527a509a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3182da30bac8d719e3554a31527a509a, exception_lineno);
    }



    assertFrameObject(frame_3182da30bac8d719e3554a31527a509a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("__main__", false);

    Py_INCREF(module___main__);
    return module___main__;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 1
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("__main__", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
