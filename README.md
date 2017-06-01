# streamix-glm2c
Reads the dependency graph of a Streamix program (generated by the Streamix compiler [smxc](https://github.com/moiri/streamix-c)) and generates c code that can be used by the streamix runtime system [smxrts](https://github.com/moiri/streamix-rts).

## Installation

    make
    sudo make install

Requires
 - [`igraph`](http://igraph.org/c/)
 - [`zlog`](https://github.com/HardySimpson/zlog)
