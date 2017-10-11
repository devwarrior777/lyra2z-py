
--------------------------------------------------------------------
lyra2z-py - my testing for making Python C module for lyra2z hashing 
--------------------------------------------------------------------

1. Make C code work - lyra2z-zcoin is a simple windows test harness for that - done
2. Make Python module wrapper - done
3. Make setup - done
4. Make linux work - done
5. Make windows work - done
6. Add test.py - done


Now you can update a p2pool fork with lyra2z_hash module ...

---------------------------------------------------------------------

Notes for Zcoin:

Please see the "test.py" for a testcase to verify your implementation.

Previous readme from ocminer (updated):

Requirements:
-------------------------
In order to run P2Pool and other Python based pools with the Zcoin network, you would need to build and install the
lyra2z_hash module for Python that includes the lyra2z proof of work code that Zcoin uses for hashes.

Linux:

    sudo python setup.py install


Windows (mingw):
* Install MinGW: http://www.mingw.org/wiki/Getting_Started
* Install Python 2.7: http://www.python.org/getit/

In cmd type this:

    C:\Python27\python.exe setup.py build --compile=mingw32 install

    - untested

	
Windows (microsoft visual c++)
* Open visual studio console

In cmd type this:

    SET VS90COMNTOOLS=%VS140COMNTOOLS%	           # For visual c++ 2015
    C:\Python27\python.exe setup.py install

	Test the install:
	
	C:\Python27\python.exe
	...
	>>>import lyra2z_hash
	>>>help('lyra2z_hash')
	>>>quit()
	
    - tested ok



