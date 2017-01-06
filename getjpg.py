#coding=utf-8
import re
import urllib

#获取url
def getHtml(url):
    page=urllib.urlopen(url)
    html=page.read()
    return html

#抓取图片
def getImg(html):
    reg = r'src="(.+?\.jpg)" pic_ext'
    imgre = re.compile(reg)
    imglist = re.findall(imgre, html)
    x=1
    for imgurl in imglist:
        urllib.urlretrieve(imgurl,'%s.jpg'%x)
        x+=1

    print "共下载图片数："+bytes(x)
    return imglist


html=getHtml("http://tieba.baidu.com/p/4692448317")
print getImg(html)