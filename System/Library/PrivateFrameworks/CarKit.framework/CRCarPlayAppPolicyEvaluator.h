/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRCarPlayAppBlacklist, NSSet;

@interface CRCarPlayAppPolicyEvaluator : NSObject {

	BOOL _geoSupported;
	CRCarPlayAppBlacklist* _blacklist;
	NSSet* __simulatedAccessoryProtocols;

}

@property (nonatomic,retain) CRCarPlayAppBlacklist * blacklist;                    //@synthesize blacklist=_blacklist - In the implementation block
@property (nonatomic,retain) NSSet * _simulatedAccessoryProtocols;                 //@synthesize _simulatedAccessoryProtocols=__simulatedAccessoryProtocols - In the implementation block
@property (assign,getter=isGeoSupported,nonatomic) BOOL geoSupported;              //@synthesize geoSupported=_geoSupported - In the implementation block
-(id)init;
-(CRCarPlayAppBlacklist *)blacklist;
-(void)setBlacklist:(CRCarPlayAppBlacklist *)arg1 ;
-(BOOL)isGeoSupported;
-(BOOL)_isValidMessagingApp:(id)arg1 ;
-(BOOL)_connectedProtocolsIntersectsAppProtocols:(id)arg1 ;
-(void)setGeoSupported:(BOOL)arg1 ;
-(NSSet *)_simulatedAccessoryProtocols;
-(void)set_simulatedAccessoryProtocols:(NSSet *)arg1 ;
-(id)effectivePolicyForAppDeclaration:(id)arg1 ;
@end

