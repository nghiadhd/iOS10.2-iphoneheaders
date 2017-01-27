/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVLeafItem.h>

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem {

	NSURL* _baseURL;
	int _writeStyle;

}

@property (nonatomic,retain) NSURL * baseURL;              //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) int writeStyle;               //@synthesize writeStyle=_writeStyle - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)parserSuggestsBaseURL:(id)arg1 ;
-(int)writeStyle;
-(void)setWriteStyle:(int)arg1 ;
-(id)payloadAsFullURL;
-(id)payloadAsOriginalURL;
-(void)write:(id)arg1 ;
@end

