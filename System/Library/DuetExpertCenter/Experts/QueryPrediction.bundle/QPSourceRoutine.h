/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetExpertCenter/Experts/QueryPrediction.bundle/QueryPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QueryPrediction/QPSource.h>

@class NSString, RTRoutineManager, NSArray, NSDate, NSPredicate;

@interface QPSourceRoutine : NSObject <QPSource> {

	RTRoutineManager* _manager;
	NSArray* _result;
	NSDate* _lastResultDate;

}

@property (readonly) NSPredicate * queryPredicate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * identifier; 
-(id)queryWithLimit:(unsigned long long)arg1 abGroup:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(void)receiveResult:(id)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(NSPredicate *)queryPredicate;
@end

