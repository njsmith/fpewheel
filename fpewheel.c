/* To the extent possible under law, Nathaniel J. Smith has waived all
 * copyright and related or neighboring rights to this work, under the terms
 * of the CC0 public domain dedication:
 *
 * https://creativecommons.org/publicdomain/zero/1.0/
 */

#include <Python.h>

static PyObject*
fpewheel_f(PyObject* self, PyObject* args)
{
    double result;

    PyFPE_START_PROTECT("division by zero", return NULL);
    result = 1.0 / 0.0;
    PyFPE_END_PROTECT(result);
    return PyFloat_FromDouble(result);
}

static PyMethodDef fpewheel_methods[] = {
    {"f", fpewheel_f, METH_VARARGS, "divide by zero"},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef fpewheel_module = {
    PyModuleDef_HEAD_INIT,
    "fpewheel",
    NULL,
    -1,
    fpewheel_methods,
};

PyMODINIT_FUNC
PyInit_fpewheel(void)
{
    return PyModule_Create(&fpewheel_module);
}
