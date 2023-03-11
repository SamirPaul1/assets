var editor_theme = "vibrant_ink";
var editor_font_size = 14;
var editor_invisible = false;
var editor_gutter = true;
var editor_tab_size = 4;
var editor_type = "null";
var editor_soft_wrap = "true";
var terminal_mode = 'V';
var isMobile = false;
var SERVER = "https://www.tutorialspoint.com/cg";
var $win = null;
var userid = null;
var username = null;
var preview = false;
var compile = true;
var execute = false;
var timer = 0;
var socket;

if(  langid === "angularjs" || langid === "p5js" || langid === "vuejs"){
   preview = false;
   compile = false;
   execute = true;
}else if( modename === "html" || modename === "css" ){
   preview = true;
   compile = false;
   execute = false;
} else if( modename === "coffee" || modename === "typescript" || modename === "asciidoc" ||  modename === "rhtml" ||  modename === "markdown" ||  modename === "mathml"){
   preview = false;
   compile = false;
   execute = true;
}
$.ajax({
    type: "GET",
    crossDomain: true,
    xhrFields: {
        withCredentials: true
    },
    url: SERVER + "/set_auth_code.php",
    dataType: 'json',
    success: function(data) {
        if( data.userid > 0){
             userid = data.userid;
	     username = data.username;
             $("#save").css({ "display": "block" });
             $("#login").css({ "display": "none" });
             $("#logout").css({ "display": "block" });
             $("#searchproject").css({ "display": "block" });
             $("#logout .l-btn-text").html(username);
        }
    }
});
var link = $('head').find('link:first');
window.onbeforeunload = function(){
   return "Leaving this page may cause loss of your code!";
};
window.beforeunload = function(){
   return "Leaving this page may cause loss of your code!";
};

var editor = ace.edit("editor");
editor.setTheme("ace/theme/" + editor_theme);
editor.getSession().setMode("ace/mode/" + modename);
editor.getSession().on('change', function() {
   editor.resize(true);
});
editor.setOptions({
     tabSize: "4",
     fontSize : "14px",
     showGutter : true,
     highlightActiveLine : true,
     wrap : true,
     useWorker : false,
     overwrite : false,
     tooltipFollowsMouse : false,
     dragEnabled : false,
     showPrintMargin : false,
     useSoftTabs: true
});
editor.container.style.lineHeight = "22px";

var terminal = ace.edit("terminal");
terminal.setTheme("ace/theme/" + editor_theme);
terminal.getSession().setMode("ace/mode/text");
terminal.getSession().on('change', function() {
   terminal.resize(true);
});
terminal.setOptions({
     fontSize : "14px",
     showGutter : false,
     highlightActiveLine : false,
     behavioursEnabled : false,
     wrapBehavioursEnabled : false,
     wrap : true,
     useWorker : true,
     overwrite : false,
     dragEnabled : false,
     cursorStyle : "slim",
     showPrintMargin : true,
     useSoftTabs: true
});
terminal.setOption("showInvisibles", false);
terminal.renderer.setPadding(10);
terminal.renderer.setScrollMargin(5);
terminal.container.style.lineHeight = "22px";
terminal.getSession().on('change', () => {
   terminal.renderer.scrollToLine(Number.POSITIVE_INFINITY)
})

editor.renderer.setScrollMargin(5);

editor.focus();
editor.navigateFileEnd();
var result = "";
var cmd = "";
$("#result").hide();
$("#loading").css({ "visibility": "visible" });
$( document ).ready(function() {
if( langid.indexOf( "term" ) != -1 ){
   $("#cc").layout("remove", "west");
}
$("#cc").css({ "visibility": "visible" });
terminal.commands.addCommand({
   name : "TerminalEnter",
   bindKey : {
     win : "Enter",
     mac : "Enter"
   },
   exec : function evaluate() {
      $("#execute").linkbutton('disable');
      cmd = terminal.getValue().slice(result.length);
      if( cmd === "clear"){
	 terminal.setValue("", 1);
         $("#execute").linkbutton('enable');
	 return;
      }
      if( !socket.connected ){
         /* If socket is disocnnected then connect it again */
         console.log("Going to reconnect");
         socket.connect();
         timer = 0;
      }
      socket.emit("command", cmd);
      return false;
   }
});
editor.commands.on('afterExec', eventData => {
   if( preview ){
       var iframe = document.getElementById("result");
       var frameDoc = iframe.document;
       if (iframe.contentWindow){
           frameDoc = iframe.contentWindow.document;
       }
       frameDoc.open();
       frameDoc.write(editor.getValue());
       frameDoc.close();
       return;
   }
});

if( compile ){
    var server = "https://tpcg1.tutorialspoint.com";
    if( langid == "c" || langid == "cpp" || langid == "c99" || langid == "cpp0x" || langid == "cpp11" || langid == "objc" || langid == "swift" || langid == "ada" || langid == "algol" || langid == "asm" || langid == "awk" || langid == "bash" || langid == "befunge" || langid == "brainfuck" || langid == "fbc" || langid == "csharp" || langid == "fsharp" || langid == "vb.net" || langid == "ilasm" || langid == "elixir" || langid == "basic" || langid == "cobol" || langid == "cbasic" || langid == "yasm" || langid == "fortran" || langid == "erlang" || langid == "factor"){
        server = "https://tpcg2.tutorialspoint.com";
    }else if( langid === "javascript" || langid === "java" || langid === "rexx" || langid === "clojure" || langid === "fantom" || langid === "golang" || langid === "groovy" || langid === "haxe" || langid === "haskell" || langid === "dart" || langid === "d" || langid === "julia" || langid === "scala"){
         server = "https://tpcg4.tutorialspoint.com";
    }else if( langid === "perl" || langid === "ruby" || langid === "rubyterm" || langid  === "matplotlib" || langid === "numpyterm"  || langid === "scipyterm" || langid === "scipy" || langid === "numpy" || langid === "python3"  || langid === "python" || langid  === "rscript" || langid === "octave" || langid === "octaveterm" || langid === "rterm" || langid === "nodejsterm" || langid === "unixterm" || langid === "python3term" || langid == "pashterm" ||  langid == "lua" ||  langid == "luaterm" || langid == "forth" || langid === "jython" || langid === "java8" || langid == "kotlin" || langid === "ksh" || langid === "tcl" || langid === "lisp" || langid === "icon" || langid === "intercal" || langid === "sqlite"){
         server = "https://tpcg3.tutorialspoint.com";
    }
    if( langid == "php" ||  langid == "ruby" || langid == "lolcode" || langid == "malbolge" || langid == "mozart" || langid == "nimrod" || langid == "ocaml" || langid == "pari" || langid == "pike" || langid == "prolog" || langid == "rust" || langid == "scheme" || langid == "simula" || langid == "smalltalk" || langid == "smlnj" || langid == "unlambda" || langid == "verilog" || langid == "wspace" || langid == "phpweb")    {
         server = "https://tpcg1.tutorialspoint.com";
    }
    socket = io.connect( server + '/' + '?sessionId=' + sessionId + '&lang='+langid, {
        transports : ["websocket"]
    });
    var interval = window.setInterval(function(){
        timer++;
        if( timer > 10 && socket.connected ){
            console.log("Going to disconnect socket ");
            // terminal.setValue("Session timeout, please refresh the page", 1);
            socket.disconnect();
            timer = 0;
            // clearInterval(interval);
        }
    }, 1000 );
    socket.on('connect_error', function(error){
        $("#execute").linkbutton('disable');
        $("#share").linkbutton('disable');
        terminal.setValue("Error while connecting with the server", 1);
    });

    socket.on('connect', function(error){
        $("#execute").linkbutton('enable');
        $("#share").linkbutton('enable');
	//terminal.setValue("", 1);
        editor.focus();
        if ( langid === "unixterm" ){
            terminal.focus();
            socket.emit("command", 'export "PS1=$ "');
        }else if ( langid === "rterm" ){
            terminal.focus();
            socket.emit("command", 'export "PS1=$ "');
            socket.emit("command", 'R');
        }else if ( langid === "nodejsterm" ){
            terminal.focus();
            socket.emit("command", 'export "PS1=$ "');
            socket.emit("command", 'node');
        }else if ( langid === "rubyterm" ){
            terminal.focus();
            socket.emit("command", 'export "PS1=$ "');
            socket.emit("command", 'irb');
        }else if ( langid === "luaterm" ){
            terminal.focus();
            socket.emit("command", 'export "PS1=$ "');
            socket.emit("command", 'lua');
        }else if ( langid === "phpterm" ){
            terminal.focus();
            socket.emit("command", 'export "PS1=$ "');
            socket.emit("command", 'php -a');
        }else if ( langid === "python3term" ){
            terminal.focus();
            socket.emit("command", 'export "PS1=$ "');
            socket.emit("command", 'python3');
        }else if ( langid === "numpyterm" ){
            terminal.focus();
            socket.emit("command", 'export "PS1=$ "');
            socket.emit("command", 'python3');
        }else if ( langid === "scipyterm" ){
            terminal.focus();
            socket.emit("command", 'export "PS1=$ "');
            socket.emit("command", 'python3');
        }else if ( langid === "pashterm" ){
            terminal.focus();
            socket.emit("command", 'export "PS1=$ "');
            socket.emit("command", 'pwsh');
        }else if ( langid === "octaveterm" ){
            terminal.focus();
            socket.emit("command", 'export "PS1=$ "');
            socket.emit("command", 'octave');
        }
    });
    // Wait for data from the server
    socket.on('output', function (data) {
        $("#execute").linkbutton('enable');
        if( langid  === "rscript" ||  langid  === "matplotlib" || langid === "octave" || langid === "phpweb" ){
            var $iframe = $('#result');
            $iframe.ready(function() {
                 $iframe.contents().find("body").append('<pre>' + data + '</pre>');
            });
            $("#loading").css({ "visibility": "hidden" });
            return;
        }
        if( cmd.length > 0) {
            if (data.startsWith(cmd)) {
	      data = data.slice(cmd.length);
	    }
        }
        // Reset timer
        timer = 0;
        data = data.trimLeft();
        var value  = terminal.getValue() + data;
        terminal.setValue(value, 1);
        cmd = "";
        result = terminal.getValue();
        if( isMobile && langid.indexOf( "term" ) == -1 ){
            $('#codebox').tabs('select', 1);
        }
        $("#loading").css({ "visibility": "hidden" });
    });
}
$("#execute").click( function(){
    if( !execute && !preview && !socket.connected ){
        /* If socket is disocnnected then connect it again */
        console.log("Going to reconnect");
        socket.connect();
        timer = 0;
    }
    $('#codebox').tabs('select', 0);
    $("#loading").css({ "visibility": "visible" });
    terminal.setValue("", 1);
    if( langid === "angularjs" || langid  === "rscript" ||  langid  === "phpweb" || langid  === "matplotlib" || langid === "octave"){
        var $iframe = $('#result');
        $iframe.ready(function() {
             $iframe.contents().find("body").html("");
        });
    }
    if( isMobile && langid.indexOf( "term" ) == -1 ){
        $('#codebox').tabs('close', 2);
        $("#share").show();
    }else if( langid.indexOf( "term" ) == -1 ){
        $("#cc").layout('expand', 'east');
        $("#cc").layout('panel', 'center').panel('resize', { width:'45%'});
        $("#cc").layout('panel', 'west').panel('resize', { width:'45%'});
    }
    $("#cc").layout('resize');
    var code = editor.getValue();

    if( preview ){
        /*
        var $iframe = $('#result');
        $iframe.ready(function() {
             $iframe.contents().find("body").html(editor.getValue());
        });
	*/
        var iframe = document.getElementById("result");
        var frameDoc = iframe.document;
        if (iframe.contentWindow){
           frameDoc = iframe.contentWindow.document;
        }
        frameDoc.open();
        frameDoc.write(editor.getValue());
        frameDoc.close();
        $("#loading").css({ "visibility": "hidden" });
        if( isMobile && langid.indexOf( "term" ) == -1 ){
            $('#codebox').tabs('select', 1);
        }
        return;
    }else if( execute ){
        $("#loading").css({ "visibility": "hidden" });
	var url = "https://tools.tutorialspoint.com/webview.php";
	var inputs = {'code':code, 'lang':langid}; 
        $.ajax({
           type: "POST",
           cache: false,
           data: inputs,
           crossDomain: true,
           url: url,
           success:function(data) {
               $("#loading").css({ "visibility": "hidden" });
	       /*
               var $iframe = $('#result');
               $iframe.ready(function() {
                    $iframe.contents().find("body").html(data);
               });
	       */
	       var iframe = document.getElementById("result");
               var frameDoc = iframe.document;
               if (iframe.contentWindow){
                  frameDoc = iframe.contentWindow.document;
               }
               frameDoc.open();
               frameDoc.write(data);
               frameDoc.close();
               return;
           },
           error:function (data, status, error) {
              alert(data);
              alert(error);
              return;
           }
       });
       if( isMobile && langid.indexOf( "term" ) == -1 ){
           $('#codebox').tabs('select', 1);
       }
       return;
    }
    socket.emit("code", {code:code, language:langid, sessionId:sessionId});
    if( !isMobile ){
        editor.focus();
    }
});
$("#beautify").bind("click", function(){
    beautifyCode();
});
editor.commands.addCommand({
   name: "EditorEnter",
   bindKey: {win: "ctrl+enter", mac: "command+enter"},
   exec: function(editor) {
       $("#loading").css({ "visibility": "visible" });
       $('#codebox').tabs('select', 0);

       if( !isMobile ){
           $("#cc").layout('expand', 'east');
           $("#cc").layout('panel', 'center').panel('resize', { width:'45%'});
           $("#cc").layout('panel', 'west').panel('resize', { width:'45%'});
           $("#cc").layout('resize');
       }
       var code = editor.getValue();
       if( !socket.connected ){
           /* If socket is disocnnected then connect it again */
           console.log("Going to reconnect");
           socket.connect();
           timer = 0;
       }
       socket.emit("code", {code:code, language:langid, sessionId:sessionId});	    
   }
});
editor.commands.addCommand({
   name: "ShareKey",
   bindKey: {win: "ctrl+G", mac: "command+G"},
   exec: function(editor) {
       $('#codebox').tabs('select', 0);
       if( !isMobile ){
           $("#cc").layout('expand', 'east');
           $("#cc").layout('panel', 'center').panel('resize', { width:'45%'});
           $("#cc").layout('panel', 'west').panel('resize', { width:'45%'});
           $("#cc").layout('resize');
       }
       generateShareLink();
   }
});
if( /Android|webOS|iPhone|iPad|iPod|BlackBerry|IEMobile|Opera Mini/i.test(navigator.userAgent) ) {
    isMobile = true;
}
if( isMobile ){
    $("#logo").attr("src", "/images/diamond_logo.png");
    $("#logo").css("width", "50px");
    $("#logo").css("padding-right", "5px");
    $("#help").css("padding", "0px");
    $("#main-title").css("font-size", "13px");
    $("#main-menu").css("width", "145px");
    $("#edit-title").hide();
    $("#setting").hide();
    $("#edit").hide();
    $("#beautify").hide();
    $("#space2").hide();
    $(".icon-h-terminal").hide();
    $(".login-cover").css("width", "100%");
    if( langid.indexOf( "term" ) != -1 ){
       $("#cc").layout('panel', 'east').panel('destroy');
       $("#cc").layout('panel', 'east').panel({ collapsible: false, noheader: true, width:"1px" });
       $("#cc").layout('panel', 'south').panel({ collapsible: false, noheader: true, height:"1px" });
       $("#cc").layout('panel', 'center').panel('resize', { width:'100%'});
    }else{	     
        var tab = $('#codebox').tabs('getTab', 1);
        $('#codebox').tabs('update', {
            tab:tab,
            type: 'all',
            options:{
               title: 'Output',
               iconCls:''
            }
       });
       setTimeout(function() {
            $('#codebox').tabs('select', 1);
            $('#codebox').tabs('select', 0);
       }, 1000);
       $("#help").html("");
       $("#accordion").appendTo("#help");
       $("#cc").layout('unsplit', 'west');
       $("#cc").layout('panel', 'east').panel('destroy');
       $("#cc").layout('panel', 'east').panel({ collapsible: false, noheader: true, width:"1px" });
       $("#cc").layout('panel', 'south').panel({ collapsible: false, noheader: true, height:"1px" });
       $("#cc").layout('panel', 'center').panel({ collapsible: false, noheader: true, width:"1px" });
       $("#cc").layout('panel', 'center').panel('resize', { width:'0%'});
       $("#cc").layout('panel', 'west').panel('resize', { width:'100%'});
    }
    $("#cc").layout('resize');
    $("#loading").css({ "visibility": "hidden" });
}
    // Edit functionlaity starts here
    $("#undo").bind("click touchstart", function(){
        // Get active tab.
        var tab = $('#codebox').tabs('getSelected');
        var tabid = tab.panel('options').id;
        if (editor.getSession().getUndoManager().hasUndo()) {
            editor.getSession().getUndoManager().undo(false);
        }
    });
    $("#redo").bind("click touchstart", function(){
        // Get active tab.
        var tab = $('#codebox').tabs('getSelected');
        var tabid = tab.panel('options').id;
        if (editor.getSession().getUndoManager().hasRedo()) {
            editor.getSession().getUndoManager().redo(false);
        }
    });
    var clipboard;
    $("#cut").bind("click touchstart", function(){
        // Get active tab.
        var tab = $('#codebox').tabs('getSelected');
        var tabid = tab.panel('options').id;
        var selectedRange = editor.getSelectionRange();
        if (editor.getSession().getTextRange(selectedRange)) {
            clipboard = editor.getSession().getTextRange(selectedRange);
            editor.getSession().remove(selectedRange);
        }
    });
    $("#delete").bind("click touchstart", function(){
        // Get active tab.
        var tab = $('#codebox').tabs('getSelected');
        var tabid = tab.panel('options').id;
        var selectedRange = editor.getSelectionRange();
        if (editor.getSession().getTextRange(selectedRange)) {
            editor.getSession().remove(selectedRange);
        }
    });
    $("#copy").bind("click touchstart", function(){
        // Get active tab.
        var tab = $('#codebox').tabs('getSelected');
        var tabid = tab.panel('options').id;
        var selectedRange = editor.getSelectionRange();
        if (editor.getSession().getTextRange(selectedRange)) {
            clipboard = editor.getSession().getTextRange(selectedRange);
        }
    });
    $("#paste").bind("click touchstart", function(){
        // Get active tab.
        var tab = $('#codebox').tabs('getSelected');
        var tabid = tab.panel('options').id;
        var position = editor.getCursorPosition();
        editor.getSession().insert(position, clipboard);
    });
    $("#select").bind("click touchstart", function(){
        // Get active tab.
        var tab = $('#codebox').tabs('getSelected');
        var tabid = tab.panel('options').id;
        editor.getSelection().selectAll();
    });
    $("#find").bind("click touchstart", function(){
        // Get active tab.
        var tab = $('#codebox').tabs('getSelected');
        var tabid = tab.panel('options').id;
        editor.execCommand("find");
    });
    $("#findreplace").bind("click touchstart", function(){
        // Get active tab.
        var tab = $('#codebox').tabs('getSelected');
        var tabid = tab.panel('options').id;
        editor.execCommand("replace");
    });
    $("#loading").css({ "visibility": "hidden" });
    $(window).bind('keydown', function(event) {
       if (event.ctrlKey || event.metaKey) {
          switch (String.fromCharCode(event.which).toLowerCase()) {
          case 'd':
             event.preventDefault();
             alert('ctrl-D');
             break;
          case 's':
             event.preventDefault();
             saveProject();
             break;
          case 'g':
             event.preventDefault();
             generateShareLink();
             break;
          case 'p':
    	     createProject();
             event.preventDefault();
             event.stopPropagation();
             break;
          case 'f':
             event.preventDefault();
             alert('ctrl-F');
            break;
          }
       }
    });
    if( preview || langid === "rscript" || langid === "phpweb" || langid === "matplotlib" || langid === "octave"){
        $('#terminal').hide();
        $("#result").show();
        $("#execute").linkbutton({text:"&nbsp;<b>Preview</b>"});
        $("#cc").layout('panel', 'center').panel("setTitle", "Result");
	/*
        if( !isMobile ){
            $("#execute").click();
        }
	*/
    }else if( execute ){
        $('#terminal').hide();
        $("#result").show();
        $("#cc").layout('panel', 'center').panel("setTitle", "Result");
        //$("#execute").click();
    }
});
function clearTerminal(){
    terminal.setValue("", 1);
    result = "";
    return;
}
function getUniqueId() {
     var id           = '';
     var characters       = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789';
     var charactersLength = characters.length;
     for ( var i = 0; i < 10; i++ ) {
       id += characters.charAt(Math.floor(Math.random() * charactersLength));
    }
    return id;
}
function setEditorTheme(theme) {
    editor_theme = theme;
    editor.setTheme("ace/theme/" + editor_theme);
    terminal.setTheme("ace/theme/" + editor_theme);
    localStorage.editor_theme = editor_theme;
}
if( localStorage.editor_theme ){
    setEditorTheme( localStorage.editor_theme );
}
function beautifyCode(){
    var code = editor.getValue();

    var inputs = {"code": code, "langid": langid };
    $.ajax({
      url: "https://tools.tutorialspoint.com/format_code.php",
      method:"POST",
      data: inputs,
      dataType: 'json',
      beforeSend: function(  ) {
         $("#loading").css({"visibility":"visible"});
      },
      success:function(data){
         $("#loading").css({"visibility":"hidden"});
         code = data.code;
         editor.setValue(code, 0);
         editor.resize(true);
         editor.clearSelection();
      },
      error:function(data){
         $("#loading").css({"visibility":"hidden"});
         editor.setValue(code, 0 );
         editor.resize(true);
         editor.clearSelection();
      }
   });
    return true;
}
function setEditorType(type) {
    editor_type = type;
    var handler;
    if (editor_type === "vim") {
        handler = "ace/keyboard/vim";
    }
    if (editor_type === "emacs") {
        handler = "ace/keyboard/emacs";
    }
    if (editor_type === "ace") {
        handler = null;
    }
    editor.setKeyboardHandler(handler);
    localStorage.editor_type = editor_type;
}
if( localStorage.editor_type ){
    setEditorType( localStorage.editor_type );
}

function setEditorFontSize(size) {
    editor_font_size = parseInt(size);
    editor.setFontSize(editor_font_size);
    terminal.setFontSize(editor_font_size);
    localStorage.editor_font_size = editor_font_size;
    editor.resize(true);
    terminal.resize(true);
}
if( localStorage.editor_font_size ){
    setEditorFontSize( localStorage.editor_font_size );
}

function setEditorTabSize(size) {
    editor_tab_size = parseInt(size);
    editor.getSession().setTabSize(editor_tab_size);
    localStorage.editor_tab_size = editor_tab_size;

    var code = editor.getValue();
    editor.setValue(code);
    editor.resize(true);
    editor.clearSelection();

}
if( localStorage.editor_tab_size ){
    setEditorTabSize( localStorage.editor_tab_size );
}

function setEditorInvisible(flag) {
    editor_invisible = flag;
    editor.setShowInvisibles(flag);
    localStorage.editor_invisible = editor_invisible;
}
if( localStorage.editor_invisible ){
    setEditorInvisible( localStorage.editor_invisible );
}
function setEditorGutter(flag) {
    editor_gutter = flag;
    editor.renderer.setShowGutter(flag);
    localStorage.editor_gutter = editor_gutter;
}
if( localStorage.editor_gutter ){
    setEditorGutter( localStorage.editor_gutter );
}
function openLogin(){
    if( isMobile ){
        $("#share").hide();
    }
    var tab = $('#codebox').tabs('getTab', 2);
    if( !tab ){
        tab = $('#codebox').tabs('add', {
            title: "Login",
            id: "Login",
            closable: true,
        });
        tab =  $('#codebox').tabs('getTab', "Login" );
    }
    var index = $("#codebox").tabs('getTabIndex',tab);
    $('#codebox').tabs('select', index);
    $('#codebox').tabs('update', {
        tab:tab,
        options: {
        title: 'Login'
      }
    });
    tab.panel('refresh', SERVER + "/" + 'login.php');
    $("#cc").layout('collapse', 'east');
    $("#cc").layout('panel', 'center').panel('resize', { width:'0%'});
    $("#cc").layout('panel', 'west').panel('resize', { width:'100%'});
    if( isMobile ){
             $("#cc").layout('panel', 'south').panel({
                 collapsible: false,
                 noheader: true,
                 height:"1px"
             });
             $("#cc").layout('resize');
             $("#cc").layout('expand', 'south');
     }
}
function openCaptcha(){
    if( isMobile ){
        $("#share").hide();
    }
    var tab = $('#codebox').tabs('getTab', 2);
    if( !tab ){
        tab = $('#codebox').tabs('add', {
            title: "Permalink",
            id: "Permalink",
            closable: true,
        });
        tab =  $('#codebox').tabs('getTab', "Permalink" );
    }
    var index = $("#codebox").tabs('getTabIndex',tab);
    $('#codebox').tabs('select', index);
    $('#codebox').tabs('update', {
        tab:tab,
        options: {
        title: 'Permalink'
      }
    });
    tab.panel('refresh', SERVER + "/" + 'captcha.php');
    $("#cc").layout('collapse', 'east');
    $("#cc").layout('panel', 'center').panel('resize', { width:'0%'});
    $("#cc").layout('panel', 'west').panel('resize', { width:'100%'});
    if( isMobile ){
             $("#cc").layout('panel', 'south').panel({
                 collapsible: false,
                 noheader: true,
                 height:"1px"
             });
             $("#cc").layout('resize');
             $("#cc").layout('expand', 'south');
     }
}
function userLogout(){
    var url = SERVER + "/user_logout.php";
    var inputs = {"hello":"bye"};
    $.ajax({
        type: "GET",
        url: url,
        data: inputs,
        crossDomain: true,
        xhrFields: {
          withCredentials: true
        },
        dataType: 'json',
        beforeSend: function() {
           $("#loading").css({ "visibility": "visible" });
        },
        success: function(data) {
            if( !data.status ){
                var tab = $('#codebox').tabs('getTab', 2);
                if( tab ){
		    var index = $('#codebox').tabs('getTabIndex',tab);
                    $('#codebox').tabs('close', index);
                }
                $("#save").css({ "display": "none" });
		$("#login").css({ "display": "block" });
                $("#logout").css({ "display": "none" });
		$('#codebox').tabs('select', 0);
                if( terminal_mode == 'V' ){
                    $("#cc").layout('expand', 'east');
                }else{
                    $("#cc").layout('expand', 'south');
                }
		var value  = terminal.getValue() + "Logged Out Successfully\n";
                terminal.setValue(value, 1);
                // Append the data to our terminal
                result = terminal.getValue();
                terminal.focus();
            }
	    userid = 0;
            $("#loading").css({ "visibility": "hidden" });
        }
    });
}
function userLogin() {
    var emailid = $("#emailid").textbox("getValue");
    if( !validateEmail( emailid) ){
        $("#warning").text("Enter a valid email address");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var password = $("#password").textbox("getValue");
    if( password.length < 6 ){
        $("#warning").text("Enter atleast 6 characters for your password");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var url = SERVER + "/user_login.php";
    var inputs = {
        "emailid":emailid, "password":password
    };
    $.ajax({
        type: "POST",
        url: url,
        data: inputs,
        crossDomain: true,
        xhrFields: {
          withCredentials: true
        },
        dataType: 'json',
        beforeSend: function() {
           $("#loading").css({ "visibility": "visible" });
        },
        success: function(data){
            if( !data.status ){
               userid = data.userid;
               username = data.username;
               $("#save").css({ "display": "block" });
               $("#login").css({ "display": "none" });
               $("#logout").css({ "display": "block" });
               $("#searchproject").css({ "display": "block" });
               $("#logout .l-btn-text").html(username);
               getProjects();
            }else{
               $("#warning").text(data.message);
            }
            setTimeout(function() {
               $("#warning").text("");
            }, 5000);
            $("#loading").css({ "visibility": "hidden" });
        }
    });
}

function validateEmail(email){
     var re = /^([\w-]+(?:\.[\w-]+)*)@((?:[\w-]+\.)*\w[\w-]{0,66})\.([a-z]{2,6}(?:\.[a-z]{2})?)$/i;
     return re.test(email);
}
function getProjects(keyword){
    if( isMobile ){
       var project_file = "get_projects_mobile.php";
       $("#share").hide();
    }else{
       var project_file = "get_projects.php";
    }
    var tab = $('#codebox').tabs('getTab', 2);

    if( !tab ){
        tab = $('#codebox').tabs('add', {
            title: "Login",
            id: "Login",
            closable: true,
         });
         tab =  $('#codebox').tabs('getTab', "Login" );
     }
     var index = $("#codebox").tabs('getTabIndex',tab);
     $('#codebox').tabs('select', index);
     $('#codebox').tabs('update', {
          tab:tab,
          options: {
             title: 'Projects',
             href: SERVER + "/" + project_file + "?keyword=" + keyword
          }
    });
    tab.panel('refresh', SERVER + "/" + project_file + "?keyword=" + keyword );
    $("#cc").layout('collapse', 'east');
    $("#cc").layout('panel', 'center').panel('resize', { width:'0%'});
    $("#cc").layout('panel', 'west').panel('resize', { width:'100%'});
    if( isMobile ){
             $("#cc").layout('panel', 'south').panel({
                 collapsible: false,
                 noheader: true,
                 height:"1px"
             });
             $("#cc").layout('resize');
             $("#cc").layout('expand', 'south');
     }
}
function openChangePassword(){
    if( isMobile ){
        $("#share").hide();
    }
    $("#cc").layout('collapse', 'east');
    $("#cc").layout('panel', 'center').panel('resize', { width:'0%'});
    $("#cc").layout('panel', 'west').panel('resize', { width:'100%'});
    if( userid > 0){
         var tab = $('#codebox').tabs('getTab', 2);
          if( !tab ){
             tab = $('#codebox').tabs('add', {
                 title: "Login",
                 id: "Login",
                 closable: true,
             });
             tab =  $('#codebox').tabs('getTab', "Login" );
          }
          var index = $("#codebox").tabs('getTabIndex',tab);
          $('#codebox').tabs('select', index);
          $('#codebox').tabs('update', {
             tab:tab,
             options: {
                 title: 'Change Password',
                 href: SERVER + "/change-my-password.php",
	  },
         });
         tab.panel('refresh', SERVER + "/change-my-password.php");
	 if( isMobile ){
             $("#cc").layout('panel', 'south').panel({
                 collapsible: false,
                 noheader: true,
                 height:"1px"
             });
             $("#cc").layout('resize');
             $("#cc").layout('expand', 'south');
	}
   }else{
      openLogin();
   }
}
function updateProfile(){
   if( isMobile ){
       $("#share").hide();
   }
   $('#profile').form('submit', {
       url: SERVER + "/update_profile.php",
       onLoadError:function(){
          console.log( "Error in updating profile" );
       },
       onSubmit: function() {
          $("#loading").css({ "visibility": "visible" });
       },
       error:function (data, status, error) {
            console.log( "Error in updating profile" );
            $.messager.alert('Error', error, 'info');
            $("#loading").css({"visibility":"hidden"});
            return false;
       },
       success:function(data) {
          console.log( data  );
          $("#loading").css({"visibility":"hidden"});
          if( data.status ){
              $.messager.alert('Error', data.message, 'info');
          }else{
              userProfile();
          }
       }
    });
}

function openSignup(){
    if( isMobile ){
        $("#share").hide();
    }
    var tab = $('#codebox').tabs('getTab', 2);
    if( !tab ){
        tab = $('#codebox').tabs('add', {
            title: "Sign Up",
            id: "Sign Up",
            closable: true,
        });
        tab =  $('#codebox').tabs('getTab', "Sign Up" );
    }
    var index = $("#codebox").tabs('getTabIndex',tab);
    $('#codebox').tabs('select', index);
    $('#codebox').tabs('update', {
        tab:tab,
        options: {
        title: 'Sign Up',
        href: SERVER + "/" + 'signup.php'
      }
    });
    tab.panel('refresh', SERVER + "/" + 'signup.php');
    $("#cc").layout('collapse', 'east');
    $("#cc").layout('panel', 'center').panel('resize', { width:'0%'});
    $("#cc").layout('panel', 'west').panel('resize', { width:'100%'});
    if( isMobile ){
             $("#cc").layout('panel', 'south').panel({
                 collapsible: false,
                 noheader: true,
                 height:"1px"
             });
             $("#cc").layout('resize');
             $("#cc").layout('expand', 'south');
     }
}
function signupUser() {
    username = $("#username").textbox("getValue");
    if( username.length < 4 ){
        $("#warning").text("Please enter your full name");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    emailid = $("#emailid").textbox("getValue");
    if( !validateEmail( emailid) ){
        $("#warning").text("Please enter a valid email address");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var captcha = $("#captcha_value").textbox("getValue");
    if( captcha.length < 6 ){
        $("#warning").text("Please enter correct captcha from the image");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var url = SERVER + "/user_signup.php";
    var inputs = {
        "username": username, "emailid":emailid, captcha:captcha
    };
    $.ajax({
        type: "POST",
        url: url,
        data: inputs,
        crossDomain: true,
        xhrFields: {
          withCredentials: true
        },
        dataType: 'json',
        beforeSend: function() {
           $("#loading").css({ "visibility": "visible" });
        },
        success: function(data) {
           if( data.status ){
               $("#warning").text(data.message);
           }else{
               var tab = $('#codebox').tabs('getSelected');
               $('#codebox').tabs('update', {
                 tab:tab,
                 options: {
                    title: 'Activate Account',
                 }
               });
               tab.panel('refresh', SERVER + "/activate_account.php?emailid=" + data.message);
               $("#loading").css({ "visibility": "hidden" });
           }
           setTimeout(function() {
               $("#warning").text("");
           }, 8000);
           $("#loading").css({ "visibility": "hidden" });
        }
    });
}
function activateAccount(){
    var emailid = $("#emailid").textbox("getValue");
    if( !validateEmail( emailid) ){
        $("#warning").text("Please enter a valid email address");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var token = $("#token").textbox("getValue");
    if( token.length < 6 ){
        $("#warning").text("Given secret token is not valid");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var password1 = $("#password1").textbox("getValue");
    if( password1.length < 4 ){
        $("#warning").text("Enter atleast 4 characters for your password");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var password2 = $("#password2").textbox("getValue");
    if( password1 != password2 ){
        $("#warning").text("Given two passwords do not match");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var url = SERVER + "/activate_user_account.php";
    var inputs = {
        "emailid":emailid, "token":token, "password":password1
    };
    $.ajax({
        type: "POST",
        url: url,
        data: inputs,
        crossDomain: true,
        xhrFields: {
          withCredentials: true
        },
        dataType: 'json',
        beforeSend: function() {
           $("#loading").css({ "visibility": "visible" });
        },
        success: function(data) {
           if( data.status ){
               $("#warning").text(data.message);
               setTimeout(function() {
                   $("#warning").text("");
               }, 4000);
           }else{
               userid = data.userid;
               username = data.username;
               $("#login").css({ "display": "none" });
               $("#logout").css({ "display": "block" });
               $("#searchproject").css({ "display": "block" });
               $("#logout .l-btn-text").html(username);
               getProjects();
           }
           $("#loading").css({ "visibility": "hidden" });
        }
    });
}
function openForgotPassword() {
    if( isMobile ){
        $("#share").hide();
    }
    var tab = $('#codebox').tabs('getSelected');
    $("#loading").css({ "visibility": "visible" });
    $('#codebox').tabs('update', {
         tab:tab,
         options: {
             title: 'Forgot Password',
             href: SERVER + "/" + 'forgot_password.php',
          }
    });
    tab.panel('refresh', SERVER + "/" + 'forgot_password.php');
    $("#loading").css({ "visibility": "hidden" });
    $("#cc").layout('collapse', 'east');
    $("#cc").layout('panel', 'center').panel('resize', { width:'0%'});
    $("#cc").layout('panel', 'west').panel('resize', { width:'100%'});
    if( isMobile ){
             $("#cc").layout('panel', 'south').panel({
                 collapsible: false,
                 noheader: true,
                 height:"1px"
             });
             $("#cc").layout('resize');
             $("#cc").layout('expand', 'south');
     }
}
function openSearchProject() {
    if( isMobile ){
       $("#share").hide();
    }
    $win = $('#sign').window({
        title: 'Search Project',
        iconCls: 'fal fa-magnifying-glass fa-sm',
        width: '580',
        height: '350'
    });
    $win.window('open');
    $('#sign').window('refresh', SERVER + "/search_project.php");
    if( isMobile ){
             $("#cc").layout('panel', 'south').panel({
                 collapsible: false,
                 noheader: true,
                 height:"1px"
             });
             $("#cc").layout('resize');
             $("#cc").layout('expand', 'south');
     }
}
function closeSign() {
    $('#sign').window('close');
    $win = null;
}
function changeMyPassword(){
    var oldPassword = $("#oldpassword").textbox("getValue");
    if( oldPassword.length < 6 ){
        $("#warning").text("Enter atleast 6 characters for your password");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var password1 = $("#password1").textbox("getValue");
    if( password1.length < 6 ){
        $("#warning").text("Enter atleast 6 characters for your password");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var password2 = $("#password2").textbox("getValue");
    if( password1 != password2 ){
        $("#warning").text("Given two passwords do not match");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var url = SERVER + "/change_my_password.php";
    var inputs = { "password": oldPassword, "newpassword":password1 };
    $.ajax({
	type: "POST",
	url: url,
	data: inputs,
        crossDomain: true,
        xhrFields: {
          withCredentials: true
        },
	dataType: 'json',
	beforeSend: function() {
	   $("#loading").css({ "visibility": "visible" });
	},
	success: function(data) {
           $("#warning").text(data.message);
           setTimeout(function() {
               $("#warning").text("");
           }, 5000);
           $("#loading").css({ "visibility": "hidden" });
        }
    });
}
function userProfile(){
    if( isMobile ){
       $("#share").hide();
    }
    $("#cc").layout('collapse', 'east');
    $("#cc").layout('panel', 'center').panel('resize', { width:'0%'});
    $("#cc").layout('panel', 'west').panel('resize', { width:'100%'});
    if( userid > 0){
         var tab = $('#codebox').tabs('getTab', 2);
          if( !tab ){
             tab = $('#codebox').tabs('add', {
                 title: "Login",
                 id: "Login",
                 closable: true,
             });
             tab =  $('#codebox').tabs('getTab', "Login" );
          }
          var index = $("#codebox").tabs('getTabIndex',tab);
          $('#codebox').tabs('select', index);
          $('#codebox').tabs('update', {
             tab:tab,
             options: {
                 title: 'Profile',
                 href: SERVER + "/user_profile.php"
             }
         });
         tab.panel('refresh', SERVER + "/user_profile.php");
         if( isMobile ){
             $("#cc").layout('panel', 'south').panel({
                 collapsible: false,
                 noheader: true,
                 height:"1px"
             });
             $("#cc").layout('resize');
             $("#cc").layout('expand', 'south');
         }
   }else{
      openLogin();
   }
}
function changePassword(){
    var code = $("#code").textbox("getValue");
    if( code.length < 6 ){
        $("#warning").text("Please enter a correct secret code");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var emailid = $("#emailid").textbox("getValue");
    if( !validateEmail( emailid) ){
        $("#warning").text("Enter a valid email address");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var password1 = $("#password1").textbox("getValue");
    if( password1.length < 6 ){
        $("#warning").text("Enter atleast 6 characters for your password");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var password2 = $("#password2").textbox("getValue");
    if( password1 != password2 ){
        $("#warning").text("Given two passwords do not match");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var captcha = $("#captcha_value").textbox("getValue");
    if( captcha.length < 6 ){
        $("#warning").text("Please enter given number from the image");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    var url = SERVER + "/change_user_password.php";
    var inputs = {
        "code": code, "emailid":emailid, password:password1, captcha:captcha
    };
    $.ajax({
	type: "POST",
	url: url,
	data: inputs,
        crossDomain: true,
        xhrFields: {
          withCredentials: true
        },
	dataType: 'json',
	beforeSend: function() {
	   $("#loading").css({ "visibility": "visible" });
	},
	success: function(data) {
           $("#warning").text(data.message);
           setTimeout(function() {
               $("#warning").text("");
           }, 4000);
           $("#loading").css({ "visibility": "hidden" });
        }
    });
}
function saveProject() {
    console.log("Going save the project...");
    if( userid <= 0 ){
        openLogin();
        return true;
    }
    var content = editor.getValue();
    if (content.length > 0 ) {
       var inputs = {'langid': langid, "projectid" : projectid, "content": content, "projecttitle" : projecttitle};
       console.log( inputs );
       $.ajax({
           type: "POST",
           data: inputs,
           crossDomain: true,
           xhrFields: {
               withCredentials: true
           },
           dataType: 'json',
           url: SERVER + "/save_project.php",
           beforeSend: function() {
              $("#loading").css({ "visibility": "visible" });
           },
           success: function(data) {
               if( data.status ){
                    $.messager.alert('Error', data.message, 'info');
                }else{
                   projectid = data.projectid;
                   var value  = terminal.getValue() + "Project saved successfully.\n";
                   terminal.setValue(value, 1);
                   // Append the data to our terminal
                   result = terminal.getValue();
                   terminal.focus();
                }
                $("#loading").css({ "visibility": "hidden" });
           }
      });
   }
}
function saveAsNewProject() {
    console.log("Going to save the project as new one...");
    if( userid <= 0 ){
        openLogin();
        return true;
    }
    var content = editor.getValue();
    if (content.length > 0 ) {
       var inputs = {'langid': langid, "content": content, "projecttitle" : projecttitle};
       console.log( inputs );
       $.ajax({
           type: "POST",
           data: inputs,
           crossDomain: true,
           xhrFields: {
               withCredentials: true
           },
           dataType: 'json',
           url: SERVER + "/save_as_new_project.php",
           beforeSend: function() {
              $("#loading").css({ "visibility": "visible" });
           },
           success: function(data) {
               if( data.status ){
                    $.messager.alert('Error', data.message, 'info');
                }else{
                   projectid = data.projectid;
                   var value  = terminal.getValue() + "Project saved as new successfully.\n";
                   terminal.setValue(value, 1);
                   result = terminal.getValue();
                   terminal.focus();
                }
                $("#loading").css({ "visibility": "hidden" });
           }
      });
   }
}
function setProjectTitle() {
    if( userid <= 0){
        openLogin();
        return true;
    }
    var dlg = $.messager.prompt('New project title', 'Enter new project title:', function(title) {
        if (title) {
            if (/^[a-zA-Z0-9_ ()-.+?]*$/.test(title) == false) {
                $.messager.alert('Alert Message', 'Project title should be plain text', 'info');
                return false;
            } else if (title.length > 255) {
                $.messager.alert('Alert Message', 'Project title should be less than 255 characters', 'info');
                return false;
            } else {
                projecttitle = $.trim(title);
	        var content = editor.getValue();
                if (content.length > 0 ) {
                   var inputs = {'langid': langid, "projectid" : projectid, "content": content, "projecttitle" : projecttitle};
                   console.log( inputs );
                   $.ajax({
                       type: "POST",
                       data: inputs,
                       crossDomain: true,
                       xhrFields: {
                           withCredentials: true
                       },
                       dataType: 'json',
                       url: SERVER + "/save_project.php",
                       beforeSend: function() {
                          $("#loading").css({ "visibility": "visible" });
                       },
                       success: function(data) {
                           if( data.status ){
                                $.messager.alert('Error', data.message, 'info');
                            }else{
                               projectid = data.projectid;
			       // Make Ajax call to rename project at server
                               var url = SERVER + "/set_project_title.php";
                               var inputs = {
                                 "projectid": projectid,
                                 "projecttitle": projecttitle
                              };
                              $.ajax({
                               type: "POST",
                               url: url,
                               crossDomain: true,
                               xhrFields: {
                                  withCredentials: true
                               },
                               data: inputs,
                               dataType: 'json',
                               beforeSend: function() {
                                   $("#loading").css({ "visibility": "visible" });
                               },
                               success: function(data) {
                                   if (data.status) {
                                       $.messager.alert('Error Message', data.message, 'error');
                                   } else {
                                       $("h1.title").text( projecttitle + " (" + version + ")");
                                       var value  = terminal.getValue() + "Project title changed and saved successfully.\n";
                                       terminal.setValue(value, 1);
                                       // Append the data to our terminal
                                       result = terminal.getValue();
                                       terminal.focus();
                                   }
                                   $("#loading").css({ "visibility": "hidden" });
                               }
                              });
                            }
                            $("#loading").css({ "visibility": "hidden" });
                       }
                  });
                }
            }
        }
    }).window({width:450});
    dlg.find('.messager-input').attr('value', " " + projecttitle);
}
function generatePublicLink(){
    $("#cc").layout('collapse', 'east');
    $("#cc").layout('panel', 'center').panel('resize', { width:'0%'});
    $("#cc").layout('panel', 'west').panel('resize', { width:'100%'});
    var content = editor.getValue();
    var captcha = $("#captcha_value").textbox("getValue");
    if( captcha.length < 6 ){
        $("#warning").text("Please enter correct captcha from the image");
        setTimeout(function() {
            $("#warning").text("");
        }, 4000);
        return false;
    }
    if (content.length > 0 ) {
       var inputs = {'langid': langid, "projectid" : projectid, "content": content, "projecttitle" : projecttitle, "captcha":captcha};
       $.ajax({
           type: "POST",
           data: inputs,
           crossDomain: true,
           xhrFields: {
               withCredentials: true
           },
           dataType: 'json',
           url: SERVER + "/save_public_project.php",
           beforeSend: function() {
              $("#loading").css({ "visibility": "visible" });
           },
           success: function(data) {
               if( data.status ){
                    $("#warning").text(data.message);
                    setTimeout(function() {
                        $("#warning").text("");
                    }, 4000);
                }else{
                  projectid = data.projectid;
                  var tab = $('#codebox').tabs('getTab', 2);
                  if( !tab ){
                  tab = $('#codebox').tabs('add', {
                      title: "Permalink",
                      id: "Permalink",
                      closable: true,
                  });
                  tab =  $('#codebox').tabs('getTab', "Permalink" );
                }
                var index = $("#codebox").tabs('getTabIndex',tab);
                $('#codebox').tabs('select', index);
                $('#codebox').tabs('update', {
                   tab:tab,
                   options: {
                     title: 'Permalink',
                   }
                });
                tab.panel('refresh', SERVER + "/" + "show_permalink.php?permalink=" + projectid);
             }
             $("#loading").css({ "visibility": "hidden" });
           }
      });
   }
}
function generateShareLink(){
    if( userid <= 0){
        openCaptcha();
        return true;
    }
    $("#cc").layout('collapse', 'east');
    $("#cc").layout('panel', 'center').panel('resize', { width:'0%'});
    $("#cc").layout('panel', 'west').panel('resize', { width:'100%'});
    var content = editor.getValue();
    if (content.length > 0 ) {
       var inputs = {'langid': langid, "projectid" : projectid, "content": content, "projecttitle" : projecttitle};
       $.ajax({
           type: "POST",
           data: inputs,
           crossDomain: true,
           xhrFields: {
               withCredentials: true
           },
           dataType: 'json',
           url: SERVER + "/save_project.php",
           beforeSend: function() {
              $("#loading").css({ "visibility": "visible" });
           },
           success: function(data) {
               if( data.status ){
                    $.messager.alert('Error', data.message, 'info');
                }else{
                  projectid = data.projectid;
                  var tab = $('#codebox').tabs('getTab', 2);
                  if( !tab ){
                  tab = $('#codebox').tabs('add', {
                      title: "Permalink",
                      id: "Permalink",
                      closable: true,
                  });
                  tab =  $('#codebox').tabs('getTab', "Permalink" );
                }
                var index = $("#codebox").tabs('getTabIndex',tab);
                $('#codebox').tabs('select', index);
                $('#codebox').tabs('update', {
                   tab:tab,
                   options: {
                     title: 'Permalink',
                     href: SERVER + "/show_permalink.php?permalink=" + projectid,
                   }
                });
                tab.panel('refresh', SERVER + "/" + "show_permalink.php?permalink=" + projectid);
             }
             $("#loading").css({ "visibility": "hidden" });
           }
      });
   }
}
function createProject() {
    // Make Ajax call to  destroy sessions
    var url = SERVER + "/reset_project.php";
    var inputs = { "langid": langid };
    $.ajax({
          type: "POST",
          url: url,
          crossDomain: true,
          xhrFields: {
             withCredentials: true
          },
          data: inputs,
          dataType: 'json',
          beforeSend: function() {
             $("#loading").css({
                "visibility": "visible"
             });
          },
          success: function(data) {
             window.location = 'https://www.tutorialspoint.com/codingground.htm';
             $("#loading").css({
                "visibility": "hidden"
             });
          }
    });
}
if(/(Mac|iPhone|iPod|iPad)/i.test(navigator.userAgent)){
    $("#winhelp").hide();
}else{
    $("#machelp").hide();
}
$(window).load(function() {
   if( mode === "login" ){
      /* trigger Login window */
      openLogin();
   }else if( mode === "signup" ){
      /* trigger Signup window */
      openSignup();
   }
});
