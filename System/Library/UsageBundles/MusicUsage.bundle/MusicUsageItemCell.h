/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/UsageBundles/MusicUsage.bundle/MusicUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSUsageBundleCell.h>

@class MusicUsageItem, MPArtworkCatalog;

@interface MusicUsageItemCell : PSUsageBundleCell {

	MusicUsageItem* _usageItem;
	MPArtworkCatalog* _artworkCatalog;

}
-(void)layoutSubviews;
-(id)blankIcon;
-(id)getLazyIcon;
-(id)getLazyIconID;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end
