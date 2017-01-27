/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RUIElement.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/RUITableViewRowDelegate.h>
#import <libobjc.A.dylib/RUITableViewSectionDelegate.h>
#import <libobjc.A.dylib/RUITopLevelPageElement.h>
#import <libobjc.A.dylib/RUIWebViewDelegate.h>

@protocol RUIHeader;
@class NSMutableArray, UITableView, UIDatePicker, RUIPhotoPicker, _UIBackdropView, NSIndexPath, RUITableViewRow, RUIBarButtonItem, NSDate, UIView, RUIObjectModel, RUIPage, RUIHeaderElement, RUISubHeaderElement, RUIFooterElement, NSString, UIPickerView, NSDictionary;

@interface RUITableView : RUIElement <UITableViewDataSource, UITableViewDelegate, RUITableViewRowDelegate, RUITableViewSectionDelegate, RUITopLevelPageElement, RUIWebViewDelegate> {

	NSMutableArray* _sections;
	UITableView* _tableView;
	BOOL _showSelectPicker;
	UIDatePicker* _datePicker;
	RUIPhotoPicker* _photoPicker;
	BOOL _showDatePicker;
	_UIBackdropView* _pickerBackdrop;
	NSIndexPath* _pickerRowIndexPath;
	NSIndexPath* _embeddedPickerRowIndexPath;
	RUITableViewRow* _defaultFirstResponderRow;
	BOOL _registeredForNotifications;
	float _lastLayoutWidth;
	float _fullscreenCellHeight;
	BOOL _showingPickerNavBarButtons;
	RUIBarButtonItem* _oldLeftBarButtonItemForPicker;
	RUIBarButtonItem* _oldRightBarButtonItemForPicker;
	NSDate* _oldPickerDate;
	UIView*<RUIHeader> _headerView;
	RUIObjectModel* _objectModel;
	RUIPage* _page;
	RUIHeaderElement* _header;
	RUISubHeaderElement* _subHeader;
	RUIFooterElement* _footer;
	NSString* _headerTitle;
	UIPickerView* _selectPicker;

}

@property (nonatomic,retain) UIPickerView * selectPicker;                              //@synthesize selectPicker=_selectPicker - In the implementation block
@property (getter=isShowingPicker,nonatomic,readonly) BOOL showingPicker; 
@property (nonatomic,readonly) NSMutableArray * sections;                              //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) RUITableViewRow * defaultFirstResponderRow;               //@synthesize defaultFirstResponderRow=_defaultFirstResponderRow - In the implementation block
@property (assign,nonatomic,__weak) RUIObjectModel * objectModel;                      //@synthesize objectModel=_objectModel - In the implementation block
@property (assign,nonatomic,__weak) RUIPage * page;                                    //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) UIView*<RUIHeader> headerView; 
@property (nonatomic,retain) RUIHeaderElement * header;                                //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) RUISubHeaderElement * subHeader;                          //@synthesize subHeader=_subHeader - In the implementation block
@property (nonatomic,retain) RUIFooterElement * footer;                                //@synthesize footer=_footer - In the implementation block
@property (nonatomic,retain) NSString * headerTitle;                                   //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,readonly) NSDictionary * headerViewAttributes; 
@property (nonatomic,retain) NSDictionary * footerViewAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_enableTestMode;
-(id)init;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)view;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)titleLabel;
-(long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(id)tableView;
-(UIView*<RUIHeader>)headerView;
-(void)setAttributes:(id)arg1 ;
-(RUIPage *)page;
-(void)setPage:(RUIPage *)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(NSMutableArray *)sections;
-(id)sourceURL;
-(void)setSelectedRadioGroupRow:(id)arg1 ;
-(void)setSubHeader:(RUISubHeaderElement *)arg1 ;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(void)viewDidLayout;
-(RUIObjectModel *)objectModel;
-(id)subElementsWithName:(id)arg1 ;
-(id)rowWithIdentifier:(id)arg1 ;
-(id)objectModelRowForIndexPath:(id)arg1 ;
-(BOOL)webViewOM:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)automaticKeyboardDidShow:(id)arg1 ;
-(void)automaticKeyboardDidHide:(id)arg1 ;
-(void)_registerForNotifications:(BOOL)arg1 ;
-(id)_objectModelIndexPathForIndexPath:(id)arg1 ;
-(void)_loadHeaderView;
-(CGSize)_tableHeaderSizeForHeader:(id)arg1 ;
-(RUITableViewRow *)defaultFirstResponderRow;
-(id)indexPathForRow:(id)arg1 ;
-(void)activateRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDefaultFirstResponderRow:(RUITableViewRow *)arg1 ;
-(void)_clearPickers;
-(void)_datePickerRevert;
-(void)hidePickerViewAnimated:(BOOL)arg1 ;
-(void)datePickerCancel:(id)arg1 ;
-(void)datePickerDone:(id)arg1 ;
-(void)_hideDatePickerNavBarButtonsIfNeeded;
-(CGRect)_selectPickerFrame;
-(void)_showDatePickerNavBarButtonsIfNeededForRow:(id)arg1 ;
-(void)showPickerViewForRow:(id)arg1 animated:(BOOL)arg2 ;
-(void)rowDidChange:(id)arg1 action:(int)arg2 ;
-(void)_enumerateRowsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_becomeFirstResponderAtIndexPath:(id)arg1 ;
-(id)sourceURLForRUITableViewRow;
-(void)rowDidEndEditing:(id)arg1 ;
-(void)rowIsFirstResponder:(id)arg1 ;
-(id)textFieldRow:(id)arg1 changeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(Class)tableCellClassForTableViewRow:(id)arg1 ;
-(void)row:(id)arg1 activatedElement:(id)arg2 ;
-(void)section:(id)arg1 activatedElement:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sourceURLForRUITableViewSection;
-(void)_setBottomInset:(float)arg1 ;
-(void)reloadHeadersAndFootersForSection:(id)arg1 ;
-(void)setHeaderViewAttributes:(NSDictionary *)arg1 ;
-(void)setFooterViewAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)headerViewAttributes;
-(NSDictionary *)footerViewAttributes;
-(void)textFieldStartedEditing:(id)arg1 ;
-(UIPickerView *)selectPicker;
-(void)setSelectPicker:(UIPickerView *)arg1 ;
-(void)_textChanged:(id)arg1 ;
-(RUIHeaderElement *)header;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(BOOL)isShowingPicker;
-(void)setHeader:(RUIHeaderElement *)arg1 ;
-(RUIFooterElement *)footer;
-(void)setFooter:(RUIFooterElement *)arg1 ;
-(RUISubHeaderElement *)subHeader;
@end

