/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class NSNumber, NSString, CFCBNightShiftSchedule;

@interface CFCBSetNightShiftMode : SADomainCommand <SAAceSerializable>

@property (nonatomic,copy) NSNumber * active; 
@property (nonatomic,copy) NSNumber * enable; 
@property (nonatomic,copy) NSString * mode; 
@property (nonatomic,copy) NSString * option; 
@property (nonatomic,retain) CFCBNightShiftSchedule * schedule; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)setNightShiftMode;
+(id)setNightShiftModeWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)active;
-(void)setActive:(NSNumber *)arg1 ;
-(void)setMode:(NSString *)arg1 ;
-(NSString *)mode;
-(NSNumber *)enable;
-(CFCBNightShiftSchedule *)schedule;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setEnable:(NSNumber *)arg1 ;
-(NSString *)option;
-(void)setSchedule:(CFCBNightShiftSchedule *)arg1 ;
-(void)setOption:(NSString *)arg1 ;
@end
