/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/FMFBalloonProvider.bundle/FMFBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMFBalloonProvider/FMFBalloonProvider-Structs.h>
#import <UIKit/UIView.h>
#import <DigitalTouchBalloonProvider/CKTranscriptPluginView.h>

@protocol FMFBalloonViewDelegate;
@class UIView, _UIBackdropView, UILabel, UIButton, NSString;

@interface FMFBalloonView : UIView <CKTranscriptPluginView> {

	BOOL _hasReceivedFirstStateUpdate;
	id<FMFBalloonViewDelegate> _delegate;
	UIView* _mapView;
	_UIBackdropView* _backdropView;
	UILabel* _label;
	UIButton* _shareButton;
	UIButton* _ignoreButton;
	UIView* _verticalSeparator;
	UIView* _horizontalSeparator;

}

@property (assign,nonatomic) id<FMFBalloonViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * mapView;                                 //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                   //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIButton * shareButton;                           //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,retain) UIButton * ignoreButton;                          //@synthesize ignoreButton=_ignoreButton - In the implementation block
@property (nonatomic,retain) UIView * verticalSeparator;                       //@synthesize verticalSeparator=_verticalSeparator - In the implementation block
@property (nonatomic,retain) UIView * horizontalSeparator;                     //@synthesize horizontalSeparator=_horizontalSeparator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsOutline; 
-(void)_ignoreButtonTapped;
-(void)_shareButtonTapped;
-(void)stateChangedFrom:(int)arg1 toState:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FMFBalloonViewDelegate>)arg1 ;
-(id<FMFBalloonViewDelegate>)delegate;
-(void)layoutMarginsDidChange;
-(void)prepareForReuse;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(id)passthroughViews;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(UIButton *)shareButton;
-(void)setMapView:(UIView *)arg1 ;
-(UIView *)mapView;
-(UIButton *)ignoreButton;
-(UIView *)horizontalSeparator;
-(UIView *)verticalSeparator;
-(void)setIgnoreButton:(UIButton *)arg1 ;
-(void)setHorizontalSeparator:(UIView *)arg1 ;
-(void)setVerticalSeparator:(UIView *)arg1 ;
-(id)interactiveViews;
-(void)setShareButton:(UIButton *)arg1 ;
@end

