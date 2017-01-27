/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString;

@interface SBInterfaceItemInfo : NSObject {

	id _representedObject;
	UIImage* _icon;
	UIImage* _settingsIcon;
	NSString* _displayName;
	NSString* _settingsDisplayName;

}

@property (nonatomic,readonly) id representedObject;                    //@synthesize representedObject=_representedObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,retain) UIImage * icon;                            //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UIImage * settingsIcon;                    //@synthesize settingsIcon=_settingsIcon - In the implementation block
@property (nonatomic,copy) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * settingsDisplayName;              //@synthesize settingsDisplayName=_settingsDisplayName - In the implementation block
+(id)infoWithRepresentedObject:(id)arg1 ;
-(void)invalidateCachedLayoutData;
-(double)heightForReusableViewForNotificationCenterTableViewController:(id)arg1 layoutMode:(long long)arg2 sectionLocation:(long long)arg3 ;
-(id)initWithRepresentedObject:(id)arg1 ;
-(NSString *)settingsDisplayName;
-(id)reusableViewIdentifier;
-(void)populateReusableView:(id)arg1 ;
-(void)setSettingsIcon:(UIImage *)arg1 ;
-(void)setSettingsDisplayName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
-(NSString *)displayName;
-(id)representedObject;
-(void)setDisplayName:(NSString *)arg1 ;
-(Class)reusableViewClass;
-(UIImage *)settingsIcon;
@end

