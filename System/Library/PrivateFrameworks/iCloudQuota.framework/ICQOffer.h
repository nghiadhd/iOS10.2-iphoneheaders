/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSDate, _ICQAlertSpecification, _ICQBannerSpecification, _ICQButtonSpecification, _ICQUpgradeFlowSpecification;

@interface ICQOffer : NSObject {

	NSDictionary* _serverDictionary;
	NSString* _bundleId;
	BOOL _iTunesAccountExists;
	NSDate* _retrievalDate;
	long long _level;
	NSString* _accountAltDSID;
	NSString* _notificationID;
	_ICQAlertSpecification* _alertSpecification;
	_ICQBannerSpecification* _bannerSpecification;
	_ICQButtonSpecification* _buttonSpecification;
	_ICQUpgradeFlowSpecification* _upgradeFlowSpecification;

}

@property (nonatomic,readonly) BOOL iTunesAccountExists; 
@property (nonatomic,retain) NSDate * retrievalDate;                                               //@synthesize retrievalDate=_retrievalDate - In the implementation block
@property (assign,nonatomic) long long level;                                                      //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSString * accountAltDSID;                                            //@synthesize accountAltDSID=_accountAltDSID - In the implementation block
@property (nonatomic,retain) NSString * notificationID;                                            //@synthesize notificationID=_notificationID - In the implementation block
@property (nonatomic,retain) _ICQBannerSpecification * bannerSpecification;                        //@synthesize bannerSpecification=_bannerSpecification - In the implementation block
@property (nonatomic,retain) _ICQButtonSpecification * buttonSpecification;                        //@synthesize buttonSpecification=_buttonSpecification - In the implementation block
@property (nonatomic,retain) _ICQAlertSpecification * alertSpecification;                          //@synthesize alertSpecification=_alertSpecification - In the implementation block
@property (nonatomic,retain) _ICQUpgradeFlowSpecification * upgradeFlowSpecification;              //@synthesize upgradeFlowSpecification=_upgradeFlowSpecification - In the implementation block
@property (assign,nonatomic) BOOL iTunesAccountExists;                                             //@synthesize iTunesAccountExists=_iTunesAccountExists - In the implementation block
+(id)sampleOfferForLevel:(long long)arg1 ;
+(id)cachedOffer;
-(void)setLevel:(long long)arg1 ;
-(long long)level;
-(NSString *)notificationID;
-(void)setNotificationID:(NSString *)arg1 ;
-(void)setAccountAltDSID:(NSString *)arg1 ;
-(NSDate *)retrievalDate;
-(void)setRetrievalDate:(NSDate *)arg1 ;
-(NSString *)accountAltDSID;
-(id)initWithServerDictionary:(id)arg1 accountAltDSID:(id)arg2 notificationID:(id)arg3 bundleIdentifier:(id)arg4 ;
-(_ICQAlertSpecification *)alertSpecification;
-(void)setAlertSpecification:(_ICQAlertSpecification *)arg1 ;
-(void)setBannerSpecification:(_ICQBannerSpecification *)arg1 ;
-(void)setButtonSpecification:(_ICQButtonSpecification *)arg1 ;
-(void)setUpgradeFlowSpecification:(_ICQUpgradeFlowSpecification *)arg1 ;
-(void)setITunesAccountExists:(BOOL)arg1 ;
-(id)keybagForBuyStorage;
-(_ICQUpgradeFlowSpecification *)upgradeFlowSpecification;
-(BOOL)iTunesAccountExists;
-(_ICQButtonSpecification *)buttonSpecification;
-(_ICQBannerSpecification *)bannerSpecification;
@end

