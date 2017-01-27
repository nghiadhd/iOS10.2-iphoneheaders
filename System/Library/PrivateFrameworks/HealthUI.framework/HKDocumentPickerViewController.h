/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKCDADocumentTableViewCellDelegate.h>

@protocol HKDocumentPickerViewControllerDelegate;
@class NSMutableArray, HKHealthStore, HKSource, NSSet, NSMutableSet;

@interface HKDocumentPickerViewController : HKTableViewController <HKCDADocumentTableViewCellDelegate> {

	NSMutableArray* _samplesList;
	long long _presentationStyle;
	HKHealthStore* _healthStore;
	BOOL _hasPendingDocumentFetch;
	HKSource* _source;
	BOOL _showCheckboxes;
	NSSet* _allSamples;
	NSMutableSet* _enabledSamples;
	id<HKDocumentPickerViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) NSMutableSet * enabledSamples;                                           //@synthesize enabledSamples=_enabledSamples - In the implementation block
@property (nonatomic,retain) HKSource * source;                                                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSSet * allSamples;                                                    //@synthesize allSamples=_allSamples - In the implementation block
@property (assign,nonatomic,__weak) id<HKDocumentPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<HKDocumentPickerViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<HKDocumentPickerViewControllerDelegate>)delegate;
-(void)setSource:(HKSource *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_tableHeaderView;
-(void)viewDidLoad;
-(HKSource *)source;
-(void)_cancel:(id)arg1 ;
-(NSSet *)allSamples;
-(void)_finishWithError:(id)arg1 ;
-(id)initWithDocuments:(id)arg1 presentationStyle:(long long)arg2 ;
-(BOOL)_isPrompting;
-(void)_addCancelAndDoneButtons;
-(void)_enableDocumentSample:(id)arg1 enabled:(BOOL)arg2 ;
-(BOOL)_needsSampleRequestDescription;
-(void)cdaDocumentTableViewCellDidChangeValue:(id)arg1 ;
-(id)initWithDocumentAuthorizations:(id)arg1 ;
-(void)pushDetailForDocumentSample:(id)arg1 ;
-(NSMutableSet *)enabledSamples;
-(void)setEnabledSamples:(NSMutableSet *)arg1 ;
-(void)_done:(id)arg1 ;
@end

