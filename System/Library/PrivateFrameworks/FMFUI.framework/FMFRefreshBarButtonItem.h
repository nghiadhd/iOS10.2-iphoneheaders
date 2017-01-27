/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMFUI/FMFUI-Structs.h>
#import <UIKit/UIBarButtonItem.h>

@class NSSet, FMFRefreshWrapperButton, FMFTintedActivityIndicatorView, UIImageView;

@interface FMFRefreshBarButtonItem : UIBarButtonItem {

	NSSet* _locations;
	FMFRefreshWrapperButton* _wrapperButton;
	FMFTintedActivityIndicatorView* _aiv;
	UIImageView* _imageView;
	id _locateNotification;

}

@property (nonatomic,retain) FMFRefreshWrapperButton * wrapperButton;              //@synthesize wrapperButton=_wrapperButton - In the implementation block
@property (nonatomic,retain) FMFTintedActivityIndicatorView * aiv;                 //@synthesize aiv=_aiv - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) id locateNotification;                                //@synthesize locateNotification=_locateNotification - In the implementation block
@property (nonatomic,retain) NSSet * locations;                                    //@synthesize locations=_locations - In the implementation block
-(void)setLocations:(NSSet *)arg1 ;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(UIImageView *)imageView;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(void)setImageView:(UIImageView *)arg1 ;
-(NSSet *)locations;
-(void)addLocation:(id)arg1 ;
-(void)removeLocationForHandle:(id)arg1 ;
-(void)setAiv:(FMFTintedActivityIndicatorView *)arg1 ;
-(void)setWrapperButton:(FMFRefreshWrapperButton *)arg1 ;
-(FMFRefreshWrapperButton *)wrapperButton;
-(void)localTapped;
-(FMFTintedActivityIndicatorView *)aiv;
-(void)locatingInProgressChanged:(id)arg1 ;
-(void)_updateLocateInProgress;
-(BOOL)anyLocationIsUpdating;
-(void)updateLocations;
-(id)locateNotification;
-(void)setLocateNotification:(id)arg1 ;
@end
