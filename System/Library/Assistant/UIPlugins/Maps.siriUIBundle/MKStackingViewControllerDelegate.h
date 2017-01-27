/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKStackingViewControllerDelegate <NSObject>
@optional
-(double)stackingViewControllerHeightForTitleView:(id)arg1;
-(double)stackingViewController:(id)arg1 heightForSeparatorBetweenUpperViewController:(id)arg2 andLowerViewController:(id)arg3;
-(double)stackingViewController:(id)arg1 minimumVisibleSurfacePercentForAnalyticsSelection:(id)arg2;
-(void)stackingViewController:(id)arg1 didShowMinimumVisibleSurfacePercentForAnalyticsSelection:(id)arg2;
-(void)stackingViewControllerWillBeginScroll:(id)arg1;
-(void)stackingViewControllerDidEndScroll:(id)arg1;
-(void)stackingViewController:(id)arg1 didLayoutViewControllers:(id)arg2 remaningViewControllers:(id)arg3;

@end

