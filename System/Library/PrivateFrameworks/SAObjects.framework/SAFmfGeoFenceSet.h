/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString, SAPerson, SALocation;

@interface SAFmfGeoFenceSet : SADomainCommand

@property (nonatomic,copy) NSNumber * enable; 
@property (nonatomic,copy) NSString * fenceType; 
@property (nonatomic,retain) SAPerson * friend; 
@property (nonatomic,copy) NSString * geoFenceTrigger; 
@property (nonatomic,copy) NSNumber * oneTimeOnly; 
@property (nonatomic,retain) SALocation * requestedLocation; 
+(id)geoFenceSet;
+(id)geoFenceSetWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)enable;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setEnable:(NSNumber *)arg1 ;
-(SAPerson *)friend;
-(void)setFriend:(SAPerson *)arg1 ;
-(SALocation *)requestedLocation;
-(void)setRequestedLocation:(SALocation *)arg1 ;
-(NSString *)geoFenceTrigger;
-(void)setGeoFenceTrigger:(NSString *)arg1 ;
-(NSString *)fenceType;
-(void)setFenceType:(NSString *)arg1 ;
-(NSNumber *)oneTimeOnly;
-(void)setOneTimeOnly:(NSNumber *)arg1 ;
@end

