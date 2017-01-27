/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/WiFiCallingSettingsBundle.bundle/WiFiCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class PHSettingsAboutView, NSString;

@interface PHSettingsGenericAboutViewController : UIViewController {

	PHSettingsAboutView* _aboutView;
	NSString* _bodyText;

}

@property (nonatomic,retain) PHSettingsAboutView * aboutView;              //@synthesize aboutView=_aboutView - In the implementation block
@property (nonatomic,retain) NSString * bodyText;                          //@synthesize bodyText=_bodyText - In the implementation block
-(void)setAboutView:(PHSettingsAboutView *)arg1 ;
-(PHSettingsAboutView *)aboutView;
-(id)initWithTitle:(id)arg1 bodyText:(id)arg2 ;
-(void)loadView;
-(void)setBodyText:(NSString *)arg1 ;
-(NSString *)bodyText;
-(void)done:(id)arg1 ;
@end

