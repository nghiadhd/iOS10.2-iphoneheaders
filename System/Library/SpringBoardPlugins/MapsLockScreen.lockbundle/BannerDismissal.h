/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BannerItem;

@interface BannerDismissal : NSObject {

	int _reason;
	BannerItem* _bannerItem;

}

@property (nonatomic,retain) BannerItem * bannerItem;              //@synthesize bannerItem=_bannerItem - In the implementation block
@property (assign,nonatomic) int reason;                           //@synthesize reason=_reason - In the implementation block
-(id)initWithBannerItem:(id)arg1 reason:(int)arg2 ;
-(BOOL)wasTimedOut;
-(BOOL)wasDismissedByUser;
-(BOOL)wasSuppressed;
-(BannerItem *)bannerItem;
-(void)setBannerItem:(BannerItem *)arg1 ;
-(int)reason;
-(void)setReason:(int)arg1 ;
@end

