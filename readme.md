# KNIGHT OF ASHES

# Summary

* **[Summary](#summary)**
* **[Compilation](#compilation)**
* **[Issues](#issues)**

# Compilation

For compilation, you will have to run:

* **First**: `make init`
* **Then**: `make`

# Issues

When running the bin, if you've got this error: `./my_rpg: error while loading shared libraries: libcsfml-audio.so.2.5: cannot open shared object file: No such file or directory`, use:

* `echo $LD_LIBRARY_PATH`: if is empty, then type:

    * `LD_LIBRARY_PATH=(path to repo: use pwd)/lib/lib`
    * `export LD_LIBRARY_PATH`
