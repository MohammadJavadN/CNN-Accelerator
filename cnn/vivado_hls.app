<project xmlns="com.autoesl.autopilot.project" name="cnn" top="cnn">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <files xmlns="">
        <file name="../../cnn_tb.cpp" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../tb/in.dat" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../tb/out.dat" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="lib/activ_fun.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="cnn.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="lib/conv.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="lib/dense.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="lib/flat.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="lib/pool.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="lib/utils.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

