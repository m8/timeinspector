# TimeInspector
Code artifact for the paper "TimeInspector: A Static Analysis Approach for Detecting Timing Attacks" published in the SILM workshop at EuroS&P 2023.

## Abstract
We present a static analysis approach to detect malicious binaries that are capable of carrying out a timing attack. The proposed approach is based on a simple observation that the timing attacks typically operate by measuring the execution times of short sequences of instructions.


## Prequsites
- radare2 (34ce17da6f7cd3950565605ccd9035196e323924)
- r2pipe

## Install & Use

This will install radare2 and r2pipe in a virtual environment.

```sh
git clone https://github.com/m8/timeinspector.git
./setup.sh
```

```
usage: main.py [-h] [-d] [-f FILE]

options:
  -h, --help            show this help message and exit
  -d, --dependency      open dependency
  -f FILE, --file FILE  file name
```

Run all the tests.

```sh
./run.sh
```

## Citation

```

```
