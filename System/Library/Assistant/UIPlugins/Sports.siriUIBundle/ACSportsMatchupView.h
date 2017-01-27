/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <UIKit/UIView.h>
#import <Sports/ACSportsScoreboardViewDelegate.h>

@protocol ACSportsMatchupViewDelegate;
@class ACSportsScoreboardView, ACSportsAttributionView, SAUIAppPunchOut, NSString;

@interface ACSportsMatchupView : UIView <ACSportsScoreboardViewDelegate> {

	ACSportsScoreboardView* _scoreboardView;
	ACSportsAttributionView* _attributionView;
	id<ACSportsMatchupViewDelegate> _delegate;
	SAUIAppPunchOut* _attributionPunchOut;
	SAUIAppPunchOut* _leagueAppPunchOut;

}

@property (assign,nonatomic,__weak) id<ACSportsMatchupViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * attributionPunchOut;                        //@synthesize attributionPunchOut=_attributionPunchOut - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * leagueAppPunchOut;                          //@synthesize leagueAppPunchOut=_leagueAppPunchOut - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMatchup:(id)arg1 league:(id)arg2 ;
-(void)_leagueAppButtonTouched:(id)arg1 ;
-(void)scoreBoardViewWantsPunchOut:(id)arg1 ;
-(double)attributionLogoWidth;
-(void)prepareForAppearance;
-(void)_attributionButtonTouched:(id)arg1 ;
-(id)_punchOut;
-(void)_updateAttributionViewForPunchOuts;
-(void)configureDomainObjectView:(id)arg1 withDomainObject:(id)arg2 beforeDomainObject:(id)arg3 league:(id)arg4 index:(unsigned long long)arg5 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<ACSportsMatchupViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<ACSportsMatchupViewDelegate>)delegate;
-(SAUIAppPunchOut *)attributionPunchOut;
-(void)setAttributionPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAUIAppPunchOut *)leagueAppPunchOut;
-(void)setLeagueAppPunchOut:(SAUIAppPunchOut *)arg1 ;
@end

