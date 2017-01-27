/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBDashBoardPageViewControllerProtocol <SBDashBoardViewPresenting,SBApplicationHosting>
@property (assign,nonatomic,__weak) id<SBDashBoardViewControllerProtocol> dashBoardViewController; 
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning; 
@property (nonatomic,readonly) BOOL authenticated; 
@optional
-(void)updateLegibilityForSettings:(id)arg1;

@required
+(BOOL)isAvailableForConfiguration;
+(unsigned long long)requiredCapabilities;
-(void)setDashBoardViewController:(id)arg1;
-(BOOL)isTransitioning;
-(BOOL)authenticated;
-(void)setTransitioning:(BOOL)arg1;
-(id<SBDashBoardViewControllerProtocol>)dashBoardViewController;

@end

