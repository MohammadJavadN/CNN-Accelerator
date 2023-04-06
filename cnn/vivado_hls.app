<project xmlns="com.autoesl.autopilot.project" top="cnn" name="cnn">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <files xmlns="">
        <file name="../../tb/out.dat" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../tb/in.dat" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../cnn_tb.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="lib/utils.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="lib/pool.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="lib/flat.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="lib/dense.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="lib/conv.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="cnn.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="lib/activ_fun.c" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

