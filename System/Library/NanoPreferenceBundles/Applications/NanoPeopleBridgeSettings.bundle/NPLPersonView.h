/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPeopleBridgeSettings.bundle/NanoPeopleBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPeopleBridgeSettings/NanoPeopleBridgeSettings-Structs.h>
#import <UIKit/UIControl.h>
#import <NanoPeopleBridgeSettings/NPLPhotoCacheObserver.h>

@class NPLPersonContentView, FKPerson, UIView, NSString;

@interface NPLPersonView : UIControl <NPLPhotoCacheObserver> {

	long long _style;
	NPLPersonContentView* _contentView;
	NPLPersonContentView* _selectedContentView;
	FKPerson* _person;
	BOOL _suppressHighlightChanges;
	unsigned long long _position;

}

@property (assign,nonatomic) BOOL suppressHighlightChanges;               //@synthesize suppressHighlightChanges=_suppressHighlightChanges - In the implementation block
@property (nonatomic,readonly) UIView * selectedContentView; 
@property (assign,nonatomic) unsigned long long position;                 //@synthesize position=_position - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_NP1)specValuesForStyle:(long long)arg1 ;
+(double)imageSizeForStyle:(long long)arg1 ;
+(id)allImageSizes;
-(void)reloadContentAnimated:(BOOL)arg1 ;
-(void)_applyStateToContentView:(id)arg1 ;
-(void)setPerson:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSuppressHighlightChanges:(BOOL)arg1 ;
-(UIView *)selectedContentView;
-(BOOL)suppressHighlightChanges;
-(void)setEmptySlotWithPosition:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)applyChangeSet:(id)arg1 ;
-(id)personImage;
-(void)handlePhotoCacheUpdateForPerson:(id)arg1 photo:(id)arg2 style:(long long)arg3 ;
-(void)dealloc;
-(void)setPosition:(unsigned long long)arg1 ;
-(unsigned long long)position;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)renderedImage;
-(void)setPerson:(id)arg1 ;
-(id)person;
@end

