/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>

@class UIImage, NSBundle, NSString;

@interface SULockoutViewController : SUViewController {

	UIImage* _image;
	NSBundle* _localizationBundle;
	NSString* _messageBody;
	NSString* _messageTitle;

}

@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * messageBody;                     //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,retain) NSString * messageTitle;                    //@synthesize messageTitle=_messageTitle - In the implementation block
@property (nonatomic,retain) NSBundle * localizationBundle;              //@synthesize localizationBundle=_localizationBundle - In the implementation block
-(NSString *)messageBody;
-(void)setMessageBody:(NSString *)arg1 ;
-(id)init;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(UIImage *)image;
-(void)loadView;
-(id)copyArchivableContext;
-(NSBundle *)localizationBundle;
-(NSString *)messageTitle;
-(void)setLocalizationBundle:(NSBundle *)arg1 ;
-(void)setMessageTitle:(NSString *)arg1 ;
@end

