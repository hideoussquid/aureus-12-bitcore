from distutils.core import setup
setup(name='AURspendfrom',
      version='1.0',
      description='Command-line utility for aureus "coin control"',
      author='Gavin Andresen',
      author_email='gavin@aureusfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
