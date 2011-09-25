
    

  

<!DOCTYPE html>
<html>
  <head>
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
    <script type="text/javascript">var NREUMQ=[];NREUMQ.push(["mark","firstbyte",new Date().getTime()]);</script>
        <title>handler.cpp at master from Newbyter/CLibShow - GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />

    
    

    <meta content="authenticity_token" name="csrf-param" />
<meta content="7c77c42c952684063b1ebe8ef8c3fa5947bd8125" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/stylesheets/bundle_github.css?dd902c44f98775f9751624b43c2ea6b4053c22ca" media="screen" rel="stylesheet" type="text/css" />
    

    <script src="https://a248.e.akamai.net/assets.github.com/javascripts/bundle_jquery.js?05576a4333d53119fdd7574e01ba174f2c5331f9" type="text/javascript"></script>

    <script src="https://a248.e.akamai.net/assets.github.com/javascripts/bundle_github.js?0589eed34a8ff72442e205f2163c477c635371b6" type="text/javascript"></script>

    

    
  <link rel='permalink' href='/Newbyter/CLibShow/blob/6963098ab78ba31e068dab27fb4488d53ab4eecb/handler.cpp'>

  <link href="https://github.com/Newbyter/CLibShow/commits/master.atom" rel="alternate" title="Recent Commits to CLibShow:master" type="application/atom+xml" />

    

    <meta name="description" content="CLibShow - A program describe how to use the things in Standard C Library. And give you a interactive user interface to try any function without using compiler." />
  

        <script type="text/javascript">
      var _gaq = _gaq || [];
      _gaq.push(['_setAccount', 'UA-3769691-2']);
      _gaq.push(['_setDomainName', 'none']);
      _gaq.push(['_trackPageview']);
      _gaq.push(['_trackPageLoadTime']);
      (function() {
        var ga = document.createElement('script');
        ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
        ga.setAttribute('async', 'true');
        document.documentElement.firstChild.appendChild(ga);
      })();
    </script>

  </head>

  

  <body class="logged_in page-blob windows env-production">
    

    

    

    <div class="subnavd" id="main">
      <div id="header" class="true">
          <a class="logo" href="https://github.com">
            <img alt="github" class="default svg" height="45" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov6.svg" />
            <img alt="github" class="default png" height="45" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov6.png" />
            <!--[if (gt IE 8)|!(IE)]><!-->
            <img alt="github" class="hover svg" height="45" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov6-hover.svg" />
            <img alt="github" class="hover png" height="45" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov6-hover.png" />
            <!--<![endif]-->
          </a>

        
          





  
    <div class="userbox">
      <div class="avatarname">
        <a href="https://github.com/Ruijie-Qin"><img src="https://secure.gravatar.com/avatar/4ce52be11addfc8e2b311d4bf65edead?s=140&d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="20" height="20"  /></a>
        <a href="https://github.com/Ruijie-Qin" class="name">Ruijie-Qin</a>

        
        
      </div>
      <ul class="usernav">
        <li><a href="https://github.com">Dashboard</a></li>
        <li>
          
          <a href="https://github.com/inbox">Inbox</a>
          <a href="https://github.com/inbox" class="unread_count ">0</a>
        </li>
        <li><a href="https://github.com/account">Account Settings</a></li>
        <li><a href="/logout">Log Out</a></li>
      </ul>
    </div><!-- /.userbox -->
  


        
        <div class="topsearch">
  
    <form action="/search" id="top_search_form" method="get">
      <a href="/search" class="advanced-search tooltipped downwards" title="Advanced Search">Advanced Search</a>
      <div class="search placeholder-field js-placeholder-field">
        <label class="placeholder" for="global-search-field">Search…</label>
        <input type="text" class="search my_repos_autocompleter" id="global-search-field" name="q" results="5" /> <input type="submit" value="Search" class="button" />
      </div>
      <input type="hidden" name="type" value="Everything" />
      <input type="hidden" name="repo" value="" />
      <input type="hidden" name="langOverride" value="" />
      <input type="hidden" name="start_value" value="1" />
    </form>
    <ul class="nav">
      <li><a href="/explore">Explore GitHub</a></li>
      <li><a href="https://gist.github.com">Gist</a></li>
      
      <li><a href="/blog">Blog</a></li>
      
      <li><a href="http://help.github.com">Help</a></li>
    </ul>
  
</div>

      </div>

      
      
        
    <div class="site">
      <div class="pagehead repohead vis-public    instapaper_ignore readability-menu">

      

      <div class="title-actions-bar">
        <h1>
          <a href="/Newbyter">Newbyter</a> /
          <strong><a href="/Newbyter/CLibShow" class="js-current-repository">CLibShow</a></strong>
          
          
        </h1>

        
    <ul class="actions">
      

      
        
        <li>
          
            <a href="/Newbyter/CLibShow/toggle_watch" class="minibutton btn-watch unwatch-button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', '7c77c42c952684063b1ebe8ef8c3fa5947bd8125'); f.appendChild(s);f.submit();return false;"><span><span class="icon"></span>Unwatch</span></a>
          
        </li>
        
          
            <li><a href="/Newbyter/CLibShow/fork" class="minibutton btn-fork fork-button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', '7c77c42c952684063b1ebe8ef8c3fa5947bd8125'); f.appendChild(s);f.submit();return false;"><span><span class="icon"></span>Fork</span></a></li>
          

          
        
      
      
      <li class="repostats">
        <ul class="repo-stats">
          <li class="watchers watching">
            <a href="/Newbyter/CLibShow/watchers" title="Watchers — You're Watching" class="tooltipped downwards">
              4
            </a>
          </li>
          <li class="forks">
            <a href="/Newbyter/CLibShow/network" title="Forks - You have a fork" class="tooltipped downwards">
              4
            </a>
          </li>
        </ul>
      </li>
    </ul>

      </div>

        
  <ul class="tabs">
    <li><a href="/Newbyter/CLibShow" class="selected" highlight="repo_source">Source</a></li>
    <li><a href="/Newbyter/CLibShow/commits/master" highlight="repo_commits">Commits</a></li>
    <li><a href="/Newbyter/CLibShow/network" highlight="repo_network">Network</a></li>
    <li><a href="/Newbyter/CLibShow/pulls" highlight="repo_pulls">Pull Requests (0)</a></li>

    

    
      
      <li><a href="/Newbyter/CLibShow/issues" highlight="issues">Issues (0)</a></li>
    

            
    <li><a href="/Newbyter/CLibShow/graphs" highlight="repo_graphs">Graphs</a></li>

    

    <li class="contextswitch nochoices">
      <span class="repo-tree toggle leftwards"
            
            data-master-branch="master"
            data-ref="master">
        <em>Branch:</em>
        <code>master</code>
      </span>
    </li>
  </ul>

  <div style="display:none" id="pl-description"><p><em class="placeholder">click here to add a description</em></p></div>
  <div style="display:none" id="pl-homepage"><p><em class="placeholder">click here to add a homepage</em></p></div>

  <div class="subnav-bar">
  
  <ul>
    <li>
      <a href="/Newbyter/CLibShow/branches" class="dropdown">Switch Branches (1)</a>
      <ul class="subnav-dropdown-branches">
                              <li><strong>master &#x2713;</strong></li>
            
      </ul>
    </li>
    <li>
      <a href="#" class="dropdown defunct">Switch Tags (0)</a>
      
    </li>
    <li>
    
    <a href="/Newbyter/CLibShow/branches" class="manage">Branch List</a>
    
    </li>
  </ul>
</div>

  
  
  
  
  
  



        
    <div id="repo_details" class="metabox clearfix">
      <div id="repo_details_loader" class="metabox-loader" style="display:none">Sending Request&hellip;</div>

      
        <a href="/Newbyter/CLibShow/downloads" class="download-source" data-facebox-url="/Newbyter/CLibShow/archives/master" id="download_button" title="Download source, tagged packages and binaries."><span class="icon"></span>Downloads</a>
      

      <div id="repository_desc_wrapper">
      <div id="repository_description" rel="repository_description_edit">
        
          <p>A program describe how to use the things in Standard C Library. And give you a interactive user interface to try any function without using compiler.
            <span id="read_more" style="display:none">&mdash; <a href="#readme">Read more</a></span>
          </p>
        
      </div>

      <div id="repository_description_edit" style="display:none;" class="inline-edit">
        <form action="/Newbyter/CLibShow/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="7c77c42c952684063b1ebe8ef8c3fa5947bd8125" /></div>
          <input type="hidden" name="field" value="repository_description">
          <input type="text" class="textfield" name="value" value="A program describe how to use the things in Standard C Library. And give you a interactive user interface to try any function without using compiler.">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>

      
      <div class="repository-homepage" id="repository_homepage" rel="repository_homepage_edit">
        <p><a href="https://www.newbyter.net" rel="nofollow">https://www.newbyter.net</a></p>
      </div>

      <div id="repository_homepage_edit" style="display:none;" class="inline-edit">
        <form action="/Newbyter/CLibShow/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="7c77c42c952684063b1ebe8ef8c3fa5947bd8125" /></div>
          <input type="hidden" name="field" value="repository_homepage">
          <input type="text" class="textfield" name="value" value="https://www.newbyter.net">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>
      </div>
      <div class="rule "></div>
      <div class="url-box">
  

  <ul class="clone-urls">
    
      
      <li class="http_clone_url"><a href="https://github.com/Newbyter/CLibShow.git" data-permissions="Read-Only">HTTP</a></li>
      <li class="public_clone_url"><a href="git://github.com/Newbyter/CLibShow.git" data-permissions="Read-Only">Git Read-Only</a></li>
    
    
  </ul>
  <input type="text" spellcheck="false" class="url-field" />
        <span style="display:none" id="clippy_4517" class="clippy-text"></span>
      <span id="clippy_tooltip_clippy_4517" class="clippy-tooltip tooltipped" title="copy to clipboard">
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="14"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_4517&amp;copied=copied!&amp;copyto=copy to clipboard">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"
             width="14"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_4517&amp;copied=copied!&amp;copyto=copy to clipboard"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      </span>

  <p class="url-description"><strong>Read+Write</strong> access</p>
</div>

    </div>

    <div class="frame frame-center tree-finder" style="display:none" data-tree-list-url="/Newbyter/CLibShow/tree-list/6963098ab78ba31e068dab27fb4488d53ab4eecb" data-blob-url-prefix="/Newbyter/CLibShow/blob/6963098ab78ba31e068dab27fb4488d53ab4eecb">
      <div class="breadcrumb">
        <b><a href="/Newbyter/CLibShow">CLibShow</a></b> /
        <input class="tree-finder-input" type="text" name="query" autocomplete="off" spellcheck="false">
      </div>

      
        <div class="octotip">
          <p>
            <a href="/Newbyter/CLibShow/dismiss-tree-finder-help" class="dismiss js-dismiss-tree-list-help" title="Hide this notice forever">Dismiss</a>
            <strong>Octotip:</strong> You've activated the <em>file finder</em> by pressing <span class="kbd">t</span>
            Start typing to filter the file list. Use <span class="kbd badmono">↑</span> and <span class="kbd badmono">↓</span> to navigate,
            <span class="kbd">enter</span> to view files.
          </p>
        </div>
      

      <table class="tree-browser" cellpadding="0" cellspacing="0">
        <tr class="js-header"><th>&nbsp;</th><th>name</th></tr>
        <tr class="js-no-results no-results" style="display: none">
          <th colspan="2">No matching files</th>
        </tr>
        <tbody class="js-results-list">
        </tbody>
      </table>
    </div>

    <div id="jump-to-line" style="display:none">
      <h2>Jump to Line</h2>
      <form>
        <input class="textfield" type="text">
        <div class="full-button">
          <button type="submit" class="classy">
            <span>Go</span>
          </button>
        </div>
      </form>
    </div>


        

      </div><!-- /.pagehead -->

      

  













  <div class="commit commit-tease js-details-container">
  
  <p class="commit-title ">
    
      <a href="/Newbyter/CLibShow/commit/6963098ab78ba31e068dab27fb4488d53ab4eecb">removed abs and hypot function cause they are not standard C lib functio...</a>
      <a href="javascript:;" class="minibutton expander-minibutton js-details-target"><span>…</span></a>
    
  </p>
  
    <div class="commit-desc"><pre>...n</pre></div>
  
  <div class="commit-meta">
    <a href="/Newbyter/CLibShow/commit/6963098ab78ba31e068dab27fb4488d53ab4eecb" class="sha-block">commit <span class="sha">6963098ab7</span></a>

    <div class="authorship">
      
      <img src="https://secure.gravatar.com/avatar/d72a8238b6327474c191c7d227d7c141?s=140&d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="20" height="20" class="gravatar" />
      <span class="author-name"><a href="/Jianru-Lin">Jianru-Lin</a></span>
      authored <time class="js-relative-date" datetime="2011-09-25T07:55:04-07:00" title="2011-09-25 07:55:04">September 25, 2011</time>

      
    </div>
  </div>
</div>




  <div id="slider">

  

    <div class="breadcrumb" data-path="handler.cpp/">
      <b><a href="/Newbyter/CLibShow/tree/6963098ab78ba31e068dab27fb4488d53ab4eecb" class="js-rewrite-sha">CLibShow</a></b> / handler.cpp       <span style="display:none" id="clippy_2649" class="clippy-text">handler.cpp</span>
      
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_2649&amp;copied=copied!&amp;copyto=copy to clipboard">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"
             width="110"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_2649&amp;copied=copied!&amp;copyto=copy to clipboard"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      

    </div>

    <div class="frames">
      <div class="frame frame-center" data-path="handler.cpp/" data-permalink-url="/Newbyter/CLibShow/blob/6963098ab78ba31e068dab27fb4488d53ab4eecb/handler.cpp" data-title="handler.cpp at master from Newbyter/CLibShow - GitHub" data-type="blob">
        
          <ul class="big-actions">
            <li><a class="file-edit-link minibutton js-rewrite-sha" href="/Newbyter/CLibShow/edit/6963098ab78ba31e068dab27fb4488d53ab4eecb/handler.cpp"><span>Edit this file</span></a></li>
          </ul>
        

        <div id="files">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><img alt="Txt" height="16" src="https://a248.e.akamai.net/assets.github.com/images/icons/txt.png" width="16" /></span>
                <span class="mode" title="File Mode">100644</span>
                
                  <span>139 lines (118 sloc)</span>
                
                <span>2.677 kb</span>
              </div>
              <ul class="actions">
                <li><a href="/Newbyter/CLibShow/raw/master/handler.cpp" id="raw-url">raw</a></li>
                
                  <li><a href="/Newbyter/CLibShow/blame/master/handler.cpp">blame</a></li>
                
                <li><a href="/Newbyter/CLibShow/commits/master/handler.cpp">history</a></li>
              </ul>
            </div>
            
  <div class="data type-c++">
    
      <table cellpadding="0" cellspacing="0" class="lines">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
</pre>
          </td>
          <td width="100%">
            
              
                <div class="highlight"><pre><div class='line' id='LC1'><br/></div><div class='line' id='LC2'><span class="cp">#include &lt;stdio.h&gt;</span></div><div class='line' id='LC3'><span class="cp">#include &lt;math.h&gt;</span></div><div class='line' id='LC4'><span class="cp">#include &lt;stdlib.h&gt;</span></div><div class='line' id='LC5'><span class="cp">#include &quot;util.h&quot;</span></div><div class='line' id='LC6'><br/></div><div class='line' id='LC7'><span class="kt">void</span> <span class="n">acos_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC8'><span class="p">{</span></div><div class='line' id='LC9'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC10'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;acos(%f) =&gt; %f</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">acos</span><span class="p">(</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC11'><span class="p">}</span></div><div class='line' id='LC12'><br/></div><div class='line' id='LC13'><span class="kt">void</span> <span class="n">fabs_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC14'><span class="p">{</span></div><div class='line' id='LC15'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC16'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;fabs(%lf) =&gt; %lf</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">fabs</span><span class="p">(</span><span class="n">x</span><span class="p">));</span>	</div><div class='line' id='LC17'><span class="p">}</span></div><div class='line' id='LC18'><br/></div><div class='line' id='LC19'><span class="kt">void</span> <span class="n">asin_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC20'><span class="p">{</span></div><div class='line' id='LC21'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC22'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;asin(%lf) =&gt; %lf</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">asin</span><span class="p">(</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC23'><span class="p">}</span></div><div class='line' id='LC24'><br/></div><div class='line' id='LC25'><span class="kt">void</span> <span class="n">atan_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC26'><span class="p">{</span></div><div class='line' id='LC27'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC28'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;atan(%lf) =&gt; %lf</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">atan</span><span class="p">(</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC29'><span class="p">}</span></div><div class='line' id='LC30'><br/></div><div class='line' id='LC31'><span class="kt">void</span> <span class="n">atan2_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC32'><span class="p">{</span></div><div class='line' id='LC33'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">),</span> <span class="n">y</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;y = &quot;</span><span class="p">);</span></div><div class='line' id='LC34'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;atan2(%lf, %lf) =&gt; %lf</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">y</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">atan2</span><span class="p">(</span><span class="n">y</span><span class="p">,</span> <span class="n">x</span><span class="p">));</span></div><div class='line' id='LC35'><span class="p">}</span></div><div class='line' id='LC36'><br/></div><div class='line' id='LC37'><span class="kt">void</span> <span class="n">cos_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC38'><span class="p">{</span></div><div class='line' id='LC39'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC40'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;cos(%f) =&gt; %f</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">cos</span><span class="p">(</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC41'><span class="p">}</span></div><div class='line' id='LC42'><br/></div><div class='line' id='LC43'><span class="kt">void</span> <span class="n">sin_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC44'><span class="p">{</span></div><div class='line' id='LC45'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC46'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;sin(%f) =&gt; %f</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">sin</span><span class="p">(</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC47'><span class="p">}</span></div><div class='line' id='LC48'><br/></div><div class='line' id='LC49'><span class="kt">void</span> <span class="n">tan_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC50'><span class="p">{</span></div><div class='line' id='LC51'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC52'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;tan(%f) =&gt; %f</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">tan</span><span class="p">(</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC53'><span class="p">}</span></div><div class='line' id='LC54'><br/></div><div class='line' id='LC55'><span class="kt">void</span> <span class="n">cosh_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC56'><span class="p">{</span></div><div class='line' id='LC57'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC58'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;cosh(%f) =&gt; %f</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">cosh</span><span class="p">(</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC59'><span class="p">}</span></div><div class='line' id='LC60'><span class="kt">void</span> <span class="n">sinh_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC61'><span class="p">{</span></div><div class='line' id='LC62'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC63'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;tan(%f) =&gt; %f</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">sinh</span><span class="p">(</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC64'><span class="p">}</span></div><div class='line' id='LC65'><span class="kt">void</span> <span class="n">tanh_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC66'><span class="p">{</span></div><div class='line' id='LC67'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC68'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;tan(%f) =&gt; %f</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">tanh</span><span class="p">(</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC69'><span class="p">}</span></div><div class='line' id='LC70'><br/></div><div class='line' id='LC71'><span class="kt">void</span> <span class="n">ceil_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC72'><span class="p">{</span></div><div class='line' id='LC73'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC74'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;ceil(%lf) =&gt; %lf</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">ceil</span><span class="p">(</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC75'><span class="p">}</span></div><div class='line' id='LC76'><br/></div><div class='line' id='LC77'><span class="kt">void</span> <span class="n">floor_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC78'><span class="p">{</span></div><div class='line' id='LC79'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC80'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;floor(%lf) =&gt; %lf</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">floor</span><span class="p">(</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC81'><span class="p">}</span></div><div class='line' id='LC82'><br/></div><div class='line' id='LC83'><span class="kt">void</span> <span class="n">exp_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC84'><span class="p">{</span></div><div class='line' id='LC85'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC86'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;exp(%lf) =&gt; %lf</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">exp</span><span class="p">(</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC87'><span class="p">}</span></div><div class='line' id='LC88'><br/></div><div class='line' id='LC89'><span class="kt">void</span> <span class="n">fmod_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC90'><span class="p">{</span></div><div class='line' id='LC91'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">),</span> <span class="n">y</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;y = &quot;</span><span class="p">);</span></div><div class='line' id='LC92'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;fmod(%lf, %lf) =&gt; %lf</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">y</span><span class="p">,</span> <span class="n">fmod</span><span class="p">(</span><span class="n">x</span><span class="p">,</span> <span class="n">y</span><span class="p">));</span></div><div class='line' id='LC93'><span class="p">}</span></div><div class='line' id='LC94'><br/></div><div class='line' id='LC95'><span class="kt">void</span> <span class="n">frexp_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC96'><span class="p">{</span></div><div class='line' id='LC97'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">),</span> <span class="n">y</span> <span class="o">=</span> <span class="mf">0.0</span><span class="p">;</span></div><div class='line' id='LC98'>	<span class="kt">int</span> <span class="n">exp</span><span class="p">;</span></div><div class='line' id='LC99'>	<span class="n">y</span> <span class="o">=</span> <span class="n">frexp</span><span class="p">(</span><span class="n">x</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">exp</span><span class="p">);</span></div><div class='line' id='LC100'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;%lf = %lf * 2 ^ %d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">y</span><span class="p">,</span> <span class="n">exp</span><span class="p">);</span></div><div class='line' id='LC101'><span class="p">}</span></div><div class='line' id='LC102'><br/></div><div class='line' id='LC103'><span class="kt">void</span> <span class="n">ldexp_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC104'><span class="p">{</span></div><div class='line' id='LC105'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC106'>	<span class="kt">int</span> <span class="n">exp</span> <span class="o">=</span> <span class="n">getInt</span><span class="p">(</span><span class="s">&quot;exp = &quot;</span><span class="p">);</span></div><div class='line' id='LC107'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;ldexp(%lf, %d) =&gt; %lf</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">exp</span><span class="p">,</span> <span class="n">ldexp</span><span class="p">(</span><span class="n">x</span><span class="p">,</span> <span class="n">exp</span><span class="p">));</span></div><div class='line' id='LC108'><span class="p">}</span></div><div class='line' id='LC109'><br/></div><div class='line' id='LC110'><span class="kt">void</span> <span class="n">log_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC111'><span class="p">{</span></div><div class='line' id='LC112'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC113'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;log(%lf) =&gt; %lf</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">log</span><span class="p">(</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC114'><span class="p">}</span></div><div class='line' id='LC115'><br/></div><div class='line' id='LC116'><span class="kt">void</span> <span class="n">log10_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC117'><span class="p">{</span></div><div class='line' id='LC118'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC119'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;log10(%lf) =&gt; %lf</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">log10</span><span class="p">(</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC120'><span class="p">}</span></div><div class='line' id='LC121'><br/></div><div class='line' id='LC122'><span class="kt">void</span> <span class="n">modf_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC123'><span class="p">{</span></div><div class='line' id='LC124'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">),</span> <span class="n">y</span> <span class="o">=</span> <span class="mf">0.0</span><span class="p">,</span> <span class="n">i</span> <span class="o">=</span> <span class="mf">0.0</span><span class="p">;</span></div><div class='line' id='LC125'>	<span class="n">y</span> <span class="o">=</span> <span class="n">modf</span><span class="p">(</span><span class="n">x</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">i</span><span class="p">);</span></div><div class='line' id='LC126'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;%lf = %lf + %lf</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">i</span><span class="p">,</span> <span class="n">y</span><span class="p">);</span></div><div class='line' id='LC127'><span class="p">}</span></div><div class='line' id='LC128'><br/></div><div class='line' id='LC129'><span class="kt">void</span> <span class="n">pow_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC130'><span class="p">{</span></div><div class='line' id='LC131'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">),</span> <span class="n">exp</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;exp = &quot;</span><span class="p">);</span></div><div class='line' id='LC132'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;%lf ^ %lf = %lf</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">exp</span><span class="p">,</span> <span class="n">pow</span><span class="p">(</span><span class="n">x</span><span class="p">,</span> <span class="n">exp</span><span class="p">));</span></div><div class='line' id='LC133'><span class="p">}</span></div><div class='line' id='LC134'><br/></div><div class='line' id='LC135'><span class="kt">void</span> <span class="n">sqrt_handler</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC136'><span class="p">{</span></div><div class='line' id='LC137'>	<span class="kt">double</span> <span class="n">x</span> <span class="o">=</span> <span class="n">getDouble</span><span class="p">(</span><span class="s">&quot;x = &quot;</span><span class="p">);</span></div><div class='line' id='LC138'>	<span class="n">printf</span><span class="p">(</span><span class="s">&quot;sqrt(%lf) = %lf</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">x</span><span class="p">,</span> <span class="n">sqrt</span><span class="p">(</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC139'><span class="p">}</span></div></pre></div>
              
            
          </td>
        </tr>
      </table>
    
  </div>


          </div>
        </div>
      </div>
    </div>
  

  </div>


<div class="frame frame-loading" style="display:none;" data-tree-list-url="/Newbyter/CLibShow/tree-list/6963098ab78ba31e068dab27fb4488d53ab4eecb" data-blob-url-prefix="/Newbyter/CLibShow/blob/6963098ab78ba31e068dab27fb4488d53ab4eecb">
  <img src="https://a248.e.akamai.net/assets.github.com/images/modules/ajax/big_spinner_336699.gif" height="32" width="32">
</div>

    </div>
  
      
    </div>

    <!-- footer -->
    <div id="footer" >
       <div class="upper_footer">
   <div class="site" class="clearfix">

     <!--[if IE]><h4 id="blacktocat_ie">GitHub Links</h4><![endif]-->
     <![if !IE]><h4 id="blacktocat">GitHub Links</h4><![endif]>

     <ul class="footer_nav">
       <h4>GitHub</h4>
       <li><a href="https://github.com/about">About</a></li>
       <li><a href="https://github.com/blog">Blog</a></li>
       <li><a href="https://github.com/features">Features</a></li>
       <li><a href="https://github.com/contact">Contact &amp; Support</a></li>
       <li><a href="https://github.com/training">Training</a></li>
       <li><a href="http://status.github.com/">Site Status</a></li>
     </ul>

     <ul class="footer_nav">
       <h4>Tools</h4>
       <li><a href="http://mac.github.com/">GitHub for Mac</a></li>
       <li><a href="http://mobile.github.com/">Issues for iPhone</a></li>
       <li><a href="https://gist.github.com">Gist: Code Snippets</a></li>
       <li><a href="http://fi.github.com/">Enterprise Install</a></li>
       <li><a href="http://jobs.github.com/">Job Board</a></li>
     </ul>

     <ul class="footer_nav">
       <h4>Extras</h4>
       <li><a href="http://shop.github.com/">GitHub Shop</a></li>
       <li><a href="http://octodex.github.com/">The Octodex</a></li>
     </ul>

     <ul class="footer_nav">
       <h4>Documentation</h4>
       <li><a href="http://help.github.com/">GitHub Help</a></li>
       <li><a href="http://developer.github.com/">Developer API</a></li>
       <li><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></li>
       <li><a href="http://pages.github.com/">GitHub Pages</a></li>
     </ul>

   </div><!-- /.site -->
 </div><!-- /.upper_footer -->

 <div class="lower_footer">
  <div class="site" class="clearfix">
    <!--[if IE]><div id="legal_ie"><![endif]-->
    <![if !IE]><div id="legal"><![endif]>
      <ul>
        <li><a href="https://github.com/site/terms">Terms of Service</a></li>
        <li><a href="https://github.com/site/privacy">Privacy</a></li>
        <li><a href="https://github.com/security">Security</a></li>
      </ul>

      <p>&copy; 2011 <span id="_rrt" title="0.08549s from fe7.rs.github.com">GitHub</span> Inc. All rights reserved.</p>
    </div><!-- /#legal or /#legal_ie-->

    
      <div class="sponsor">
        <a href="http://www.rackspace.com" class="logo">
          <img alt="Dedicated Server" height="36" src="https://a248.e.akamai.net/assets.github.com/images/modules/footer/rackspace_logo.png?v2" width="38" />
        </a>
        Powered by the <a href="http://www.rackspace.com ">Dedicated
        Servers</a> and<br/> <a href="http://www.rackspacecloud.com">Cloud
        Computing</a> of Rackspace Hosting<span>&reg;</span>
      </div>
    
  </div><!-- /.site -->
</div><!-- /.lower_footer -->

    </div><!-- /#footer -->

    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus site search</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selected down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selected up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selected down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selected up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selected down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selected up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle select target</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column middle">
        <dl class="keyboard-mappings">
          <dt>I</dt>
          <dd>Mark selected as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>U</dt>
          <dd>Mark selected as unread</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>e</dt>
          <dd>Close selected</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Remove selected from view</dd>
        </dl>
      </div><!-- /.column.middle -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>
</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:
> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown" target="_blank">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>
    

    <div class="context-overlay"></div>

    
    
    
    <script type="text/javascript">(function(){var d=document;var e=d.createElement("script");e.async=true;e.src="https://d1ros97qkrwjf5.cloudfront.net/19/eum/rum.js";e.type="text/javascript";var s=d.getElementsByTagName("script")[0];s.parentNode.insertBefore(e,s);})();NREUMQ.push(["nrf2","beacon-1.newrelic.com","2f94e4d8c2",64799,"dw1bEBZcX1RWRhoEClsAGhcMXEQ=",0,83,new Date().getTime()])</script>
  </body>
</html>

