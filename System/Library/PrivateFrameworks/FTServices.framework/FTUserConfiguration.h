/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FTServices/FTServices-Structs.h>
@class NSMutableDictionary;

@interface FTUserConfiguration : NSObject {

	NSMutableDictionary* _cellularDataAvailableCache;
	NSMutableDictionary* _wifiAllowedCache;
	CTServerConnectionRef _ctServerConnection;

}

@property (assign,nonatomic) CTServerConnectionRef ctServerConnection;              //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (nonatomic,readonly) BOOL _nonWifiFaceTimeEntitled; 
@property (assign,nonatomic) BOOL cellularFaceTimeEnabled; 
@property (assign,nonatomic) BOOL allowAnyNetwork; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)_nonWifiFaceTimeEntitled;
-(BOOL)cellularDataEnabledForBundleId:(id)arg1 ;
-(BOOL)_getCellularDataEnabledForBundleID:(id)arg1 ;
-(BOOL)_getWifiDataAllowedForBundleID:(id)arg1 ;
-(void)_setAppCellularDataEnabled:(BOOL)arg1 ;
-(BOOL)_adequateInternalOrCarrierInstall;
-(void)setAllowAnyNetwork:(BOOL)arg1 ;
-(void)setCtServerConnection:(CTServerConnectionRef)arg1 ;
-(BOOL)allowAnyNetwork;
-(BOOL)wifiAllowedForBundleId:(id)arg1 ;
-(BOOL)cellularFaceTimeEnabled;
-(void)setCellularFaceTimeEnabled:(BOOL)arg1 ;
-(void)_clearCaches;
-(CTServerConnectionRef)ctServerConnection;
@end

