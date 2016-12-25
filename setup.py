from setuptools import setup, Extension

setup(name="fpewheel",
      author="Nathaniel J. Smith",
      author_email="njs@pobox.com",
      description="Test case for PyFPE_* macros",
      url="https://github.com/njsmith/fpewheel",
      classifiers=[
          "License :: CC0 1.0 Universal (CC0 1.0) Public Domain Dedication",
      ],
      ext_modules=[Extension("fpewheel", sources=["fpewheel.c"])])
