/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIWindowDelegate <NSObject>
@optional
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)arg1;
-(BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
-(void)window:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
-(id)rotatingContentViewForWindow:(id)arg1;
-(void)window:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
-(void)window:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
-(void)window:(id)arg1 willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
-(void)window:(id)arg1 didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2;
-(void)window:(id)arg1 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg2 duration:(double)arg3;
-(void)window:(id)arg1 willAnimateFromContentFrame:(CGRect)arg2 toContentFrame:(CGRect)arg3;
-(id)rotatingFooterViewForWindow:(id)arg1;
-(id)rotatingHeaderViewForWindow:(id)arg1;
-(void)getRotationContentSettings:(SCD_Struct_SB6*)arg1 forWindow:(id)arg2;
-(id)rotatingSnapshotViewForWindow:(id)arg1;

@end

