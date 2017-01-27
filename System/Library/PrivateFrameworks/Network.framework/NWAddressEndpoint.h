/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <Network/NWHostEndpoint.h>

@class NSString, NSData;

@interface NWAddressEndpoint : NWHostEndpoint

@property (nonatomic,readonly) NSString * addressString; 
@property (nonatomic,readonly) NSString * addressStringNoPort; 
@property (nonatomic,readonly) NSData * addressData; 
@property (nonatomic,readonly) const sockaddr* address; 
@property (nonatomic,readonly) unsigned long long addressFamily; 
+(unsigned)endpointType;
+(id)endpointWithHostname:(id)arg1 port:(id)arg2 ;
+(id)endpointWithAddress:(const sockaddr*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)addressString;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)addressStringNoPort;
-(const sockaddr*)address;
-(NSData *)addressData;
-(unsigned long long)addressFamily;
@end

