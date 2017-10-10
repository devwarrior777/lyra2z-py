#include <Python.h>

#include "Lyra2z.h"

static PyObject *lyra2z_getpowhash(PyObject *self, PyObject *args)
{
    char *output;
    PyObject *value;
#if PY_MAJOR_VERSION >= 3
    PyBytesObject *input;
#else
    PyStringObject *input;
#endif
    if (!PyArg_ParseTuple(args, "S", &input))
        return NULL;
    Py_INCREF(input);
    output = PyMem_Malloc(32);

#if PY_MAJOR_VERSION >= 3
    lyra2z_hash((char *)PyBytes_AsString((PyObject*) input), output);
#else
    lyra2z_hash((char *)PyString_AsString((PyObject*) input), output);
#endif
    Py_DECREF(input);
#if PY_MAJOR_VERSION >= 3
    value = Py_BuildValue("y#", output, 32);
#else
    value = Py_BuildValue("s#", output, 32);
#endif
    PyMem_Free(output);
    return value;
}

static PyMethodDef Lyra2ZMethods[] = {
    { "getPoWHash", lyra2z_getpowhash, METH_VARARGS, "Returns the proof of work hash using lyra2z hash" },
    { NULL, NULL, 0, NULL }
};

#if PY_MAJOR_VERSION >= 3
static struct PyModuleDef Lyra2ZModule = {
    PyModuleDef_HEAD_INIT,
    "lyra2z_hash",
    "...",
    -1,
    Lyra2ZMethods
};

PyMODINIT_FUNC PyInit_lyra2z_hash(void) {
    return PyModule_Create(&Lyra2ZModule);
}

#else

PyMODINIT_FUNC initlyra2z_hash(void) {
    (void) Py_InitModule("lyra2z_hash", Lyra2ZMethods);
}
#endif
