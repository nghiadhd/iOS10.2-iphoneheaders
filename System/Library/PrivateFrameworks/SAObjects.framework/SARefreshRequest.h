/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAStartRequest.h>

@class NSData;

@interface SARefreshRequest : SAStartRequest

@property (nonatomic,copy) NSData * nlResultState; 
@property (nonatomic,copy) NSData * serializedIntent; 
+(id)refreshRequestWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)refreshRequest;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSData *)nlResultState;
-(void)setNlResultState:(NSData *)arg1 ;
-(NSData *)serializedIntent;
-(void)setSerializedIntent:(NSData *)arg1 ;
@end

