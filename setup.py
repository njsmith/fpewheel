from setuptools import setup, Extension

setup(name="fpewheel",
      ext_modules=[Extension("fpewheel", sources=["fpewheel.c"])])
