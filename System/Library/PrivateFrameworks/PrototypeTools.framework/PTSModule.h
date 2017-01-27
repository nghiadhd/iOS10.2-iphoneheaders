/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UISettingsKeyPathObserver.h>
#import <libobjc.A.dylib/PTSSectionObserver.h>

@class NSHashTable, NSMutableArray, _UISettings, NSString;

@interface PTSModule : NSObject <_UISettingsKeyPathObserver, PTSSectionObserver> {

	NSHashTable* _observers;
	NSMutableArray* _allSections;
	NSMutableArray* _enabledSections;
	_UISettings* _settings;
	NSString* _title;

}

@property (nonatomic,retain) NSMutableArray * allSections;                  //@synthesize allSections=_allSections - In the implementation block
@property (nonatomic,retain) NSMutableArray * enabledSections;              //@synthesize enabledSections=_enabledSections - In the implementation block
@property (nonatomic,retain) _UISettings * settings;                        //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)px_restoreDefaultsModule;
+(id)sectionWithRows:(id)arg1 ;
+(id)moduleWithTitle:(id)arg1 contents:(id)arg2 ;
+(id)sectionWithRows:(id)arg1 title:(id)arg2 ;
+(id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2 condition:(id)arg3 ;
+(id)moduleWithSettings:(id)arg1 ;
+(id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2 ;
+(id)sectionWithRows:(id)arg1 title:(id)arg2 condition:(id)arg3 ;
+(id)sectionWithRows:(id)arg1 title:(id)arg2 conditionFormat:(id)arg3 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)numberOfSections;
-(_UISettings *)settings;
-(void)addObserver:(id)arg1 ;
-(NSString *)title;
-(void)removeObserver:(id)arg1 ;
-(void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)setSettings:(_UISettings *)arg1 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(void)section:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3 ;
-(void)sectionDidReload:(id)arg1 ;
-(void)enumerateAllRowsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEnabledRowsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasEnabledEditableRows;
-(id)initWithContents:(id)arg1 ;
-(void)_addSubmodule:(id)arg1 ;
-(id)_settingsForSection:(id)arg1 ;
-(void)_updateEnabledSections;
-(BOOL)_shouldEnableSection:(id)arg1 ;
-(id)destinationForRowAtIndexPath:(id)arg1 withProposedDestination:(id)arg2 ;
-(void)setAllSections:(NSMutableArray *)arg1 ;
-(id)indexPathForRow:(id)arg1 ;
-(void)deleteRowAtIndexPath:(id)arg1 ;
-(NSMutableArray *)allSections;
-(id)rowAtIndexPath:(id)arg1 ;
-(NSMutableArray *)enabledSections;
-(void)setEnabledSections:(NSMutableArray *)arg1 ;
-(void)_addSection:(id)arg1 ;
@end

