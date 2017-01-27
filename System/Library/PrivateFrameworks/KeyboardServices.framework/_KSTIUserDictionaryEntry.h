/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol _KSTIUserDictionaryEntry <NSObject>
@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,copy) NSString * shortcut; 
@property (nonatomic,retain) NSDate * timestamp; 
@required
-(NSDate *)timestamp;
-(void)setTimestamp:(id)arg1;
-(NSString *)phrase;
-(void)setPhrase:(id)arg1;
-(NSString *)shortcut;
-(void)setShortcut:(id)arg1;

@end

