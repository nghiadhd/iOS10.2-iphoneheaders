/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol OKActionExports <JSExport>
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) CGPoint location; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) unsigned long long touchCount; 
@property (nonatomic,readonly) unsigned long long platform; 
@property (nonatomic,retain,readonly) NSDictionary * context; 
@required
-(double)timestamp;
-(unsigned long long)state;
-(NSDictionary *)context;
-(CGPoint)location;
-(unsigned long long)touchCount;
-(unsigned long long)platform;
-(void)setContextObject:(id)arg1 forKey:(id)arg2;

@end

