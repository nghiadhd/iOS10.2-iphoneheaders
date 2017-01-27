/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/NWEndpoint.h>

@class NSArray, NSData;

@interface NPTunnelTuscanyEndpoint : NWEndpoint {

	NSArray* _hosts;
	NSData* _hostsData;

}

@property (readonly) NSData * hostsData;              //@synthesize hostsData=_hostsData - In the implementation block
@property (readonly) NSArray * hosts;                 //@synthesize hosts=_hosts - In the implementation block
+(unsigned)endpointType;
+(BOOL)supportsResolverCallback;
+(id)encodeHosts:(id)arg1 ;
-(id)description;
-(id)encodedData;
-(void)resolveEndpointWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithEncodedData:(id)arg1 ;
-(NSArray *)hosts;
-(id)initWithHosts:(id)arg1 ;
-(NSData *)hostsData;
@end

