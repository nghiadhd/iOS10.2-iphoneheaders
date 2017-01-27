/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolCSSSourceRange : RWIProtocolJSONObject

@property (assign,nonatomic) int startLine; 
@property (assign,nonatomic) int startColumn; 
@property (assign,nonatomic) int endLine; 
@property (assign,nonatomic) int endColumn; 
-(void)setStartLine:(int)arg1 ;
-(void)setStartColumn:(int)arg1 ;
-(int)startLine;
-(int)startColumn;
-(void)setEndLine:(int)arg1 ;
-(void)setEndColumn:(int)arg1 ;
-(id)initWithStartLine:(int)arg1 startColumn:(int)arg2 endLine:(int)arg3 endColumn:(int)arg4 ;
-(int)endColumn;
-(int)endLine;
@end

