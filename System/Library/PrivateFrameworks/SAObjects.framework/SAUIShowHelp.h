/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIShowHelp : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * speakableText; 
@property (nonatomic,copy) NSString * text; 
+(id)showHelp;
+(id)showHelpWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)_afui_usefulUserResultType;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)speakableText;
-(void)setSpeakableText:(NSString *)arg1 ;
@end

