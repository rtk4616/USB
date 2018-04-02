



USING:  kernel alien alien.c-types alien.data alien.accessors layouts
        libusb byte-arrays namespaces math math.parser arrays
        tokyo.utils tools.hexdump prettyprint combinators.short-circuit ;

IN: usb.usb-test

SYMBOLS: dev cnt ;

: ptr-pass-through ( obj quot -- alien )
  over { [ c-ptr? ] [ ] } 1&& [ drop ] [ call ] if ; inline


: usb-start ( -- )
    f libusb_init
    [
        f
        cell <byte-array> dev set
        dev get
        libusb_get_device_list cnt set
        dev get int deref <alien> cnt get cell * memory>byte-array
        dev get malloc-byte-array alien-address >hex
        drop drop
    ] when

    f libusb_exit
    ;