/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface CRApplicationIcon : NSObject {

	BOOL _editable;
	NSString* _bundleIdentifier;
	UIImage* _iconImage;
	NSString* _displayName;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (getter=isEditable,nonatomic,readonly) BOOL editable;              //@synthesize editable=_editable - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                            //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
+(BOOL)_isApplicationEditableWithBundleIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(BOOL)isEditable;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(UIImage *)iconImage;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
@end

