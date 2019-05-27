<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="X-UA-Compatible" content="IE=EmulateIE7" />
<meta http-equiv="Content-Type" content="text/html; charset=GB2312" />
<title>ServerSocket.h_TCP UDP高级编程：一个VC++服务端程序_网络编程_新兴源码下载</title>
<link href="/skins/NewXing/style.css" type="text/css" rel="stylesheet"/>
<link href="/js/NewXing.css" type="text/css" rel="stylesheet"/>
<script src="/js/main.js" type="text/javascript"></script>
<script type="text/javascript">
function drop_mouseout(pos){var posSel=$(pos+"Sel").style.display;if(posSel=="block"){timer = setTimeout("drop_hide('"+pos+"')", 1000);}}
function drop_hide(pos){
$(pos+"Sel").style.display="none";}
function drop_mouseover(pos){try{window.clearTimeout(timer);}catch(e){}}
function search_channel(pos,st,href){var frm = document.searchform;frm.m.value=st;
    $(pos+"Sel").style.display="none";
	$("btnsearch1").title=href.innerHTML;try{window.clearTimeout(timer);}catch(e){}return false;}
</script>
</head><body>
<div class="headertop">
	<div id="hd_strapleft"><a href="/users/login.asp">用户登录</a> &nbsp;|&nbsp; <img src="/skins/NewXing/hd_arrowDown.gif" height="7" width="5" alt="" /> <a href="/users/reg.asp" target="_blank">用户注册</a></div>
	<div id="hd_strapright"><a href="/">首 页</a> ┆
		<a href="/Code/" title="源码下载">源码下载</a> ┆
		<a href="/Tech/" title="网络学院">网络学院</a> ┆
		<a href="/Code/List/newlist-1.html" title="最近更新">最新源码</a> ┆
		<a href="/Code/List/hotlist-1.html" title="源码排行">源码排行</a> ┆
		<a href="Javascript:" title="屏蔽所有广告" id="showAD">屏蔽广告</a></div>
</div>
<div class="headerbox"><div class="header"><div class="logo"><a href="/"><img src="/skins/NewXing/logo.gif" border="0" alt="" /></a></div><div class="banner" id="banner"><script language="javascript" src="/script/headAll.js"></script></div></div><div style="clear:both"></div><div id="menubox"><div class="navtabs"><ul><li><a href="/" target="_top">首 页</a></li>
<li><a href="/Code/Asp/">ASP源码</a></li>
<li><a href="/Code/PHP/">PHP源码</a></li>
<li><a href="/Code/DotNet/">Asp.Net源码</a></li>
<li><a href="/Code/JSP/">JSP源码</a></li>
<li><a href="/Code/VB/">VB源码</a></li>
<li><a href="/Code/Delphi/">Delphi源码</a></li>
<li class="current"><a href="/Code/VC/">VC/C++</a></li>
<li><a href="/Code/Java/">Java源码</a></li>
<li><a href="/Code/CSharp/">C#源码</a></li>
<li><a href="/Code/Flash/">Flash源码</a></li>
<li><a href="/Code/Book/">电子书籍</a></li>
</ul></div></div><div id="navbot"><div class="searchbox"><form name="searchform" method="get" action="/search.asp"><input type="hidden" name="m" value="2" /><input type="hidden" name="s" value="0" /><ul class="searchform"><li><input id="searchwordbox" name="word" maxlength="100" type="text" class="text" value="输入关键词搜索..." onfocus="this.value='';this.style.color='#333';" /><div id="sugAutoComplete" onselectstart="return false">&nbsp;</div></li><li><p><input class="btnsearch" id="btnsearch1" title="搜索" type="image" src="/skins/NewXing/icons/btn_search.gif" /><span id="headSlected" onclick="if(document.getElementById('headSel').style.display=='none'){document.getElementById('headSel').style.display='block';}else {document.getElementById('headSel').style.display='none';};return false;" onmouseout="drop_mouseout('head');"><img alt="" src="/skins/NewXing/icons/drop_down_button.gif" border="0" /></span></p><ul class="droplist" id="headSel" style="display:none;"><li><a href="javascript:" onClick="return search_channel('head',2,this)" onMouseOver="drop_mouseover('head');" onMouseOut="drop_mouseout('head');">源码搜索</a></li><li><a href="javascript:" onClick="return search_channel('head',1,this)" onMouseOver="drop_mouseover('head');" onMouseOut="drop_mouseout('head');">教程搜索</a></li></ul></li><li class="tagstrap"><b>热门标签：</b><a href="/Code/tag.asp?name=VB" target="_blank" title="VB">VB(884)</a>&nbsp;&nbsp;<a href="/Code/tag.asp?name=VC" target="_blank" title="VC">VC(508)</a>&nbsp;&nbsp;<a href="/Code/tag.asp?name=VC%2B%2B" target="_blank" title="VC++">VC++(159)</a>&nbsp;&nbsp;<a href="/Code/tag.asp?name=C%23" target="_blank" title="C#">C#(135)</a>&nbsp;&nbsp;<a href="/Code/tag.asp?name=Delphi" target="_blank" title="Delphi">Delphi(119)</a>&nbsp;&nbsp;<a href="/Code/tag.asp?name=%B9%DC%C0%ED%CF%B5%CD%B3" target="_blank" title="管理系统">管理系统(116)</a>
</li></ul></form></div><div style="clear:both"></div></div><div class="topadbox"><script language="javascript" src="/script/top.js"></script></div></div>
<script type="text/javascript">var oQueryKeyword=document.getElementById("searchwordbox");var searchInstallDir='/';var oSearchForm = document.searchform;var dataQueryParam = "&channelid=0&l=32";if (navigator.cookieEnabled && !/sugAutoComplete=0/.test(document.cookie)) {document.getElementById('searchwordbox').setAttribute('autocomplete', 'off');
document.write('<s'+'cript src="/js/searchsug.js"><\/s'+'cript>'); (function initAutoQuery() {if (!window.newasp) {setTimeout(initAutoQuery, 10);} else {window.newasp.init()}})()}window.onunload = function() {};</script>
<div id="pageMain">
	<div class="crumb"><span class="crumbleft"><b>当前位置：</b><a href="/">新兴网络</a> > <a href="/Code/">源码下载</a> > <a href="/Code/VC/">VC/C++</a> > <a href="/Code/VC/Network/">网络编程</a> > <a href="/Code/VC/Network/4187.html">TCP UDP高级编程：一个VC++服务端程序</a> > <span id="rarfilename">ServerSocket.h</span></span></div>
</div>
<div style="padding:10px 5px;margin-top:0px;background:#fff;width:960px;" align="center">
<script src="/script/RAR1.js"></script>
<div id="rarlist"><span id="resize"></span><ul id="rarbox"><h4>TCP UDP高级编程：一个VC++服务端程序.rar</h4><ul id="rarmain"><p>res</p><ul><li><A href="/D120DE4E44187/ServerSocket.ico">ServerSocket.ico</A></li><li><A href="/S19F330904187/ServerSocket.rc2">ServerSocket.rc2</A></li></ul><li><A href="/SB8E112A84187/ReadMe.txt">ReadMe.txt</A></li><li><A href="/S21C271FD4187/ClientSocketDlg.h">ClientSocketDlg.h</A></li><li><A href="/SB2126B8C4187/Resource.h">Resource.h</A></li><li><A href="/S59CDA3884187/ServerSocket.h">ServerSocket.h</A></li><li><A href="/S2D902D6B4187/ServerSocketDlg.h">ServerSocketDlg.h</A></li><li><A href="/SCAEC09424187/SocketComm.h">SocketComm.h</A></li><li><A href="/S8205B12E4187/SocketManager.h">SocketManager.h</A></li><li><A href="/S6E9E81F04187/StdAfx.h">StdAfx.h</A></li><li><A href="/SA2643C9F4187/ClientSocketDlg.cpp">ClientSocketDlg.cpp</A></li><li><A href="/SC18DBEA74187/ServerSocket.cpp">ServerSocket.cpp</A></li><li><A href="/S93204C404187/ServerSocketDlg.cpp">ServerSocketDlg.cpp</A></li><li><A href="/S876544EE4187/SocketComm.cpp">SocketComm.cpp</A></li><li><A href="/S9FDBDD9D4187/SocketManager.cpp">SocketManager.cpp</A></li><li><A href="/S3D5561144187/StdAfx.cpp">StdAfx.cpp</A></li><li><A href="/D2CCD89434187/ServerSocket.aps">ServerSocket.aps</A></li><li><A href="/S24F7D97B4187/ServerSocket.dsp">ServerSocket.dsp</A></li><li><A href="/S45844E434187/ServerSocket.dsw">ServerSocket.dsw</A></li><li><A href="/S464237B04187/ServerSocket.rc">ServerSocket.rc</A></li></ul></ul></div>
 <DL class="RARcode" style="text-align:left;"><DT><SPAN style="float:left">loading...</SPAN><SPAN class="c_right"><a href='#' onclick="return copyCode(this);">复制代码</a></SPAN><DD>
<pre id="NewXing_code">//Download by http://www.NewXing.com
// ServerSocket.h : main header file for the SERVERSOCKET application
//

#if !defined(AFX_SERVERSOCKET_H__BFD2712F_6DB3_4E82_9FC7_ABEB33496E09__INCLUDED_)
#define AFX_SERVERSOCKET_H__BFD2712F_6DB3_4E82_9FC7_ABEB33496E09__INCLUDED_

#if _MSC_VER &gt; 1000
#pragma once
#endif // _MSC_VER &gt; 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CServerSocketApp:
// See ServerSocket.cpp for the implementation of this class
//

class CServerSocketApp : public CWinApp
{
public:
	CServerSocketApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CServerSocketApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CServerSocketApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
protected:
	int  m_nLinkMode;
	void ParseCommandLineArgs();
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERVERSOCKET_H__BFD2712F_6DB3_4E82_9FC7_ABEB33496E09__INCLUDED_)
</PRE></DD></DL>
<script src="/script/RAR2.js"></script>
<br class="clear"/>
</div>
<script type="text/javascript" src="/js/Highlighter.js" charset="gb2312"></script>
<div style="clear:both"></div><div class="bottom"><div class="bottomArea"><span></span><div class="bottomText"><a href="/support/about.asp">关于本站</a> | <a href="/support/help.asp">网站帮助</a> | <a href="/support/advertise.asp">广告合作</a> | <a href="/support/declare.asp">下载声明</a> | <a href="/link/" target="_blank">友情连接</a> | <a href="/sitemap.html">网站地图</a> | <a href="http://www.miibeian.gov.cn/" target="_blank">粤ICP备10045437号</a><br/>Copyright &copy; 2009-2010 <a href="http://www.newxing.com" target="_blank"><font face="Verdana, Arial, Helvetica, sans-serif"><b>NewXing<font color="#CC0000">.Com</font></b></font></a>. All Rights Reserved .<br/></div><div class="bottomLogo"></div><span style="display:none"><script src="/js/footer.js" type="text/javascript"></script></span></div><div class="bottom2"></div></div></body></html><script src="/count.asp?cid=11" type="text/javascript"></script>