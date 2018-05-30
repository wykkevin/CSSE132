<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_3" />
        <signal name="XLXN_4" />
        <signal name="XLXN_5" />
        <signal name="XLXN_6" />
        <signal name="b" />
        <signal name="ci" />
        <signal name="r" />
        <signal name="a" />
        <signal name="XLXN_12" />
        <signal name="XLXN_13" />
        <signal name="XLXN_14" />
        <signal name="XLXN_15" />
        <signal name="XLXN_16" />
        <signal name="XLXN_18" />
        <signal name="XLXN_19" />
        <signal name="XLXN_20" />
        <signal name="co" />
        <signal name="XLXN_23" />
        <port polarity="Input" name="b" />
        <port polarity="Input" name="ci" />
        <port polarity="Output" name="r" />
        <port polarity="Input" name="a" />
        <port polarity="Output" name="co" />
        <blockdef name="or4">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="48" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="48" y1="-256" y2="-256" x1="0" />
            <line x2="192" y1="-160" y2="-160" x1="256" />
            <arc ex="112" ey="-208" sx="192" sy="-160" r="88" cx="116" cy="-120" />
            <line x2="48" y1="-208" y2="-208" x1="112" />
            <line x2="48" y1="-112" y2="-112" x1="112" />
            <line x2="48" y1="-256" y2="-208" x1="48" />
            <line x2="48" y1="-64" y2="-112" x1="48" />
            <arc ex="48" ey="-208" sx="48" sy="-112" r="56" cx="16" cy="-160" />
            <arc ex="192" ey="-160" sx="112" sy="-112" r="88" cx="116" cy="-200" />
        </blockdef>
        <blockdef name="and3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
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
        <blockdef name="or3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="48" y1="-64" y2="-64" x1="0" />
            <line x2="72" y1="-128" y2="-128" x1="0" />
            <line x2="48" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <arc ex="192" ey="-128" sx="112" sy="-80" r="88" cx="116" cy="-168" />
            <arc ex="48" ey="-176" sx="48" sy="-80" r="56" cx="16" cy="-128" />
            <line x2="48" y1="-64" y2="-80" x1="48" />
            <line x2="48" y1="-192" y2="-176" x1="48" />
            <line x2="48" y1="-80" y2="-80" x1="112" />
            <arc ex="112" ey="-176" sx="192" sy="-128" r="88" cx="116" cy="-88" />
            <line x2="48" y1="-176" y2="-176" x1="112" />
        </blockdef>
        <block symbolname="or4" name="XLXI_5">
            <blockpin signalname="XLXN_6" name="I0" />
            <blockpin signalname="XLXN_5" name="I1" />
            <blockpin signalname="XLXN_4" name="I2" />
            <blockpin signalname="XLXN_3" name="I3" />
            <blockpin signalname="r" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_11">
            <blockpin signalname="a" name="I" />
            <blockpin signalname="XLXN_13" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_12">
            <blockpin signalname="b" name="I" />
            <blockpin signalname="XLXN_12" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_13">
            <blockpin signalname="b" name="I" />
            <blockpin signalname="XLXN_15" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_14">
            <blockpin signalname="ci" name="I" />
            <blockpin signalname="XLXN_14" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_16">
            <blockpin signalname="ci" name="I" />
            <blockpin signalname="XLXN_16" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_17">
            <blockpin signalname="ci" name="I0" />
            <blockpin signalname="XLXN_12" name="I1" />
            <blockpin signalname="XLXN_13" name="I2" />
            <blockpin signalname="XLXN_3" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_18">
            <blockpin signalname="XLXN_14" name="I0" />
            <blockpin signalname="XLXN_15" name="I1" />
            <blockpin signalname="a" name="I2" />
            <blockpin signalname="XLXN_4" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_21">
            <blockpin signalname="ci" name="I0" />
            <blockpin signalname="b" name="I1" />
            <blockpin signalname="a" name="I2" />
            <blockpin signalname="XLXN_6" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_23">
            <blockpin signalname="ci" name="I0" />
            <blockpin signalname="a" name="I1" />
            <blockpin signalname="XLXN_18" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_24">
            <blockpin signalname="b" name="I0" />
            <blockpin signalname="a" name="I1" />
            <blockpin signalname="XLXN_19" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_25">
            <blockpin signalname="ci" name="I0" />
            <blockpin signalname="b" name="I1" />
            <blockpin signalname="XLXN_20" name="O" />
        </block>
        <block symbolname="or3" name="XLXI_26">
            <blockpin signalname="XLXN_20" name="I0" />
            <blockpin signalname="XLXN_19" name="I1" />
            <blockpin signalname="XLXN_18" name="I2" />
            <blockpin signalname="co" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_15">
            <blockpin signalname="a" name="I" />
            <blockpin signalname="XLXN_23" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_29">
            <blockpin signalname="XLXN_16" name="I0" />
            <blockpin signalname="b" name="I1" />
            <blockpin signalname="XLXN_23" name="I2" />
            <blockpin signalname="XLXN_5" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1184" y="1008" name="XLXI_5" orien="R0" />
        <branch name="XLXN_3">
            <wire x2="1184" y1="400" y2="400" x1="1072" />
            <wire x2="1184" y1="400" y2="752" x1="1184" />
        </branch>
        <branch name="XLXN_4">
            <wire x2="1072" y1="688" y2="816" x1="1072" />
            <wire x2="1184" y1="816" y2="816" x1="1072" />
        </branch>
        <branch name="XLXN_5">
            <wire x2="1072" y1="880" y2="1008" x1="1072" />
            <wire x2="1184" y1="880" y2="880" x1="1072" />
        </branch>
        <branch name="XLXN_6">
            <wire x2="1184" y1="1360" y2="1360" x1="1072" />
            <wire x2="1184" y1="944" y2="1360" x1="1184" />
        </branch>
        <branch name="b">
            <wire x2="320" y1="112" y2="400" x1="320" />
            <wire x2="320" y1="400" y2="688" x1="320" />
            <wire x2="320" y1="688" y2="1008" x1="320" />
            <wire x2="320" y1="1008" y2="1360" x1="320" />
            <wire x2="816" y1="1360" y2="1360" x1="320" />
            <wire x2="320" y1="1360" y2="2032" x1="320" />
            <wire x2="896" y1="2032" y2="2032" x1="320" />
            <wire x2="320" y1="2032" y2="2176" x1="320" />
            <wire x2="896" y1="2176" y2="2176" x1="320" />
            <wire x2="816" y1="1008" y2="1008" x1="320" />
            <wire x2="560" y1="688" y2="688" x1="320" />
            <wire x2="560" y1="400" y2="400" x1="320" />
        </branch>
        <branch name="ci">
            <wire x2="480" y1="112" y2="464" x1="480" />
            <wire x2="480" y1="464" y2="752" x1="480" />
            <wire x2="480" y1="752" y2="1072" x1="480" />
            <wire x2="480" y1="1072" y2="1424" x1="480" />
            <wire x2="816" y1="1424" y2="1424" x1="480" />
            <wire x2="480" y1="1424" y2="1840" x1="480" />
            <wire x2="896" y1="1840" y2="1840" x1="480" />
            <wire x2="480" y1="1840" y2="2240" x1="480" />
            <wire x2="896" y1="2240" y2="2240" x1="480" />
            <wire x2="560" y1="1072" y2="1072" x1="480" />
            <wire x2="560" y1="752" y2="752" x1="480" />
            <wire x2="816" y1="464" y2="464" x1="480" />
        </branch>
        <branch name="r">
            <wire x2="1456" y1="848" y2="848" x1="1440" />
        </branch>
        <branch name="a">
            <wire x2="160" y1="112" y2="336" x1="160" />
            <wire x2="160" y1="336" y2="624" x1="160" />
            <wire x2="160" y1="624" y2="944" x1="160" />
            <wire x2="160" y1="944" y2="1296" x1="160" />
            <wire x2="816" y1="1296" y2="1296" x1="160" />
            <wire x2="160" y1="1296" y2="1776" x1="160" />
            <wire x2="896" y1="1776" y2="1776" x1="160" />
            <wire x2="160" y1="1776" y2="1968" x1="160" />
            <wire x2="896" y1="1968" y2="1968" x1="160" />
            <wire x2="560" y1="944" y2="944" x1="160" />
            <wire x2="816" y1="624" y2="624" x1="160" />
            <wire x2="560" y1="336" y2="336" x1="160" />
        </branch>
        <instance x="560" y="368" name="XLXI_11" orien="R0" />
        <instance x="560" y="432" name="XLXI_12" orien="R0" />
        <instance x="560" y="720" name="XLXI_13" orien="R0" />
        <instance x="560" y="784" name="XLXI_14" orien="R0" />
        <instance x="560" y="1104" name="XLXI_16" orien="R0" />
        <branch name="XLXN_12">
            <wire x2="816" y1="400" y2="400" x1="784" />
        </branch>
        <branch name="XLXN_13">
            <wire x2="816" y1="336" y2="336" x1="784" />
        </branch>
        <instance x="816" y="528" name="XLXI_17" orien="R0" />
        <branch name="XLXN_14">
            <wire x2="816" y1="752" y2="752" x1="784" />
        </branch>
        <branch name="XLXN_15">
            <wire x2="816" y1="688" y2="688" x1="784" />
        </branch>
        <instance x="816" y="816" name="XLXI_18" orien="R0" />
        <branch name="XLXN_16">
            <wire x2="816" y1="1072" y2="1072" x1="784" />
        </branch>
        <instance x="816" y="1488" name="XLXI_21" orien="R0" />
        <instance x="896" y="1904" name="XLXI_23" orien="R0" />
        <instance x="896" y="2096" name="XLXI_24" orien="R0" />
        <instance x="896" y="2304" name="XLXI_25" orien="R0" />
        <instance x="1312" y="2128" name="XLXI_26" orien="R0" />
        <branch name="XLXN_18">
            <wire x2="1312" y1="1808" y2="1808" x1="1152" />
            <wire x2="1312" y1="1808" y2="1936" x1="1312" />
        </branch>
        <branch name="XLXN_19">
            <wire x2="1312" y1="2000" y2="2000" x1="1152" />
        </branch>
        <branch name="XLXN_20">
            <wire x2="1312" y1="2208" y2="2208" x1="1152" />
            <wire x2="1312" y1="2064" y2="2208" x1="1312" />
        </branch>
        <iomarker fontsize="28" x="160" y="112" name="a" orien="R270" />
        <iomarker fontsize="28" x="320" y="112" name="b" orien="R270" />
        <iomarker fontsize="28" x="480" y="112" name="ci" orien="R270" />
        <iomarker fontsize="28" x="1456" y="848" name="r" orien="R0" />
        <branch name="co">
            <wire x2="1600" y1="2000" y2="2000" x1="1568" />
        </branch>
        <iomarker fontsize="28" x="1600" y="2000" name="co" orien="R0" />
        <instance x="560" y="976" name="XLXI_15" orien="R0" />
        <instance x="816" y="1136" name="XLXI_29" orien="R0" />
        <branch name="XLXN_23">
            <wire x2="816" y1="944" y2="944" x1="784" />
        </branch>
    </sheet>
</drawing>