/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPredicate, NSArray;

@interface _CNContactMatchingFetchRequestInfos : NSObject {

	NSPredicate* _predicate;
	NSArray* _properties;

}

@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * properties;                 //@synthesize properties=_properties - In the implementation block
+(id)fetchRequestInfoForPredicate:(id)arg1 properties:(id)arg2 ;
-(void)dealloc;
-(void)setProperties:(NSArray *)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)properties;
@end

