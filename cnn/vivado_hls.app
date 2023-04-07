<project xmlns="com.autoesl.autopilot.project" name="cnn" top="cnn">
    <files>
        <file name="../../tb/out.dat" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
        <file name="../../tb/in.dat" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
        <file name="../../cnn_tb.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false" csimflags=" -Wno-unknown-pragmas"/>
        <file name="lib/utils.c" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="lib/pool.c" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="lib/flat.c" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="lib/dense.c" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="lib/conv.c" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="cnn.c" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
        <file name="lib/activ_fun.c" sc="0" tb="false" cflags="" blackbox="false" csimflags=""/>
    </files>
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

