/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIGestureRecognizer, UIView, _UIFeedbackStatesBehavior;


@protocol UIForcePresentationController <NSObject>
@property (nonatomic,copy) id presentationPhaseCompletionBlock; 
@property (nonatomic,retain) UIGestureRecognizer * panningGestureRecognizer; 
@property (assign,nonatomic) BOOL _sourceViewSnapshotAndScaleTransformSuppressed; 
@property (nonatomic,readonly) UIView * _revealContainerView; 
@property (nonatomic,retain) _UIFeedbackStatesBehavior * feedbackBehavior; 
@property (assign,nonatomic,__weak) id<_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate; 
@optional
-(void)_willCommitPresentation;

@required
-(BOOL)_canDismissPresentation;
-(BOOL)_canCommitPresentation;
-(id)presentationPhaseCompletionBlock;
-(void)setPresentationPhaseCompletionBlock:(/*^block*/id)arg1;
-(UIGestureRecognizer *)panningGestureRecognizer;
-(void)setPanningGestureRecognizer:(id)arg1;
-(BOOL)_sourceViewSnapshotAndScaleTransformSuppressed;
-(void)set_sourceViewSnapshotAndScaleTransformSuppressed:(BOOL)arg1;
-(UIView *)_revealContainerView;
-(_UIFeedbackStatesBehavior *)feedbackBehavior;
-(void)setFeedbackBehavior:(id)arg1;
-(id<_UIForcePresentationControllerDelegate>)forcePresentationControllerDelegate;
-(void)setForcePresentationControllerDelegate:(id)arg1;

@end

