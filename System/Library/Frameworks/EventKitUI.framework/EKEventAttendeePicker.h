/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MFContactsSearchConsumer.h>
#import <libobjc.A.dylib/MFComposeRecipientTextViewDelegate.h>
#import <libobjc.A.dylib/MFAutocompleteResultsTableViewControllerDelegate.h>

@protocol EKEventAttendeePickerDelegate;
@class NSArray, MFComposeRecipientTextView, UIScrollView, UITableView, MFSearchShadowView, UIKeyboard, NSNumber, NSOperationQueue, NSMutableDictionary, EKEvent, NSDate, MFContactsSearchManager, NSMutableArray, MFAutocompleteResultsTableViewController, CNAutocompleteFetchContext, CNContactStore, NSString;

@interface EKEventAttendeePicker : UIViewController <MFContactsSearchConsumer, MFComposeRecipientTextViewDelegate, MFAutocompleteResultsTableViewControllerDelegate> {

	NSArray* _recipients;
	MFComposeRecipientTextView* _composeRecipientView;
	UIScrollView* _recipientScrollView;
	UITableView* _searchResultsView;
	MFSearchShadowView* _shadowView;
	BOOL _showingSearchField;
	UIKeyboard* _keyboard;
	NSNumber* _lastSearchId;
	BOOL _ABAccessDenied;
	BOOL _shouldReenableAutomaticKeyboard;
	CGRect _initialFrame;
	NSOperationQueue* _availabilityQueue;
	NSMutableDictionary* _recipientAddressesToRecipients;
	EKEvent* _event;
	NSMutableDictionary* _atomPresentationOptionsByRecipient;
	BOOL _suppressAvailabilityRequests;
	NSDate* _overriddenEventStartDate;
	NSDate* _overriddenEventEndDate;
	MFContactsSearchManager* _searchManager;
	NSMutableArray* _searchResults;
	MFAutocompleteResultsTableViewController* _autocompleteTableViewController;
	CNAutocompleteFetchContext* _fetchContext;
	CNContactStore* _store;
	NSString* _searchAccountID;
	id<EKEventAttendeePickerDelegate> _emailValidationDelegate;

}

@property (nonatomic,copy) NSString * searchAccountID;                                                      //@synthesize searchAccountID=_searchAccountID - In the implementation block
@property (nonatomic,readonly) NSArray * addresses; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,readonly) NSString * remainingText; 
@property (assign,nonatomic,__weak) id<EKEventAttendeePickerDelegate> emailValidationDelegate;              //@synthesize emailValidationDelegate=_emailValidationDelegate - In the implementation block
@property (nonatomic,readonly) BOOL showAvailability; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_addressForRecipient:(id)arg1 ;
+(BOOL)_participantHasResponded:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_shadowView;
-(void)viewDidLoad;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4 ;
-(void)setSearchAccountID:(NSString *)arg1 ;
-(id)peoplePickerPrompt;
-(BOOL)showAvailability;
-(void)commitRemainingText;
-(Class)_CNContactStoreClass;
-(void)setEmailValidationDelegate:(id<EKEventAttendeePickerDelegate>)arg1 ;
-(Class)_CNAutocompleteFetchContextClass;
-(void)_setRecipientsOnComposeView;
-(BOOL)_zeroKeyworkSearchEnabled;
-(void)searchForCorecipients;
-(void)_requestAvailabilityForRecipients:(id)arg1 ;
-(void)_setAtomPresentationOption:(unsigned long long)arg1 forRecipient:(id)arg2 ;
-(id)_lookUpRecipientForAddress:(id)arg1 ;
-(void)_adjustLayoutOfSubviews;
-(id)_searchResultsView;
-(void)_showSearchResultsView;
-(void)_refreshSearchResults;
-(void)_hideSearchResultsViewAndCancelOutstandingSearches:(BOOL)arg1 ;
-(void)_updateFetchContextChosenAddresses;
-(double)_maxScrollerHeight;
-(Class)_CNContactPickerViewController;
-(Class)_CNContactViewController;
-(NSString *)remainingText;
-(void)_copyRecipientsFromComposeView;
-(id)emailAddressKey;
-(NSString *)searchAccountID;
-(id<EKEventAttendeePickerDelegate>)emailValidationDelegate;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)addresses;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(id)_searchManager;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForCorecipients;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3 ;
-(void)searchWithText:(id)arg1 ;
-(unsigned long long)presentationOptionsForRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2 ;
@end

