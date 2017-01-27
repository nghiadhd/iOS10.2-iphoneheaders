/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class NSArray, NSString;

@interface CFSFAddToSafariReadingList : SADomainCommand <SAAceSerializable>

@property (nonatomic,copy) NSArray * urls; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)addToSafariReadingList;
+(id)addToSafariReadingListWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

