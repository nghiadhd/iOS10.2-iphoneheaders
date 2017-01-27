/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKUILabel.h>

@class MKMapItem, NSArray, MKArtworkDataSourceCache;

@interface MKTransitInfoLabelView : _MKUILabel {

	BOOL _hasCustomShieldSize;
	BOOL _hasCustomIconSize;
	BOOL _hasCustomFont;
	BOOL _truncateBySwitchingToTextOnly;
	BOOL _containsText;
	double _maxWidth;
	MKMapItem* _mapItem;
	long long _shieldSize;
	long long _iconSize;
	NSArray* _labelItems;
	double _spaceBetweenShields;
	double _spaceBetweenIcons;
	MKArtworkDataSourceCache* _artworkCache;

}

@property (assign,nonatomic) BOOL truncateBySwitchingToTextOnly;                   //@synthesize truncateBySwitchingToTextOnly=_truncateBySwitchingToTextOnly - In the implementation block
@property (assign,nonatomic) double maxWidth;                                      //@synthesize maxWidth=_maxWidth - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                  //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) long long shieldSize;                                 //@synthesize shieldSize=_shieldSize - In the implementation block
@property (assign,nonatomic) long long iconSize;                                   //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,copy) NSArray * labelItems;                                   //@synthesize labelItems=_labelItems - In the implementation block
@property (assign,nonatomic) double spaceBetweenShields;                           //@synthesize spaceBetweenShields=_spaceBetweenShields - In the implementation block
@property (assign,nonatomic) double spaceBetweenIcons;                             //@synthesize spaceBetweenIcons=_spaceBetweenIcons - In the implementation block
@property (nonatomic,readonly) BOOL containsText;                                  //@synthesize containsText=_containsText - In the implementation block
@property (nonatomic,retain) MKArtworkDataSourceCache * artworkCache;              //@synthesize artworkCache=_artworkCache - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setFont:(id)arg1 ;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(NSArray *)labelItems;
-(id)initWithMapItem:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 maxWidth:(double)arg2 ;
-(void)setLabelItems:(NSArray *)arg1 ;
-(void)_setupLabelInfo;
-(id)_generateText:(BOOL)arg1 allowElipsis:(BOOL)arg2 ;
-(void)setShieldSize:(long long)arg1 ;
-(void)setIconSize:(long long)arg1 ;
-(void)setSpaceBetweenShields:(double)arg1 ;
-(void)setSpaceBetweenIcons:(double)arg1 ;
-(id)_stringAttributes;
-(id)_imageForLabelItem:(id)arg1 ;
-(id)_imageForArtworkDataSource:(id)arg1 ;
-(id)_imageForShieldDataSource:(id)arg1 ;
-(MKArtworkDataSourceCache *)artworkCache;
-(void)_setFont:(id)arg1 custom:(BOOL)arg2 ;
-(void)_contentSizeCategoryDidChange;
-(long long)_shieldSizeForContentSizeCategory:(id)arg1 ;
-(long long)_iconSizeForContentSizeCategory:(id)arg1 ;
-(BOOL)truncateBySwitchingToTextOnly;
-(void)setTruncateBySwitchingToTextOnly:(BOOL)arg1 ;
-(long long)shieldSize;
-(double)spaceBetweenShields;
-(double)spaceBetweenIcons;
-(BOOL)containsText;
-(void)setArtworkCache:(MKArtworkDataSourceCache *)arg1 ;
-(long long)iconSize;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
@end

