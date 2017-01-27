/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PLComposeRecipientViewControllerDelegate.h>
#import <libobjc.A.dylib/PLInvitationRecordsObserver.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol PLAlbumStreamingOptionsViewControllerDelegate;
@class NSArray, NSString, PLCloudSharedAlbum, PLComposeRecipientViewController, UIBarButtonItem, UITableView, UISwitch, NSOperationQueue, ACAccountStore, AAUIProfilePictureStore, NSMutableDictionary, PLCloudSharedAlbumInvitationRecord;

@interface PLAlbumStreamingOptionsViewController : UIViewController <PLComposeRecipientViewControllerDelegate, PLInvitationRecordsObserver, UITableViewDataSource, UITableViewDelegate> {

	NSArray* _visibleInvitationRecords;
	NSString* _visiblePublicURL;
	BOOL _showShareLink;
	PLCloudSharedAlbum* _album;
	id<PLAlbumStreamingOptionsViewControllerDelegate> _delegate;
	PLComposeRecipientViewController* _composeRecipientController;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _doneButton;
	UITableView* _optionsTableView;
	UISwitch* _wantsPublicWebsiteSwitch;
	UISwitch* _wantsMultipleContributorsSwitch;
	UISwitch* _wantsAcceptCloudNotificationSwitch;
	BOOL _adjustedInsetsForKeyboard;
	unsigned long long _addSubscribersRow;
	NSOperationQueue* _familyRequestQueue;
	ACAccountStore* _familyAccountStore;
	NSArray* _familyMembers;
	AAUIProfilePictureStore* _familyMemberPictureStore;
	NSMutableDictionary* _familyProfilePictures;
	BOOL _isPresentedModally;
	BOOL _streamOwner;
	BOOL __shouldScrollToTopOnNextViewLayout;
	BOOL _albumIsFamilyStream;
	NSString* _albumName;
	PLCloudSharedAlbumInvitationRecord* __selectedSubscriberInvitationRecord;
	NSString* __lastPublicURLSectionFooterTitle;
	NSString* __lastMultiContributorsSectionFooterTitle;

}

@property (nonatomic,retain) PLCloudSharedAlbum * album;                                                                                                           //@synthesize album=_album - In the implementation block
@property (nonatomic,copy) NSString * albumName;                                                                                                                   //@synthesize albumName=_albumName - In the implementation block
@property (assign,nonatomic) BOOL streamOwner;                                                                                                                     //@synthesize streamOwner=_streamOwner - In the implementation block
@property (setter=_setSelectedSubscriberInvitationRecord:,nonatomic,retain) PLCloudSharedAlbumInvitationRecord * _selectedSubscriberInvitationRecord;              //@synthesize _selectedSubscriberInvitationRecord=__selectedSubscriberInvitationRecord - In the implementation block
@property (assign,setter=_setShouldScrollToTopOnNextViewLayout:,nonatomic) BOOL _shouldScrollToTopOnNextViewLayout;                                                //@synthesize _shouldScrollToTopOnNextViewLayout=__shouldScrollToTopOnNextViewLayout - In the implementation block
@property (setter=_setLastPublicURLSectionFooterTitle:,nonatomic,copy) NSString * _lastPublicURLSectionFooterTitle;                                                //@synthesize _lastPublicURLSectionFooterTitle=__lastPublicURLSectionFooterTitle - In the implementation block
@property (setter=_setLastMultiContributorsSectionFooterTitle:,nonatomic,copy) NSString * _lastMultiContributorsSectionFooterTitle;                                //@synthesize _lastMultiContributorsSectionFooterTitle=__lastMultiContributorsSectionFooterTitle - In the implementation block
@property (assign,nonatomic) BOOL albumIsFamilyStream;                                                                                                             //@synthesize albumIsFamilyStream=_albumIsFamilyStream - In the implementation block
@property (assign,nonatomic) id<PLAlbumStreamingOptionsViewControllerDelegate> delegate;                                                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isPresentedModally;                                                                                                              //@synthesize isPresentedModally=_isPresentedModally - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PLAlbumStreamingOptionsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id<PLAlbumStreamingOptionsViewControllerDelegate>)delegate;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(void)setStreamOwner:(BOOL)arg1 ;
-(void)setAlbumIsFamilyStream:(BOOL)arg1 ;
-(void)_updateWantsPublicWebsiteField;
-(void)_updateWantsAcceptCloudNotificationField;
-(void)_updateWantsMultipleContributorsField;
-(void)_updatePublicURLStateIfNecessaryAnimated:(BOOL)arg1 ;
-(void)_updateMultipleContributorsState;
-(void)_updateAllControls;
-(void)_setShouldScrollToTopOnNextViewLayout:(BOOL)arg1 ;
-(id)_suppresionContexts;
-(BOOL)isPresentedModally;
-(BOOL)_shouldScrollToTopOnNextViewLayout;
-(void)_handleCompletionWithReason:(int)arg1 ;
-(BOOL)streamOwner;
-(void)_deletePhotoStream;
-(void)_displayConfirmationWithMessage:(id)arg1 destructiveTitle:(id)arg2 actionHandler:(/*^block*/id)arg3 ;
-(BOOL)_publicURLEnabled;
-(NSString *)_lastPublicURLSectionFooterTitle;
-(void)_setLastPublicURLSectionFooterTitle:(id)arg1 ;
-(NSString *)_lastMultiContributorsSectionFooterTitle;
-(void)_setLastMultiContributorsSectionFooterTitle:(id)arg1 ;
-(id)_personMatchingEmail:(id)arg1 orPhone:(id)arg2 withFirstName:(id)arg3 lastName:(id)arg4 outMatchingKey:(id*)arg5 outMatchingIdentifier:(id*)arg6 keysToFetch:(id)arg7 ;
-(void)_resendInvitationToSelectedSubscriber;
-(void)_displayConfirmationForRemovalOfSelectedSubscriber;
-(PLCloudSharedAlbumInvitationRecord *)_selectedSubscriberInvitationRecord;
-(void)_removeSelectedSubscriber;
-(id)_visibleInvitationRecordsForStreamOwner:(BOOL)arg1 ;
-(BOOL)albumIsFamilyStream;
-(void)_changeWantsMultipleContributors:(id)arg1 ;
-(void)_changeWantsPublicWebsite:(id)arg1 ;
-(void)_changeWantsAcceptCloudNotification:(id)arg1 ;
-(BOOL)_multipleContributorsEnabled;
-(BOOL)_shouldShowPublicURLActivitySpinner;
-(void)_setShowingPublicURLActivitySpinner:(BOOL)arg1 ;
-(void)_setSelectedSubscriberInvitationRecord:(id)arg1 ;
-(id)_personViewControllerWithEmail:(id)arg1 phone:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 canResendInvitation:(BOOL)arg5 canRemoveSubscriber:(BOOL)arg6 ;
-(void)_displayActivitySheet;
-(void)_displayDeleteConfirmation:(id)arg1 ;
-(void)_setShowingMultipleContributorSpinner:(BOOL)arg1 ;
-(void)setIsPresentedModally:(BOOL)arg1 ;
-(PLCloudSharedAlbum *)album;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(void)_cancelAction:(id)arg1 ;
-(void)_doneAction:(id)arg1 ;
-(void)setAlbum:(PLCloudSharedAlbum *)arg1 ;
-(void)invitationRecordsDidChange:(id)arg1 ;
-(BOOL)_appAllowsSupressionOfAlerts;
-(id)initWithAlbum:(id)arg1 ;
-(id)backingNavigationControllerForComposeRecipientViewController:(id)arg1 ;
@end

