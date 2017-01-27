/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSKernelClock.h>

@class NSArray;

@interface TSgPTPClock : TSKernelClock

@property (nonatomic,copy,readonly) NSArray * gptpPath; 
@property (nonatomic,readonly) unsigned long long grandmasterIdentity; 
@property (nonatomic,readonly) unsigned long long clockIdentity; 
@property (assign,nonatomic) unsigned char clockPriority1; 
@property (assign,nonatomic) unsigned char clockPriority2; 
@property (assign,nonatomic) unsigned char clockClass; 
@property (assign,nonatomic) unsigned char clockAccuracy; 
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)iokitInterfaceMatchingDictionaryForInterfaceName:(id)arg1 ;
+(id)availablegPTPClockIdentifiers;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 ;
+(id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1 ;
+(unsigned long long)clockIdentifierForInterfaceName:(id)arg1 ;
-(void)dealloc;
-(id)initWithClockIdentifier:(unsigned long long)arg1 ;
-(id)clockName;
-(unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned)arg1 withFlags:(unsigned*)arg2 ;
-(BOOL)convertFrom32BitASTime:(unsigned*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned)arg3 ;
-(id)gPTPTimeFromMachAbsoluteTime:(unsigned long long)arg1 ;
-(unsigned long long)machAbsoluteFromgPTPTime:(id)arg1 ;
-(unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 ;
-(unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 ;
-(BOOL)getRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 forGrandmasterIdentity:(unsigned long long*)arg5 withError:(id*)arg6 ;
-(unsigned long long)grandmasterIdentity;
-(NSArray *)gptpPath;
-(unsigned long long)clockIdentity;
-(void)setClockPriority1:(unsigned char)arg1 ;
-(unsigned char)clockPriority1;
-(void)setClockPriority2:(unsigned char)arg1 ;
-(unsigned char)clockPriority2;
-(void)setClockClass:(unsigned char)arg1 ;
-(unsigned char)clockClass;
-(void)setClockAccuracy:(unsigned char)arg1 ;
-(unsigned char)clockAccuracy;
-(BOOL)addLinkLayerPortOnInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeLinkLayerPortFromInterfaceNamed:(id)arg1 error:(id*)arg2 ;
-(BOOL)addUDPv4PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)removeUDPv4PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)addUDPv6PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(char*)arg2 error:(id*)arg3 ;
-(BOOL)removeUDPv6PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(char*)arg2 error:(id*)arg3 ;
-(BOOL)addUDPv4EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)removeUDPv4EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)addUDPv6EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(char*)arg2 error:(id*)arg3 ;
-(BOOL)removeUDPv6EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(char*)arg2 error:(id*)arg3 ;
@end

