./: {*/ -build/} doc{README} legal{LICENSE.TXT FTL.TXT GPLv2.TXT} manifest

# Don't install tests.
#
tests/: install = false
