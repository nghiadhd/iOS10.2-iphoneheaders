/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/General/CompanionDockSettings.bundle/CompanionDockSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface CDSApp : NSObject {

	NSString* _bundleID;
	NSString* _name;
	UIImage* _icon;

}

@property (nonatomic,copy) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) UIImage * icon;                 //@synthesize icon=_icon - In the implementation block
+(id)appWithBundleID:(id)arg1 name:(id)arg2 icon:(id)arg3 ;
-(id)initWithBundleID:(id)arg1 name:(id)arg2 icon:(id)arg3 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)compare:(id)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
@end

