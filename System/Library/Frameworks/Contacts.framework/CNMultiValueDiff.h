/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CNMultiValueDiff : NSObject {

	NSArray* _updates;

}

@property (nonatomic,copy,readonly) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
+(id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2 ;
+(id)emptyDiff;
-(void)dealloc;
-(id)description;
-(BOOL)isEmpty;
-(NSArray *)updates;
-(id)initWithUpdates:(id)arg1 ;
-(id)multiValueByApplyToMultiValue:(id)arg1 withIdentifierMap:(id)arg2 ;
-(BOOL)applyToABPerson:(void*)arg1 propertyDescription:(id)arg2 error:(id*)arg3 ;
@end
