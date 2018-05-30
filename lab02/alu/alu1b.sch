<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="a" />
        <signal name="b" />
        <signal name="XLXN_3" />
        <signal name="XLXN_4" />
        <signal name="ci" />
        <signal name="XLXN_6" />
        <signal name="XLXN_7" />
        <signal name="set" />
        <signal name="less" />
        <signal name="co" />
        <signal name="op(2:0)" />
        <signal name="op(0)" />
        <signal name="op(1)" />
        <signal name="op(2)" />
        <signal name="r" />
        <signal name="XLXN_8" />
        <port polarity="Input" name="a" />
        <port polarity="Input" name="b" />
        <port polarity="Input" name="ci" />
        <port polarity="Output" name="set" />
        <port polarity="Input" name="less" />
        <port polarity="Output" name="co" />
        <port polarity="Input" name="op(2:0)" />
        <port polarity="Output" name="r" />
        <blockdef name="m4_1e">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="96" y1="-416" y2="-416" x1="0" />
            <line x2="96" y1="-352" y2="-352" x1="0" />
            <line x2="96" y1="-288" y2="-288" x1="0" />
            <line x2="96" y1="-224" y2="-224" x1="0" />
            <line x2="96" y1="-32" y2="-32" x1="0" />
            <line x2="256" y1="-320" y2="-320" x1="320" />
            <line x2="96" y1="-160" y2="-160" x1="0" />
            <line x2="96" y1="-96" y2="-96" x1="0" />
            <line x2="96" y1="-96" y2="-96" x1="176" />
            <line x2="176" y1="-208" y2="-96" x1="176" />
            <line x2="96" y1="-32" y2="-32" x1="224" />
            <line x2="224" y1="-216" y2="-32" x1="224" />
            <line x2="96" y1="-224" y2="-192" x1="256" />
            <line x2="256" y1="-416" y2="-224" x1="256" />
            <line x2="256" y1="-448" y2="-416" x1="96" />
            <line x2="96" y1="-192" y2="-448" x1="96" />
            <line x2="96" y1="-160" y2="-160" x1="128" />
            <line x2="128" y1="-200" y2="-160" x1="128" />
        </blockdef>
        <blockdef name="and2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
        </blockdef>
        <blockdef name="or2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="192" ey="-96" sx="112" sy="-48" r="88" cx="116" cy="-136" />
            <arc ex="48" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <line x2="48" y1="-144" y2="-144" x1="112" />
            <arc ex="112" ey="-144" sx="192" sy="-96" r="88" cx="116" cy="-56" />
            <line x2="48" y1="-48" y2="-48" x1="112" />
        </blockdef>
        <blockdef name="add1b">
            <timestamp>2017-3-14T3:16:12</timestamp>
            <rect width="256" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="m2_1">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="96" y1="-64" y2="-192" x1="96" />
            <line x2="96" y1="-96" y2="-64" x1="256" />
            <line x2="256" y1="-160" y2="-96" x1="256" />
            <line x2="256" y1="-192" y2="-160" x1="96" />
            <line x2="96" y1="-32" y2="-32" x1="176" />
            <line x2="176" y1="-80" y2="-32" x1="176" />
            <line x2="96" y1="-32" y2="-32" x1="0" />
            <line x2="256" y1="-128" y2="-128" x1="320" />
            <line x2="96" y1="-96" y2="-96" x1="0" />
            <line x2="96" y1="-160" y2="-160" x1="0" />
        </blockdef>
        <blockdef name="inv">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <circle r="16" cx="144" cy="-32" />
        </blockdef>
        <blockdef name="vcc">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-64" x1="64" />
            <line x2="64" y1="0" y2="-32" x1="64" />
            <line x2="32" y1="-64" y2="-64" x1="96" />
        </blockdef>
        <block symbolname="m4_1e" name="XLXI_1">
            <blockpin signalname="XLXN_6" name="D0" />
            <blockpin signalname="XLXN_7" name="D1" />
            <blockpin signalname="set" name="D2" />
            <blockpin signalname="less" name="D3" />
            <blockpin signalname="XLXN_8" name="E" />
            <blockpin signalname="op(0)" name="S0" />
            <blockpin signalname="op(1)" name="S1" />
            <blockpin signalname="r" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_2">
            <blockpin signalname="b" name="I0" />
            <blockpin signalname="a" name="I1" />
            <blockpin signalname="XLXN_6" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_3">
            <blockpin signalname="b" name="I0" />
            <blockpin signalname="a" name="I1" />
            <blockpin signalname="XLXN_7" name="O" />
        </block>
        <block symbolname="add1b" name="XLXI_4">
            <blockpin signalname="XLXN_4" name="b" />
            <blockpin signalname="ci" name="ci" />
            <blockpin signalname="a" name="a" />
            <blockpin signalname="set" name="r" />
            <blockpin signalname="co" name="co" />
        </block>
        <block symbolname="m2_1" name="XLXI_5">
            <blockpin signalname="b" name="D0" />
            <blockpin signalname="XLXN_3" name="D1" />
            <blockpin signalname="op(2)" name="S0" />
            <blockpin signalname="XLXN_4" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_6">
            <blockpin signalname="b" name="I" />
            <blockpin signalname="XLXN_3" name="O" />
        </block>
        <block symbolname="vcc" name="XLXI_7">
            <blockpin signalname="XLXN_8" name="P" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1072" y="944" name="XLXI_3" orien="R0" />
        <branch name="a">
            <wire x2="832" y1="544" y2="544" x1="608" />
            <wire x2="832" y1="544" y2="816" x1="832" />
            <wire x2="1072" y1="816" y2="816" x1="832" />
            <wire x2="832" y1="816" y2="1200" x1="832" />
            <wire x2="1664" y1="1200" y2="1200" x1="832" />
            <wire x2="1072" y1="544" y2="544" x1="832" />
        </branch>
        <branch name="b">
            <wire x2="928" y1="608" y2="608" x1="608" />
            <wire x2="928" y1="608" y2="880" x1="928" />
            <wire x2="1072" y1="880" y2="880" x1="928" />
            <wire x2="928" y1="880" y2="1040" x1="928" />
            <wire x2="1184" y1="1040" y2="1040" x1="928" />
            <wire x2="928" y1="1040" y2="1104" x1="928" />
            <wire x2="944" y1="1104" y2="1104" x1="928" />
            <wire x2="1072" y1="608" y2="608" x1="928" />
        </branch>
        <instance x="1664" y="1232" name="XLXI_4" orien="R0">
        </instance>
        <instance x="1184" y="1200" name="XLXI_5" orien="R0" />
        <instance x="944" y="1136" name="XLXI_6" orien="R0" />
        <branch name="XLXN_3">
            <wire x2="1184" y1="1104" y2="1104" x1="1168" />
        </branch>
        <branch name="XLXN_4">
            <wire x2="1664" y1="1072" y2="1072" x1="1504" />
        </branch>
        <branch name="ci">
            <wire x2="1600" y1="352" y2="1136" x1="1600" />
            <wire x2="1664" y1="1136" y2="1136" x1="1600" />
        </branch>
        <iomarker fontsize="28" x="1600" y="352" name="ci" orien="R270" />
        <instance x="2208" y="992" name="XLXI_1" orien="R0" />
        <branch name="XLXN_6">
            <wire x2="2208" y1="576" y2="576" x1="1328" />
        </branch>
        <branch name="XLXN_7">
            <wire x2="1760" y1="848" y2="848" x1="1328" />
            <wire x2="1760" y1="640" y2="848" x1="1760" />
            <wire x2="2208" y1="640" y2="640" x1="1760" />
        </branch>
        <branch name="set">
            <wire x2="2128" y1="1072" y2="1072" x1="2048" />
            <wire x2="2576" y1="1072" y2="1072" x1="2128" />
            <wire x2="2128" y1="704" y2="1072" x1="2128" />
            <wire x2="2208" y1="704" y2="704" x1="2128" />
        </branch>
        <branch name="less">
            <wire x2="2208" y1="768" y2="768" x1="608" />
        </branch>
        <iomarker fontsize="28" x="608" y="768" name="less" orien="R180" />
        <branch name="co">
            <wire x2="2080" y1="1200" y2="1200" x1="2048" />
            <wire x2="2080" y1="1200" y2="1440" x1="2080" />
        </branch>
        <iomarker fontsize="28" x="2080" y="1440" name="co" orien="R90" />
        <branch name="op(2:0)">
            <wire x2="864" y1="320" y2="320" x1="640" />
        </branch>
        <iomarker fontsize="28" x="640" y="320" name="op(2:0)" orien="R180" />
        <branch name="op(0)">
            <attrtext style="alignment:SOFT-VRIGHT;fontsize:28;fontname:Arial" attrname="Name" x="2160" y="1200" type="branch" />
            <wire x2="2208" y1="832" y2="832" x1="2160" />
            <wire x2="2160" y1="832" y2="1200" x1="2160" />
        </branch>
        <branch name="op(1)">
            <attrtext style="alignment:SOFT-VRIGHT;fontsize:28;fontname:Arial" attrname="Name" x="2240" y="1280" type="branch" />
            <wire x2="2208" y1="896" y2="896" x1="2192" />
            <wire x2="2192" y1="896" y2="1200" x1="2192" />
            <wire x2="2240" y1="1200" y2="1200" x1="2192" />
            <wire x2="2240" y1="1200" y2="1280" x1="2240" />
        </branch>
        <branch name="op(2)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1120" y="1392" type="branch" />
            <wire x2="1184" y1="1392" y2="1392" x1="1120" />
            <wire x2="1184" y1="1168" y2="1392" x1="1184" />
        </branch>
        <branch name="r">
            <wire x2="2720" y1="672" y2="672" x1="2528" />
        </branch>
        <iomarker fontsize="28" x="2720" y="672" name="r" orien="R0" />
        <iomarker fontsize="28" x="2576" y="1072" name="set" orien="R0" />
        <instance x="1072" y="672" name="XLXI_2" orien="R0" />
        <iomarker fontsize="28" x="608" y="544" name="a" orien="R180" />
        <iomarker fontsize="28" x="608" y="608" name="b" orien="R180" />
        <branch name="XLXN_8">
            <wire x2="2208" y1="960" y2="1024" x1="2208" />
            <wire x2="2496" y1="1024" y2="1024" x1="2208" />
        </branch>
        <instance x="2432" y="1024" name="XLXI_7" orien="R0" />
    </sheet>
</drawing>