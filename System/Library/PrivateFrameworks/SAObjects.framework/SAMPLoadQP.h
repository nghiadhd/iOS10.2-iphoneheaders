/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSNumber;

@interface SAMPLoadQP : SADomainCommand

@property (nonatomic,copy) NSString * airplayRouteUID; 
@property (nonatomic,copy) NSNumber * startPlaying; 
+(id)loadQP;
+(id)loadQPWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)airplayRouteUID;
-(void)setAirplayRouteUID:(NSString *)arg1 ;
-(NSNumber *)startPlaying;
-(void)setStartPlaying:(NSNumber *)arg1 ;
@end

