<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="a(3:0)" />
        <signal name="b(3:0)" />
        <signal name="a(0)" />
        <signal name="b(0)" />
        <signal name="a(1)" />
        <signal name="b(1)" />
        <signal name="a(2)" />
        <signal name="b(2)" />
        <signal name="a(3)" />
        <signal name="b(3)" />
        <signal name="ci" />
        <signal name="XLXN_17" />
        <signal name="XLXN_18" />
        <signal name="XLXN_19" />
        <signal name="XLXN_20" />
        <signal name="r(3:0)" />
        <signal name="r(0)" />
        <signal name="r(1)" />
        <signal name="r(2)" />
        <signal name="r(3)" />
        <signal name="zero" />
        <signal name="slt" />
        <signal name="op(2:0)" />
        <signal name="co" />
        <port polarity="Input" name="a(3:0)" />
        <port polarity="Input" name="b(3:0)" />
        <port polarity="Input" name="ci" />
        <port polarity="Output" name="r(3:0)" />
        <port polarity="Input" name="zero" />
        <port polarity="Output" name="slt" />
        <port polarity="Input" name="op(2:0)" />
        <port polarity="Output" name="co" />
        <blockdef name="alu1b">
            <timestamp>2017-3-15T20:11:15</timestamp>
            <rect width="256" x="64" y="-320" height="320" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <block symbolname="alu1b" name="XLXI_1">
            <blockpin signalname="a(0)" name="a" />
            <blockpin signalname="b(0)" name="b" />
            <blockpin signalname="ci" name="ci" />
            <blockpin signalname="XLXN_20" name="less" />
            <blockpin signalname="op(2:0)" name="op(2:0)" />
            <blockpin signalname="slt" name="set" />
            <blockpin signalname="XLXN_17" name="co" />
            <blockpin signalname="r(0)" name="r" />
        </block>
        <block symbolname="alu1b" name="XLXI_2">
            <blockpin signalname="a(1)" name="a" />
            <blockpin signalname="b(1)" name="b" />
            <blockpin signalname="XLXN_17" name="ci" />
            <blockpin signalname="zero" name="less" />
            <blockpin signalname="op(2:0)" name="op(2:0)" />
            <blockpin name="set" />
            <blockpin signalname="XLXN_18" name="co" />
            <blockpin signalname="r(1)" name="r" />
        </block>
        <block symbolname="alu1b" name="XLXI_3">
            <blockpin signalname="a(2)" name="a" />
            <blockpin signalname="b(2)" name="b" />
            <blockpin signalname="XLXN_18" name="ci" />
            <blockpin signalname="zero" name="less" />
            <blockpin signalname="op(2:0)" name="op(2:0)" />
            <blockpin name="set" />
            <blockpin signalname="XLXN_19" name="co" />
            <blockpin signalname="r(2)" name="r" />
        </block>
        <block symbolname="alu1b" name="XLXI_4">
            <blockpin signalname="a(3)" name="a" />
            <blockpin signalname="b(3)" name="b" />
            <blockpin signalname="XLXN_19" name="ci" />
            <blockpin signalname="zero" name="less" />
            <blockpin signalname="op(2:0)" name="op(2:0)" />
            <blockpin signalname="XLXN_20" name="set" />
            <blockpin signalname="co" name="co" />
            <blockpin signalname="r(3)" name="r" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1376" y="608" name="XLXI_1" orien="R0">
        </instance>
        <branch name="a(3:0)">
            <wire x2="464" y1="128" y2="128" x1="176" />
        </branch>
        <iomarker fontsize="28" x="176" y="128" name="a(3:0)" orien="R180" />
        <iomarker fontsize="28" x="176" y="208" name="b(3:0)" orien="R180" />
        <branch name="b(3:0)">
            <wire x2="464" y1="208" y2="208" x1="176" />
        </branch>
        <branch name="a(0)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1280" y="320" type="branch" />
            <wire x2="1376" y1="320" y2="320" x1="1280" />
        </branch>
        <branch name="b(0)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1280" y="384" type="branch" />
            <wire x2="1376" y1="384" y2="384" x1="1280" />
        </branch>
        <instance x="1376" y="1040" name="XLXI_2" orien="R0">
        </instance>
        <instance x="1376" y="1520" name="XLXI_3" orien="R0">
        </instance>
        <instance x="1376" y="2000" name="XLXI_4" orien="R0">
        </instance>
        <branch name="a(1)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1280" y="752" type="branch" />
            <wire x2="1376" y1="752" y2="752" x1="1280" />
        </branch>
        <branch name="b(1)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1280" y="816" type="branch" />
            <wire x2="1376" y1="816" y2="816" x1="1280" />
        </branch>
        <branch name="a(2)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1280" y="1232" type="branch" />
            <wire x2="1376" y1="1232" y2="1232" x1="1280" />
        </branch>
        <branch name="b(2)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1280" y="1296" type="branch" />
            <wire x2="1376" y1="1296" y2="1296" x1="1280" />
        </branch>
        <branch name="a(3)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1280" y="1712" type="branch" />
            <wire x2="1376" y1="1712" y2="1712" x1="1280" />
        </branch>
        <branch name="b(3)">
            <attrtext style="alignment:SOFT-RIGHT;fontsize:28;fontname:Arial" attrname="Name" x="1280" y="1776" type="branch" />
            <wire x2="1376" y1="1776" y2="1776" x1="1280" />
        </branch>
        <branch name="ci">
            <wire x2="1376" y1="448" y2="448" x1="1184" />
        </branch>
        <iomarker fontsize="28" x="1184" y="448" name="ci" orien="R180" />
        <branch name="XLXN_17">
            <wire x2="1312" y1="656" y2="880" x1="1312" />
            <wire x2="1376" y1="880" y2="880" x1="1312" />
            <wire x2="1840" y1="656" y2="656" x1="1312" />
            <wire x2="1840" y1="448" y2="448" x1="1760" />
            <wire x2="1840" y1="448" y2="656" x1="1840" />
        </branch>
        <branch name="XLXN_18">
            <wire x2="1312" y1="1136" y2="1360" x1="1312" />
            <wire x2="1376" y1="1360" y2="1360" x1="1312" />
            <wire x2="1840" y1="1136" y2="1136" x1="1312" />
            <wire x2="1840" y1="880" y2="880" x1="1760" />
            <wire x2="1840" y1="880" y2="1136" x1="1840" />
        </branch>
        <branch name="XLXN_19">
            <wire x2="1376" y1="1840" y2="1840" x1="1312" />
            <wire x2="1312" y1="1840" y2="2064" x1="1312" />
            <wire x2="1840" y1="2064" y2="2064" x1="1312" />
            <wire x2="1840" y1="1360" y2="1360" x1="1760" />
            <wire x2="1840" y1="1360" y2="2064" x1="1840" />
        </branch>
        <branch name="XLXN_20">
            <wire x2="1312" y1="224" y2="512" x1="1312" />
            <wire x2="1376" y1="512" y2="512" x1="1312" />
            <wire x2="1824" y1="224" y2="224" x1="1312" />
            <wire x2="1824" y1="224" y2="1712" x1="1824" />
            <wire x2="1824" y1="1712" y2="1712" x1="1760" />
        </branch>
        <branch name="r(3:0)">
            <wire x2="400" y1="400" y2="400" x1="80" />
        </branch>
        <iomarker fontsize="28" x="400" y="400" name="r(3:0)" orien="R0" />
        <branch name="r(0)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="2144" y="576" type="branch" />
            <wire x2="2144" y1="576" y2="576" x1="1760" />
        </branch>
        <branch name="r(1)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="2160" y="1008" type="branch" />
            <wire x2="2160" y1="1008" y2="1008" x1="1760" />
        </branch>
        <branch name="r(2)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="2160" y="1488" type="branch" />
            <wire x2="2160" y1="1488" y2="1488" x1="1760" />
        </branch>
        <branch name="r(3)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="2160" y="1968" type="branch" />
            <wire x2="2160" y1="1968" y2="1968" x1="1760" />
        </branch>
        <branch name="zero">
            <wire x2="384" y1="944" y2="944" x1="320" />
            <wire x2="1328" y1="944" y2="944" x1="384" />
            <wire x2="1376" y1="944" y2="944" x1="1328" />
            <wire x2="384" y1="944" y2="1424" x1="384" />
            <wire x2="1376" y1="1424" y2="1424" x1="384" />
            <wire x2="384" y1="1424" y2="1904" x1="384" />
            <wire x2="1376" y1="1904" y2="1904" x1="384" />
        </branch>
        <branch name="slt">
            <wire x2="2000" y1="320" y2="320" x1="1760" />
        </branch>
        <iomarker fontsize="28" x="2000" y="320" name="slt" orien="R0" />
        <branch name="op(2:0)">
            <wire x2="608" y1="320" y2="320" x1="480" />
            <wire x2="608" y1="320" y2="576" x1="608" />
            <wire x2="608" y1="576" y2="1008" x1="608" />
            <wire x2="1376" y1="1008" y2="1008" x1="608" />
            <wire x2="608" y1="1008" y2="1488" x1="608" />
            <wire x2="1376" y1="1488" y2="1488" x1="608" />
            <wire x2="608" y1="1488" y2="1968" x1="608" />
            <wire x2="1376" y1="1968" y2="1968" x1="608" />
            <wire x2="1376" y1="576" y2="576" x1="608" />
        </branch>
        <iomarker fontsize="28" x="480" y="320" name="op(2:0)" orien="R180" />
        <iomarker fontsize="28" x="320" y="944" name="zero" orien="R180" />
        <branch name="co">
            <wire x2="1792" y1="1840" y2="1840" x1="1760" />
            <wire x2="2000" y1="1840" y2="1840" x1="1792" />
        </branch>
        <iomarker fontsize="28" x="2000" y="1840" name="co" orien="R0" />
    </sheet>
</drawing>