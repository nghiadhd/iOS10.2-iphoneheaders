/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/HealthSettings.bundle/HealthSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class HPRFHealthSettingsTableViewCell, _HPRFHealthSettingsDatePicker, _HPRFHealthSettingsPickerView, HKQuantity, HKUnit, NSDateComponents, HKHealthStore, NSMassFormatter, NSLengthFormatter, NSString;

@interface HPRFHealthSettingsController : PSListController <UIPickerViewDataSource, UIPickerViewDelegate> {

	HPRFHealthSettingsTableViewCell* _selectedCell;
	_HPRFHealthSettingsDatePicker* _birthdatePicker;
	HPRFHealthSettingsTableViewCell* _birthdateCell;
	_HPRFHealthSettingsPickerView* _biologicalSexPicker;
	HPRFHealthSettingsTableViewCell* _biologicalSexCell;
	_HPRFHealthSettingsPickerView* _heightPicker;
	HPRFHealthSettingsTableViewCell* _heightCell;
	BOOL _isMetricLocale;
	HKQuantity* _height;
	_HPRFHealthSettingsPickerView* _wheelchairUsePicker;
	HPRFHealthSettingsTableViewCell* _wheelchairUseCell;
	_HPRFHealthSettingsPickerView* _weightPicker;
	HPRFHealthSettingsTableViewCell* _weightCell;
	HKQuantity* _maxWeightQuantity;
	HKQuantity* _minWeightQuantity;
	long long _maxWeightInLocaleUnit;
	long long _minWeightInLocaleUnit;
	HKUnit* _localeWeightUnit;
	HKQuantity* _weight;
	BOOL _deviceSupportsWheelchair;
	BOOL _wheelchairUseChanged;
	BOOL _showMedicalID;
	NSDateComponents* _dateOfBirth;
	long long _biologicalSex;
	HKHealthStore* _healthStore;
	NSMassFormatter* _massFormatter;
	NSLengthFormatter* _lengthFormatter;
	long long _wheelchairUse;

}

@property (nonatomic,retain) NSDateComponents * dateOfBirth;                   //@synthesize dateOfBirth=_dateOfBirth - In the implementation block
@property (assign,nonatomic) long long biologicalSex;                          //@synthesize biologicalSex=_biologicalSex - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                      //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) NSMassFormatter * massFormatter;                  //@synthesize massFormatter=_massFormatter - In the implementation block
@property (nonatomic,retain) NSLengthFormatter * lengthFormatter;              //@synthesize lengthFormatter=_lengthFormatter - In the implementation block
@property (assign,nonatomic) long long wheelchairUse;                          //@synthesize wheelchairUse=_wheelchairUse - In the implementation block
@property (assign,nonatomic) BOOL wheelchairUseChanged;                        //@synthesize wheelchairUseChanged=_wheelchairUseChanged - In the implementation block
@property (assign,nonatomic) BOOL showMedicalID;                               //@synthesize showMedicalID=_showMedicalID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_textColor;
+(id)_backgroundColor;
-(void)_requestWheelchairDiagnosticsSubmissionIfNecessary;
-(void)setLengthFormatter:(NSLengthFormatter *)arg1 ;
-(void)setMassFormatter:(NSMassFormatter *)arg1 ;
-(void)_updateUserCharacteristics;
-(void)setShowMedicalID:(BOOL)arg1 ;
-(void)_updatePickersForHeight:(id)arg1 ;
-(void)_setHeight:(id)arg1 ;
-(void)_setBiologicalSex:(long long)arg1 ;
-(void)_setWeight:(id)arg1 ;
-(long long)_numFeetInInches:(long long)arg1 ;
-(void)_setDefaultValuesOnBirthdayPickerIfRequired;
-(void)birthdateChanged:(id)arg1 ;
-(void)_toggleEdit;
-(id)_birthdayDescription;
-(void)_setDefaultValuesOnHeightPickerIfRequired;
-(void)_setDefaultValuesOnWeightPickerIfRequired;
-(id)_minDate;
-(NSLengthFormatter *)lengthFormatter;
-(void)_updateWeight;
-(void)_updateHeight;
-(void)_updateDisplayWithHeightValue:(id)arg1 ;
-(BOOL)wheelchairUseChanged;
-(void)setWheelchairUseChanged:(BOOL)arg1 ;
-(id)_dateFromGregorianComponents:(id)arg1 ;
-(id)_displayStringForWheelchairUse:(long long)arg1 ;
-(id)_displayStringForBiologicalSex:(long long)arg1 ;
-(void)_resetSelectedCell;
-(id)_textDisplayStringForHeight:(id)arg1 ;
-(void)_setBirthday:(id)arg1 ;
-(void)_updateDisplayWithWeightValue:(id)arg1 ;
-(id)_displayStringForWeight:(long long)arg1 ;
-(NSMassFormatter *)massFormatter;
-(id)init;
-(void)dealloc;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_cancel;
-(BOOL)showMedicalID;
-(void)_heightPickerUpdated;
-(id)_pickerDisplayStringForHeightForRow:(long long)arg1 forComponent:(long long)arg2 ;
-(void)setWheelchairUse:(long long)arg1 ;
-(long long)wheelchairUse;
-(long long)biologicalSex;
-(void)setBiologicalSex:(long long)arg1 ;
-(void)_setWheelchairUse:(long long)arg1 ;
-(NSDateComponents *)dateOfBirth;
-(void)setDateOfBirth:(NSDateComponents *)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)specifiers;
@end

