/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SADomainObjectCommand.h>

@class NSURL, NSString;

@interface SADomainObjectUpdateCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand>

@property (nonatomic,copy) NSURL * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)domainObjectUpdateCompleted;
+(id)domainObjectUpdateCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

