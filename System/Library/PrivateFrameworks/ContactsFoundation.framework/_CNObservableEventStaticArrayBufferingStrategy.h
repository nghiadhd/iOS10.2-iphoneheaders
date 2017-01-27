/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/_CNObservableEventBufferingStrategy.h>

@class NSArray;

@interface _CNObservableEventStaticArrayBufferingStrategy : _CNObservableEventBufferingStrategy {

	NSArray* _events;

}

@property (nonatomic,readonly) NSArray * events;              //@synthesize events=_events - In the implementation block
-(id)initWithEvents:(id)arg1 ;
-(id)allEvents;
-(NSArray *)events;
-(void)addEvent:(id)arg1 ;
@end

