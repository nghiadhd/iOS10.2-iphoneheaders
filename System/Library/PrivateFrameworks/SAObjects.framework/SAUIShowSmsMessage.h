/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class SASmsSms;

@interface SAUIShowSmsMessage : SAUISnippet

@property (assign,nonatomic) BOOL showAsDraft; 
@property (nonatomic,retain) SASmsSms * sms; 
+(id)showSmsMessage;
+(id)showSmsMessageWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)showAsDraft;
-(void)setShowAsDraft:(BOOL)arg1 ;
-(void)setSms:(SASmsSms *)arg1 ;
-(SASmsSms *)sms;
@end

