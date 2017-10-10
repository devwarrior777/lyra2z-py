
--------------------------------------------------------------
lyra2z-py - my testing for making C module for lyra2z hashing. 
--------------------------------------------------------------

1. Make C code work - lyra2z-zcoin is a simple windows test harness for that
2. Make Python module wrapper
3. Make setup


Later update a p2pool fork with lyra2z_module.py and make it work ...

---------------------------------------------------------------------

Notes for Zcoin:

Please see the "test.py" for a testcase to verify your implementation.

from ocminer:

Requirements:
-------------------------
In order to run P2Pool and other Python based pools with the Zcoin network, you would need to build and install the
lyra2z_hash module for Python that includes the lyra2z proof of work code that Zcoin uses for hashes.

Linux:

    sudo python setup.py install

Windows (mingw):
* Install MinGW: http://www.mingw.org/wiki/Getting_Started
* Install Python 2.7: http://www.python.org/getit/

In bash type this:

    C:\Python27\python.exe setup.py build --compile=mingw32 install

Windows (microsoft visual c++)
* Open visual studio console

In cmd type this:

    SET VS90COMNTOOLS=%VS110COMNTOOLS%	           # For visual c++ 2012
    SET VS90COMNTOOLS=%VS100COMNTOOLS%             # For visual c++ 2010
    C:\Python27\python.exe setup.py build --compile=mingw32 install
	
If you run into an error with unrecognized command line option '-mno-cygwin', see this:
http://stackoverflow.com/questions/6034390/compiling-with-cython-and-mingw-produces-gcc-error-unrecognized-command-line-o




