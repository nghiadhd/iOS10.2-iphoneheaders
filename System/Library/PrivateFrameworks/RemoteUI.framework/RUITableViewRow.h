/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RUIElement.h>
#import <libobjc.A.dylib/RUIWebContainerViewDelegate.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol RUITableViewRowDelegate, RUITextFieldChangeObserver;
@class RemoteUITableViewCell, NSMutableArray, NSDate, UISwitch, NSDictionary, NSData, NSDateFormatter, UIView, RUIPage, UIControl, NSString;

@interface RUITableViewRow : RUIElement <RUIWebContainerViewDelegate, UIPickerViewDelegate, UITextFieldDelegate> {

	RemoteUITableViewCell* _tableCell;
	NSMutableArray* _selectOptions;
	long long _selectedRow;
	NSDate* _date;
	NSDate* _dateMax;
	NSDate* _dateMin;
	UISwitch* _switchControl;
	BOOL _switchValue;
	BOOL _rowInvalid;
	NSDictionary* _deleteAction;
	NSData* _data;
	float _cachedHeight;
	NSDateFormatter* _datePickerFormatter;
	BOOL _configured;
	BOOL _selected;
	BOOL _showingProgressIndicator;
	id<RUITableViewRowDelegate> _delegate;
	long long _datePickerMode;
	UIView* _pickerView;
	double _height;
	id<RUITextFieldChangeObserver> _textFieldChangeObserver;
	RUIPage* _linkedPage;
	long long _alignment;

}

@property (nonatomic,retain) NSDate * date;                                                                //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDate * dateMin;                                                             //@synthesize dateMin=_dateMin - In the implementation block
@property (nonatomic,retain) NSDate * dateMax;                                                             //@synthesize dateMax=_dateMax - In the implementation block
@property (assign,nonatomic,__weak) id<RUITableViewRowDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL rowInvalid;                                                              //@synthesize rowInvalid=_rowInvalid - In the implementation block
@property (nonatomic,retain) NSDictionary * deleteAction;                                                  //@synthesize deleteAction=_deleteAction - In the implementation block
@property (nonatomic,retain) NSData * data;                                                                //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long selectedRow;                                                      //@synthesize selectedRow=_selectedRow - In the implementation block
@property (nonatomic,readonly) long long datePickerMode;                                                   //@synthesize datePickerMode=_datePickerMode - In the implementation block
@property (nonatomic,retain) UIView * pickerView;                                                          //@synthesize pickerView=_pickerView - In the implementation block
@property (assign,nonatomic) double height;                                                                //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) BOOL configured;                                                              //@synthesize configured=_configured - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                              //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isShowingProgressIndicator,nonatomic) BOOL showingProgressIndicator;              //@synthesize showingProgressIndicator=_showingProgressIndicator - In the implementation block
@property (nonatomic,readonly) UIControl * control; 
@property (assign,nonatomic,__weak) id<RUITextFieldChangeObserver> textFieldChangeObserver;                //@synthesize textFieldChangeObserver=_textFieldChangeObserver - In the implementation block
@property (assign,nonatomic,__weak) RUIPage * linkedPage;                                                  //@synthesize linkedPage=_linkedPage - In the implementation block
@property (assign,nonatomic) long long alignment;                                                          //@synthesize alignment=_alignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)resetLocale;
+(id)_formatterForDateYMD;
+(id)_timeZoneAdjustedDateFromDate:(id)arg1 ;
+(id)_formatterForMonthAndDay;
+(id)_formatterForYearAndMonth;
+(id)_formatterForShortDate;
-(void)setAlignment:(long long)arg1 ;
-(void)setImage:(id)arg1 ;
-(UIView *)pickerView;
-(void)setPickerView:(UIView *)arg1 ;
-(void)setDelegate:(id<RUITableViewRowDelegate>)arg1 ;
-(void)dealloc;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(NSString *)description;
-(id<RUITableViewRowDelegate>)delegate;
-(NSDate *)date;
-(void)setEnabled:(BOOL)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(double)height;
-(long long)alignment;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(long long)datePickerMode;
-(id)tableCell;
-(void)setHeight:(double)arg1 ;
-(id)sourceURL;
-(void)setRowInvalid:(BOOL)arg1 ;
-(id)radioGroupSelectedColor;
-(void)populatePostbackDictionary:(id)arg1 ;
-(RUIPage *)linkedPage;
-(void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2 ;
-(void)setValueFromString:(id)arg1 ;
-(NSDictionary *)deleteAction;
-(void)setLinkedPage:(RUIPage *)arg1 ;
-(id)selectOptions;
-(void)setDeleteAction:(NSDictionary *)arg1 ;
-(void)clearCachedHeight;
-(id)dateFormatterCalendarIdentifier;
-(NSDate *)dateMin;
-(NSDate *)dateMax;
-(float)rowHeightWithMax:(float)arg1 peggedHeight:(float)arg2 tableView:(id)arg3 indexPath:(id)arg4 ;
-(BOOL)rowSupportsLoadingIndicator;
-(void)switchCanceled;
-(long long)tableCellStyle;
-(void)_updateContentForDisabledState;
-(id)textColorForAttributeName:(id)arg1 ;
-(void)accessoryImageLoaded;
-(Class)tableCellClass;
-(void)setEditableTextFieldValue:(id)arg1 ;
-(void)_switchFlipped:(id)arg1 ;
-(void)setDateMin:(NSDate *)arg1 ;
-(void)setDateMax:(NSDate *)arg1 ;
-(id)_datePickerFormatter;
-(void)setSelectRowValue:(id)arg1 ;
-(void)detailLabelActivatedLinkFromCell:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)loadAccessoryImage;
-(BOOL)setSelectPageRowValue:(id)arg1 ;
-(BOOL)rowInvalid;
-(BOOL)isShowingProgressIndicator;
-(id<RUITextFieldChangeObserver>)textFieldChangeObserver;
-(void)setTextFieldChangeObserver:(id<RUITextFieldChangeObserver>)arg1 ;
-(void)_datePickerChanged:(id)arg1 ;
-(UIControl *)control;
-(BOOL)supportsAutomaticSelection;
-(BOOL)configured;
-(long long)selectedRow;
-(void)setConfigured:(BOOL)arg1 ;
-(void)setShowingProgressIndicator:(BOOL)arg1 ;
@end

