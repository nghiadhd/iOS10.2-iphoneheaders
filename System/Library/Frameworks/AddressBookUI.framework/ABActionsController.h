/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSString, ABUIPerson;

@interface ABActionsController : NSObject {

	int _property;
	int _multiValueIdentifier;
	id _value;
	NSString* _stringValue;
	void* _context;
	int _lastPropertyForActions;
	CFArrayRef _actionsForProperty;
	ABUIPerson* _person;

}

@property (nonatomic,retain) ABUIPerson * person;              //@synthesize person=_person - In the implementation block
+(int)defaultActionForProperty:(int)arg1 ;
+(id)newActionsControllerForProperty:(int)arg1 ;
-(id)initWithProperty:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void*)context;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(void)setContext:(void*)arg1 ;
-(void)setPerson:(ABUIPerson *)arg1 ;
-(ABUIPerson *)person;
-(int)defaultAction;
-(void)performDefaultAction;
-(void)performAction:(int)arg1 ;
-(CFArrayRef)_actionsForProperty:(int)arg1 ;
-(int)_actionAtIndex:(long long)arg1 forProperty:(int)arg2 ;
-(id)titleForAction:(int)arg1 ;
-(void)_performAction:(int)arg1 forProperty:(int)arg2 ;
-(id)urlForAction:(int)arg1 forProperty:(int)arg2 ;
-(long long)actionsCountForProperty:(int)arg1 ;
-(id)titleAtIndex:(long long)arg1 forProperty:(int)arg2 ;
-(void)resetPrimaryPropertyActions;
-(void)performActionAtIndex:(long long)arg1 forProperty:(int)arg2 ;
-(void)setMultiValueIdentifier:(int)arg1 ;
@end

