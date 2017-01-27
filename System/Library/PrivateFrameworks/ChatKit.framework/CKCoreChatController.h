/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKScrollViewController.h>
#import <libobjc.A.dylib/IMChatSendProgressDelegate.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@protocol CKCoreChatControllerDelegate;
@class CKConversation, CKTranscriptCollectionViewController, CKScheduledUpdater, UIProgressView, CKFullScreenBalloonViewController, IMChat, CKTranscriptCollectionView, NSString;

@interface CKCoreChatController : CKScrollViewController <IMChatSendProgressDelegate, IMSystemMonitorListener> {

	BOOL _sendingMessage;
	BOOL _viewIsVisible;
	BOOL _transitionedFromComposing;
	BOOL _initialLayoutComplete;
	BOOL _ignoreLastBalloonVisibleInMarkAsReadCheck;
	BOOL _disableAnimationsUnderTest;
	id<CKCoreChatControllerDelegate> _delegate;
	CKConversation* _conversation;
	CKTranscriptCollectionViewController* _collectionViewController;
	CKScheduledUpdater* _refreshServiceForSendingUpdater;
	UIProgressView* _progressBar;
	double _sendProgress;
	unsigned long long _sendProgressSendCount;
	unsigned long long _sendProgressTotalCount;
	CKFullScreenBalloonViewController* _fullScreenBalloonViewController;

}

@property (nonatomic,retain) CKConversation * conversation;                                                    //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) IMChat * chat; 
@property (nonatomic,retain) CKTranscriptCollectionViewController * collectionViewController;                  //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (assign,nonatomic) BOOL initialLayoutComplete;                                                       //@synthesize initialLayoutComplete=_initialLayoutComplete - In the implementation block
@property (nonatomic,readonly) double balloonMaxWidth; 
@property (nonatomic,readonly) double gradientBottomPlaceholderHeight; 
@property (assign,nonatomic) BOOL ignoreLastBalloonVisibleInMarkAsReadCheck;                                   //@synthesize ignoreLastBalloonVisibleInMarkAsReadCheck=_ignoreLastBalloonVisibleInMarkAsReadCheck - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * refreshServiceForSendingUpdater;                             //@synthesize refreshServiceForSendingUpdater=_refreshServiceForSendingUpdater - In the implementation block
@property (nonatomic,retain) UIProgressView * progressBar;                                                     //@synthesize progressBar=_progressBar - In the implementation block
@property (assign,getter=isSendingMessage,nonatomic) BOOL sendingMessage;                                      //@synthesize sendingMessage=_sendingMessage - In the implementation block
@property (assign,nonatomic) double sendProgress;                                                              //@synthesize sendProgress=_sendProgress - In the implementation block
@property (assign,nonatomic) unsigned long long sendProgressSendCount;                                         //@synthesize sendProgressSendCount=_sendProgressSendCount - In the implementation block
@property (assign,nonatomic) unsigned long long sendProgressTotalCount;                                        //@synthesize sendProgressTotalCount=_sendProgressTotalCount - In the implementation block
@property (nonatomic,retain) CKFullScreenBalloonViewController * fullScreenBalloonViewController;              //@synthesize fullScreenBalloonViewController=_fullScreenBalloonViewController - In the implementation block
@property (assign,nonatomic) BOOL disableAnimationsUnderTest;                                                  //@synthesize disableAnimationsUnderTest=_disableAnimationsUnderTest - In the implementation block
@property (assign,nonatomic,__weak) id<CKCoreChatControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CKTranscriptCollectionView * collectionView; 
@property (nonatomic,readonly) BOOL shouldDismissAfterSend; 
@property (assign,nonatomic) BOOL viewIsVisible;                                                               //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
@property (assign,nonatomic) BOOL transitionedFromComposing;                                                   //@synthesize transitionedFromComposing=_transitionedFromComposing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CKCoreChatControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CKCoreChatControllerDelegate>)delegate;
-(void)significantTimeChange;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)_setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(CKTranscriptCollectionView *)collectionView;
-(id)scrollView;
-(id)textInputContextIdentifier;
-(CKTranscriptCollectionViewController *)collectionViewController;
-(void)setCollectionViewController:(CKTranscriptCollectionViewController *)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)viewDidAppearDeferredSetup;
-(CKConversation *)conversation;
-(id)initWithConversation:(id)arg1 ;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(IMChat *)chat;
-(BOOL)isSendingMessage;
-(void)setSendingMessage:(BOOL)arg1 ;
-(void)sendComposition:(id)arg1 ;
-(BOOL)shouldDismissAfterSend;
-(id)gradientReferenceView;
-(void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2 ;
-(void)transcriptCollectionViewControllerDidInset:(id)arg1 ;
-(BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1 ;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1 ;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(CGSize)arg2 ;
-(void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1 ;
-(void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1 ;
-(void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1 ;
-(void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg1 ;
-(BOOL)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2 ;
-(BOOL)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg1 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2 ;
-(id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2 ;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidResume;
-(BOOL)viewIsVisible;
-(BOOL)initialLayoutComplete;
-(void)parentControllerDidBecomeActive;
-(void)_performResume;
-(void)prepareForSuspend;
-(CKFullScreenBalloonViewController *)fullScreenBalloonViewController;
-(void)_dismissFullScreenBubbleViewControllerWithSendAnimation:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateNavigationButtons;
-(void)_willSendComposition:(id)arg1 inConversation:(id)arg2 ;
-(void)_didSendCompositionInConversation:(id)arg1 ;
-(void)_setConversationDeferredSetup;
-(double)balloonMaxWidth;
-(void)_updateForNewPreferredService;
-(BOOL)isSafeToMarkAsRead;
-(void)_markAsReadIfNecessary;
-(UIProgressView *)progressBar;
-(void)registerNotifications;
-(void)registerNotificationsForConversation:(id)arg1 ;
-(void)_displayNameUpdatedNotification:(id)arg1 ;
-(void)_updateTitleAnimated:(BOOL)arg1 ;
-(void)setupScrollingForKeyboardInteraction;
-(CGRect)fullScreenBalloonViewController:(id)arg1 balloonFrameForChatItem:(id)arg2 ;
-(void)showFullScreenAcknowledgmentPickerForBalloonAtIndexPath:(id)arg1 showActionMenu:(BOOL)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(BOOL)arg2 ;
-(void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(BOOL)arg2 ;
-(void)fullScreenBalloonViewControllerDidDisappear:(id)arg1 ;
-(void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3 ;
-(void)fullScreenBalloonViewController:(id)arg1 didAppearAnimated:(BOOL)arg2 ;
-(void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg1 ;
-(void)setupStateForLaunchURL:(id)arg1 ;
-(double)gradientBottomPlaceholderHeight;
-(void)_transferFinishedNotification:(id)arg1 ;
-(void)_transferRestoredNotification:(id)arg1 ;
-(id)_fullScreenBalloonViewControllerWithChatItem:(id)arg1 showActionMenu:(BOOL)arg2 ;
-(void)refreshServiceForSending;
-(BOOL)transitionedFromComposing;
-(void)setTransitionedFromComposing:(BOOL)arg1 ;
-(CKScheduledUpdater *)refreshServiceForSendingUpdater;
-(void)_refreshServiceForSending;
-(void)setRefreshServiceForSendingUpdater:(CKScheduledUpdater *)arg1 ;
-(void)setViewIsVisible:(BOOL)arg1 ;
-(void)_registerSendProgressDelegate;
-(void)_deregisterSendProgressDelegate;
-(void)setInitialLayoutComplete:(BOOL)arg1 ;
-(void)_removeExistingCollectionViewController;
-(CGRect)gradientFrameWithInsets:(UIEdgeInsets)arg1 ;
-(void)_handleTapEventForBalloonView:(id)arg1 atIndexPath:(id)arg2 showActionMenu:(BOOL)arg3 ;
-(void)setIgnoreLastBalloonVisibleInMarkAsReadCheck:(BOOL)arg1 ;
-(BOOL)ignoreLastBalloonVisibleInMarkAsReadCheck;
-(void)setProgressBar:(UIProgressView *)arg1 ;
-(BOOL)disableAnimationsUnderTest;
-(void)_preferredServiceChangedNotification:(id)arg1 ;
-(void)_downgradeStateChangedNotification:(id)arg1 ;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(void)_handleAddressBookChangedNotification:(id)arg1 ;
-(void)_refreshActiveChat:(id)arg1 ;
-(void)preferredSendingServiceChanged;
-(void)showFullScreenAcknowledgmentPickerForChatItem:(id)arg1 showActionMenu:(BOOL)arg2 ;
-(void)setFullScreenBalloonViewController:(CKFullScreenBalloonViewController *)arg1 ;
-(void)chat:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(BOOL)arg6 ;
-(void)contentInsetWillChange:(UIEdgeInsets)arg1 animated:(BOOL)arg2 duration:(double)arg3 ;
-(void)contentInsetDidChange;
-(void)keyboardWillHideViaGesture;
-(double)sendProgress;
-(void)setSendProgress:(double)arg1 ;
-(unsigned long long)sendProgressSendCount;
-(void)setSendProgressSendCount:(unsigned long long)arg1 ;
-(unsigned long long)sendProgressTotalCount;
-(void)setSendProgressTotalCount:(unsigned long long)arg1 ;
-(void)setDisableAnimationsUnderTest:(BOOL)arg1 ;
@end

